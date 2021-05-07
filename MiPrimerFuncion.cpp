#include <iostream>
using namespace std;

void saludar(char nombre[]); // Definicion, formada por tres partes, tipo de dato, nombre y parametros

int main(int argc, char const *argv[])
{
    char nombre[254]; // un arreglo de 254 caracteres
    cout<<"Dime tu nombre: ";
    // cin.getline(nombre,254);// Guardo una serie de caracteres utilizando el nombre de la variable y su tamaño
    cin.getline(nombre,sizeof(nombre)); // BUENA PRACTICA, utilizar la funcion sizeof()
    // cout<<"Hola "<<nombre<<endl;
    saludar(nombre); //llamado o invocacion la funcion con un valor 
    return 0;
}

void saludar(char nombre[]){ // desarrollo de la funcion
    cout<<"Hola "<<nombre<<endl;
}


