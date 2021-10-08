package main;

import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.net.URL;
import java.util.ResourceBundle;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Button;
import javafx.scene.control.CheckBox;
import javafx.scene.control.ChoiceBox;
import javafx.scene.control.DatePicker;
import javafx.scene.control.PasswordField;
import javafx.scene.control.TextField;
import javafx.scene.layout.AnchorPane;

public class TecladoCadastroController implements Initializable {

    @FXML
    private DatePicker datePickerDataNascimento;
    @FXML
    private ChoiceBox<String> comboBoxClasses;
    @FXML
    private PasswordField passwordFieldSenha;
    @FXML
    private CheckBox checkBoxConcordo;
    @FXML
    private Button buttonConcluir;
    @FXML
    private PasswordField passwordFieldSenha2;
    @FXML
    private TextField textFieldNick;
    
    @Override
    public void initialize(URL url, ResourceBundle rb) {
        String[] classes = {"Arqueiro", "Bárbaro", "Cavaleiro", "Guerreiro", "Mago", "Necromante", "Paladino", "Sacerdote"};
        comboBoxClasses.getItems().addAll(classes);
    }
    
    @FXML
    private void cadastrarPessoa(ActionEvent event) throws IOException {
        String nome = textFieldNick.getText();
        String senha = passwordFieldSenha.getText();
        String estado = comboBoxClasses.getValue();
        String dataNasc = datePickerDataNascimento.getValue().toString();
        System.out.println("Cadastro ralizado!");
        System.out.println("Nick: " + nome);
        System.out.println("Senha: " + senha);
        System.out.println("Classe: " + estado);
        System.out.println("Nasc. : " + dataNasc);
        
        File arquivo = new File("player.txt");
        arquivo.createNewFile();
        FileWriter escrever =  new FileWriter(arquivo.getName(), true);
        escrever.write("Player Nick: "+nome+" | Classe: "+estado+" | Data de Nasc.: "+dataNasc+" | Senha: "+senha);
        escrever.close();
    }
    
    @FXML
    private void habilitarCadastro(ActionEvent event) {
        String senha1, senha2;
        senha1 = passwordFieldSenha.getText();
        senha2 = passwordFieldSenha2.getText();
        buttonConcluir.setDisable(senha1!=senha2);
    }
}
