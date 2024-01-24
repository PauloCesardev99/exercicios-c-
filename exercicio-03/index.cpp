#include <iostream>
#include <iomanip>
#include <vector>


using namespace std;
using std::fixed;
using std::setprecision;

/* Número e salário de um Funcionário*/

int main(){

    string nome;
    double salario;

    cout << "Qual é seu nome? ";
    cin >> nome;
    cout << "Qual é seu salário? ";
    cin >> salario;

    cout << "Nome do Funcionário: " << nome << endl;
    cout << "Salário do Funcionário: " << fixed << setprecision(4) << salario;



    return 0;
}
