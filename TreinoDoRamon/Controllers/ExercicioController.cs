using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Mvc;
using Microsoft.AspNetCore.Mvc.Rendering;
using Microsoft.EntityFrameworkCore;
using TreinoDoRamon.Models;

namespace TreinoDoRamon.Controllers
{
    public class ExercicioController : Controller
    {
        private readonly TreinoDoRamonContext _context;

        public ExercicioController(TreinoDoRamonContext context)
        {
            _context = context;
        }

        // GET: Exercicio
        public async Task<IActionResult> Index()
        {
            return View(await _context.Exercicios.ToListAsync());
        }

        // GET: Exercicio/Details/5
        public async Task<IActionResult> Details(int? id)
        {
            if (id == null)
            {
                return NotFound();
            }

            var exercicio = await _context.Exercicios
                .FirstOrDefaultAsync(m => m.Idexercicios == id);
            if (exercicio == null)
            {
                return NotFound();
            }

            return View(exercicio);
        }

        // GET: Exercicio/Create
        public IActionResult Create()
        {
            return View();
        }

        // POST: Exercicio/Create
        // To protect from overposting attacks, enable the specific properties you want to bind to, for 
        // more details, see http://go.microsoft.com/fwlink/?LinkId=317598.
        [HttpPost]
        [ValidateAntiForgeryToken]
        public async Task<IActionResult> Create([Bind("Idexercicios,Nome,Musculo,Imagem,Tempomax")] Exercicio exercicio)
        {
            if (ModelState.IsValid)
            {
                _context.Add(exercicio);
                await _context.SaveChangesAsync();
                return RedirectToAction(nameof(Index));
            }
            return View(exercicio);
        }

        // GET: Exercicio/Edit/5
        public async Task<IActionResult> Edit(int? id)
        {
            if (id == null)
            {
                return NotFound();
            }

            var exercicio = await _context.Exercicios.FindAsync(id);
            if (exercicio == null)
            {
                return NotFound();
            }
            return View(exercicio);
        }

        // POST: Exercicio/Edit/5
        // To protect from overposting attacks, enable the specific properties you want to bind to, for 
        // more details, see http://go.microsoft.com/fwlink/?LinkId=317598.
        [HttpPost]
        [ValidateAntiForgeryToken]
        public async Task<IActionResult> Edit(int id, [Bind("Idexercicios,Nome,Musculo,Imagem,Tempomax")] Exercicio exercicio)
        {
            if (id != exercicio.Idexercicios)
            {
                return NotFound();
            }

            if (ModelState.IsValid)
            {
                try
                {
                    _context.Update(exercicio);
                    await _context.SaveChangesAsync();
                }
                catch (DbUpdateConcurrencyException)
                {
                    if (!ExercicioExists(exercicio.Idexercicios))
                    {
                        return NotFound();
                    }
                    else
                    {
                        throw;
                    }
                }
                return RedirectToAction(nameof(Index));
            }
            return View(exercicio);
        }

        // GET: Exercicio/Delete/5
        public async Task<IActionResult> Delete(int? id)
        {
            if (id == null)
            {
                return NotFound();
            }

            var exercicio = await _context.Exercicios
                .FirstOrDefaultAsync(m => m.Idexercicios == id);
            if (exercicio == null)
            {
                return NotFound();
            }

            return View(exercicio);
        }

        // POST: Exercicio/Delete/5
        [HttpPost, ActionName("Delete")]
        [ValidateAntiForgeryToken]
        public async Task<IActionResult> DeleteConfirmed(int id)
        {
            var exercicio = await _context.Exercicios.FindAsync(id);
            _context.Exercicios.Remove(exercicio);
            await _context.SaveChangesAsync();
            return RedirectToAction(nameof(Index));
        }

        private bool ExercicioExists(int id)
        {
            return _context.Exercicios.Any(e => e.Idexercicios == id);
        }
    }
}
