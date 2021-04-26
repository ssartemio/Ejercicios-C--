#include <iostream>

using namespace std;

int main()
{
    int dia = 0;                                               // declaracion de variables
    cout << "Dame el numero del dia que quieras ver " << endl; //sentencia de interaccion
    cin >> dia;

    if (dia == 1)
    {
        cout << "Lunes";
    }
    else if (dia == 2)
    {
        cout << "Martes";
    }
    else if (dia == 3)
    {
        cout << "Miercoles";
    }
    else if (dia == 4)
    {
        cout << "Jueves";
    }
    else if (dia == 5)
    {
        cout << "Viernes";
    }
    else if (dia == 6)
    {
        cout << "Sabado";
    }
    else if (dia == 7)
    {
        cout << "Domingo";
    }
    else
    {
        cout << "valor fuera de rango, vuelve a intentarlo" << endl;
    }
}