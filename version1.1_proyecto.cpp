/*Programa: Hola Mundo
Autor: Ricardo Grijalva
Fecha: 23/05/2020
Editador por: Nataly Morales(version 1.1)
Version: 1.1*/
#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

int main() {

    char mensaje[100];
    //cout << "Hola Mundo" << endl;
    cout << "Escriba un mensaje un mensaje: ";
    cin.getline(mensaje, 100,'\n');
    cout <<"\n EL mensaje ingresado es: " <<mensaje<<endl;

    getch();
    return 0;

}

