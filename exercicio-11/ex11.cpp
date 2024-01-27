#include <iostream>
#include <math.h>

using namespace std;



int main(){

    float delta, a, b, c;
    cout << "Digite o Valor de A: ";
    cin >> a;
    cout << "Digite o valor de B: ";
    cin >> b;
    cout << "digite o valor de C: " ;
    cin >> c;


   delta = (pow(b, 2.0)) - 4 * (a*c)  ;

    cout << "O Valor de Delta é: " << delta;


return 0;
}
