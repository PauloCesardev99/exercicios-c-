#include <iostream>

using namespace std;

/*  Faça um algoritmo que leia a largura e altura de uma parede, calcule e
mostre a área a ser pintada e a quantidade de tinta necessária para o serviço,
sabendo que cada litro de tinta pinta uma área de 2metros quadrados. */

int main(){
    float largura, altura, totalparede, litros;
    cout << "Qual é a largura da parede? ";
    cin >> largura;
    cout << "Qual é a altura da parede? ";
    cin >> altura;
    totalparede =  largura * altura;
    litros = totalparede / 2;
    cout << "ÁREA PARA PINTAR: " << totalparede << " m² " << endl;
    cout << "Litros de tinta necessários: " << litros;



    return 0;}
