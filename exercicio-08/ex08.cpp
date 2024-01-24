#include <iostream>

using namespace std;
/*  Desenvolva um programa que leia uma distância em metros e mostre os valores
relativos em outras medidas.
Ex:
Digite uma distância em metros: 185.72
A distância de 85.7m corresponde a:
0.18572Km
1.8572Hm
18.572Dam
1857.2dm
18572.0cm
185720.0mm*/
int main(){

    float m, km, hm, dam, dm, cm, mm;

    cout << "Digite uma distância em metros: ";
    cin >> m;
    km = m/1000;
    hm = m/100;
    dam = m/10;
    dm = m*10;
    cm = m*100;
    mm = m*1000;
    cout << "A Distancia de: " << m << "Corresponde à:" << endl;
    cout << "KM: " << km  << endl;
    cout << "HM: " << hm << endl;
    cout << "DAM: " << dam << endl;
    cout << "DM: " << dm  << endl;
    cout << "CM: " << cm  << endl;
    cout << "MM: " << mm ;






return 0;
}
