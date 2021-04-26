
/*
Escribe un programa que reciba un numero entero, e imprima una lista de ese valor y el cuadrado del mismo, separado por :
Ejemplo: 1 : 1, 2 : 4, 3 : 9, 4 : 16, 5 : 25
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Dame un numero entero: ";
    cin>>n;

    for(int i = 1; i<=n;i++){
        cout<< i<< " : "<<i*i<<", ";
    }


    return 0;
}
