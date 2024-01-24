#include <iostream>
#include <iomanip>
#include <vector>



using namespace std;
using std::fixed;
using std::setprecision;

/*Crie um algoritmo que leia um número real e mostre na tela o seu dobro e a
sua terça parte.*/


int main(){

float n1;
double tp, db;

std::cout << "Digite um número: ";
std::cin >>  n1;
tp = n1/3;
db = n1 * 2;

cout << "O dobro de " << n1 << " é " << fixed << setprecision(1) << db << endl;
cout << "A terça parte de " << n1 << " é " << fixed << setprecision(1) << tp ;


return 0;
}


