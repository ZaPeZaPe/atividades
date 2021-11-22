using System.ComponentModel.DataAnnotations.Schema;

namespace TreinoDoRamon.Models
{
    [Table("equipamentos")]
    public class Equipamento
    {
        public int EquipamentoId { get; set; }
        public string Nome { get; set; }
        public string Musculo { get; set; }
        public string Imagem { get; set; }
    }
}