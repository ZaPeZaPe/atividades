using System.ComponentModel.DataAnnotations.Schema;

namespace TreinoDoRamon.Models
{
    [Table("treinos")]
    public class Treino
    {
        public int TreinoId { get; set; }
        public string Nome { get; set; }
        public int Quantidade { get; set; }
        public string Tempomax { get; set; }   
    }
}