#include <iostream>

using namespace std;


 int main(){
    float salario, dias,salariopordia;
    cout << "Quantos dias você trabalhou esse mês? ";
    cin >> dias;
    salariopordia = 8 * 25.0;
    salario = dias * salariopordia;
    cout << "O seu novo salário é: " << salario;

 return 0;
 }
