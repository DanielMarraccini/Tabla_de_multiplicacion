#include <iostream>

using namespace std;

//Tabla de multplicación con un ciclo for.

int main(){

int n;

cout<<"\t\tTabla de multiplicación de X.\n\n";

cout<<"Ingrese un número: "; cin >> n;

cout<<endl<<endl;

for (int i = 1; i <= 10; i++){

    cout<<n*i;
    cout<<endl;
}

return 0;
}
