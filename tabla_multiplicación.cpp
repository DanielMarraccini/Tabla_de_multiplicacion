#include <iostream>

using namespace std;

//Tabla de multplicaci�n con un ciclo for.

int main(){

int n;

cout<<"\t\tTabla de multiplicaci�n de X.\n\n";

cout<<"Ingrese un n�mero: "; cin >> n;

cout<<endl<<endl;

for (int i = 1; i <= 10; i++){

    cout<<n*i;
    cout<<endl;
}

return 0;
}
