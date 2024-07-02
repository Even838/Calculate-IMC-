#include <iostream>
using namespace std;

int main() {
    double peso, altura;
    
    cout << "Digite o peso : ";
    cin >> peso;
    
    cout << "Digite a altura : ";
    cin >> altura;
    
    // Calcula o IMC
    double imc = peso / (altura * altura);
    
    cout << "Seu IMC é: " << imc << endl;
    
    // Classificação
    if (imc < 18.5) {
        cout << "Baixo peso" << endl;
    } else if (imc < 25) {
        cout << "Peso normal" << endl;
    } else if (imc < 30) {
        cout << "Sobrepeso" << endl;
    } else {
        cout << "Obesidade" << endl;
    }
    
    return 0;
}
