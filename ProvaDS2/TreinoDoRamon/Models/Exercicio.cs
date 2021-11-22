using System.ComponentModel.DataAnnotations.Schema;

namespace TreinoDoRamon.Models
{
    [Table("exercicios")]
    public class Exercicio
    {
        public int ExercicioId { get; set; }
        public string Nome { get; set; }
        public int Repeticoes { get; set; }
        public int Serie { get; set; }
        public int Tempomax { get; set; }

        [ForeignKey("equipamentos")]
        public int EquipamentoId { get; set; }
        public virtual Equipamento Equipamento { get; set; }
        [ForeignKey("treinos")]
        public int TreinoId { get; set; }
        public virtual Treino Treino { get; set; }
    }
}