using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;

namespace TreinoDoRamon.Models
{

    [Table("aulas")]
    public class Aula
    {
       [Key]
       public int Idtreinos { get; set; } 
       [Required]
       public string Dia { get; set; }
    }
}