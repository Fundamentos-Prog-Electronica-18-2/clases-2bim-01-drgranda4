#include <iostream>
#include<stdio.h>
using namespace std;


int suma(int a, int b){
    int c = a + b;
    return c;
}

int suma2(int a, int b=1){
    int c = a + b;
    return c;
}
string metodo2(){
    return "Hola";
}

int main()
{
    int sumaTotal = suma(10, 20) + suma2(100);
    cout << "La suma total es: " << sumaTotal << endl;

    return 0;
}
