using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;

namespace TreinoDoRamon.Models
{
    
    [Table("treinos")]
    public class Treino
    {
       [Key]
       public int Idtreinos { get; set; } 
       [Required]
       public string Nome { get; set; }
       public int Repeticoes { get; set; }
       public int Series { get; set; }
       public int Tempomax { get; set; }
       public int Quantidade { get; set; }

    }
}