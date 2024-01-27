#include <iostream>

using namespace std;

//Aumento de sálario em 15% de um funcionário.

int main(){
    double salario, aumento;
    cout << "Qual é teu Salário? ";
    cin >> salario;
    aumento = salario + (salario * 0.15);
    cout << "O seu novo salário é: " << aumento;


    return 0;
}
