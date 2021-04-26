#include <iostream>

using namespace std;

int main()
{

  int dia = 0;                                              // declaracion de variables
  cout << "Dame el numero del dia que quieras ver" << endl; //sentencia de interaccion
  cin >> dia;                                               // guardo mi variable

  switch (dia)
  {
  case 1:
    cout << "Lunes"; // invocar otras funciones
    break;
  case 2:
    cout << "Martes";
    break;
  case 3:
    cout << "Miercoles";
    break;
  case 4:
    cout << "Jueves";
    break;
  case 5:
    cout << "Viernes";
    break;
  case 6:
    cout << "Sabado";
    break;
  case 7:
    cout << "Domingo";
    break;
  default: // para manejar todos los casos no considerados
    cout << "valor fuera de rango, vuelve a intentarlo" << endl;
    break;
  }
}
