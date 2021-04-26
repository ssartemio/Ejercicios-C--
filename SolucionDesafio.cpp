/*
Problema:
Escribe un programa que encuentre todos los numeros divisibles entre 7, pero que no sean multiplos de 5
en un rango entre 2000 y 3200. Los numeros deben de ir separados por una coma al mostrarse en pantalla

*/
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    for(int i = 2000;i<=3200;i++){
        if((i%7==0) && (i%5!=0)){
            cout<<i<<",";
        }
    }
    return 0;
}
