#include <iostream>
#include <math.h>

using namespace std;



int main(){

    float preco, valorfinal, desconto;

    cout <<"Qual é o valor do seu produto: ";
    cin >> preco;
    desconto = preco * 5/100;
    valorfinal = preco - desconto;
    cout << "O valor com Desconto é: " << valorfinal;



return 0;
}
