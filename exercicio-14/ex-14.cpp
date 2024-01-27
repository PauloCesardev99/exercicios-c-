#include <iostream>

using namespace std;



int main(){
    double km, dias, precofinal;

    cout << "Quantos dias você alugou? ";
    cin >> dias;
    cout << "Quantos Km você andou? ";
    cin >> km;
    precofinal = dias * 90.00 + (km * 0.20);
    cout << "Dias: " << dias << endl;
    cout << "KM: " << km << endl;
    cout << "Preco final:" << precofinal;





return 0;
}
