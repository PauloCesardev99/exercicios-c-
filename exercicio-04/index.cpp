#include <iostream>
#include <iomanip>
#include <vector>


using namespace std;
using std::fixed;
using std::setprecision;

/*EX 04: Desenvolva um algoritmo que leia dois números inteiros e mostre o somatório
entre eles.*/

int main(){
    int n1, n2, res;

    cout << "Digite um número: ";
    cin >> n1;
    cout << "Digite outro Número: ";
    cin >> n2;
    res = n1 + n2;
    cout <<"O Resultado de: " << n1 <<" + " << n2 << " é " << res;

    return 0;
}
