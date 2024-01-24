#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;
using std::fixed;
using std::setprecision;

//Faça um programa que leia as duas notas de um aluno em uma matéria e mostre na tela a sua média na disciplina

int main(){

    float n1, n2, res;

    cout << "Digite sua primeira Nota: ";
    cin >> n1;
    cout << "Digite sua segunda nota: ";
    cin >> n2;
    res =  (n1 + n2)/2;
    cout << "A Sua média Final é: "<< fixed << setprecision(1) << res;
    return 0;

}
