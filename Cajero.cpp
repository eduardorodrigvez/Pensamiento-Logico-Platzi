//Programa que calcula si tienes dinero en el cajero

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int  saldo_retiro, numero_cc, cvn_cc, pin, saldo_restante;

int saldo_actual = 5000;
int main()


{
    cout<<"Bienvenido al cajero 5B"<<endl;
    cout<<"Por favor ingrese su numero de tarjeta de credito"<<endl;
    cin>>numero_cc;
    cout<<"Por favor ingrese su numero de CVN"<<endl;
    cin>>cvn_cc;
    cout<<"Por favor ingrese su PIN"<<endl;
    cin>>pin; 
    cout<<"¿Cuánto desea retirar?"<<endl;
    cin>>saldo_retiro; 
    cout<<"Su saldo restante es"<<endl;
    saldo_restante = saldo_actual - saldo_retiro;
    cout<<saldo_restante;
    cout<<"Gracias, ¡Tenga un Excelente día!"
    

    return 0;
}