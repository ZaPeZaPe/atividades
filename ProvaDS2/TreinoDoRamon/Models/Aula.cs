using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;

namespace TreinoDoRamon.Models
{

    [Table("aulas")]
    public class Aula
    {
        public int AulaId { get; set; }
        [StringLength(10)]
        public string Data { get; set; }
        [ForeignKey("treinos")]
        public int TreinoId { get; set; }
        public virtual Treino Treino { get; set; }

    }
}