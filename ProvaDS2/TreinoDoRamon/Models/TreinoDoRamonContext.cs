using Microsoft.EntityFrameworkCore;

namespace TreinoDoRamon.Models
{
    public class TreinoDoRamonContext : DbContext
    {
        public TreinoDoRamonContext(DbContextOptions<TreinoDoRamonContext> options) : base(options)
        {
        }
        public DbSet<Aula> Aulas { get; set; }
        public DbSet<Treino> Treinos { get; set; }
        public DbSet<Exercicio> Exercicios { get; set; }
        public DbSet<Equipamento> Equipamentos { get; set; }
    }
}