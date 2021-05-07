
#include <iostream>
#include <math.h>

using namespace std;

int suma(); // delcaracion de una funcion, concepto nuevo.
int resta();
int multiplicacion();
int division();
int potencia();

int main()
{
    // El valor debe de ser declarado fuera del ciclo while, a fin de utilizar despues dicho valor
    int opcion{0}; // nueva forma de inicializar valores.
    //agregar la opcion necesaria para que sea valida
    while (opcion != 1 && opcion != 2 && opcion != 3 && opcion != 4 && opcion != 5) // forzar la seleccion valida
    {
        cout << "Elige una opcion: \n";
        cout << "1) Suma\n";
        cout << "2) Resta\n";
        cout << "3) Multiplicacion\n";
        cout << "4) Division\n";
        cout << "5) Potencia\n"; // Ejercicio en clase 1.
        cin >> opcion;
    }

    cout << "Tu seleccionaste la  opcion # " << opcion << "\n"; // ejercicio 2 cambiar IF-ELSE por SWITCH-CASE
    if (opcion == 1)
    {
        cout << suma(); // salto
    }
    else if (opcion == 2)
    {
        cout << resta();
    }
    else if (opcion == 3)
    {
        cout << multiplicacion();
    }
    else if (opcion == 4)
    {
        cout<<division();
    }else if(opcion == 5){
        cout<<potencia();
    }

    return 0;
}

int suma() // desarrollo de una funcion
{
    int a, b;
    cout << "Dame dos numeros: ";
    cin >> a >> b;
    return a + b;
}

int resta() // desarrollo de una funcion
{
    int a, b;
    cout << "Dame dos numeros: ";
    cin >> a >> b;
    return a - b;
}

int multiplicacion() // desarrollo de una funcion
{
    int a, b;
    cout << "Dame dos numeros: ";
    cin >> a >> b;
    return a * b;
}

int division() // desarrollo de una funcion
{
    int a, b;
    cout << "Dame dos numeros: ";
    cin >> a >> b;
    return a / b;
}

int potencia()
{
    int a,b;
    cout << "Dame dos numeros: ";
    cin >> a >> b;
    return pow(a,b);
}

// desarrollar el codigo