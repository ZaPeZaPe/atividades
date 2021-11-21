using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;

namespace TreinoDoRamon.Models
{
    [Table("exercicios")]
    public class Exercicio
    {
       [Key]
       public int Idexercicios { get; set; } 
       [Required]
       public string Nome { get; set; }
       public string Musculo { get; set; }
       public string Imagem { get; set; }
       public int Tempomax { get; set; }
       
    }
}