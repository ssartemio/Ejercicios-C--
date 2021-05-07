#include <iostream>
using namespace std;
void saludar(char nombre[]);

int main(int argc, char const *argv[])
{
    char nombre[254];
    cout<<"Dime tu nombre: ";
    cin.getline(nombre,sizeof(nombre));
    // cout<<"Hola "<<nombre<<endl;
    saludar(nombre);
    return 0;
}

void saludar(char nombre[]){
    cout<<"Hola "<<nombre<<endl;
}


