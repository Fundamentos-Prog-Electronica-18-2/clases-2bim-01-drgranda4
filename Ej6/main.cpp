#include <iostream>

using namespace std;
int obtener_Edad(int anioActual, int anioNacimiento){
    int valor = (2018 - anioNacimiento);
    return valor;
}

int main()
{
    string nombre, apellido;
    int anioNacimiento;
    int edad;

    cout << "Ingrese su nombre: " << endl;
    cin >> nombre;
    cout << "Ingrese su apellido: " << endl;
    cin >> apellido;
    cout << "Ingrese su año de nacimiento: " << endl;
    cin >> anioNacimiento;

    edad = obtener_Edad(2018, anioNacimiento);

    cout << "--------------------------------" << endl;
    cout << "Nombre:   " << nombre << endl;
    cout << "Apellido: " << apellido << endl;
    cout << "Edad:     " << edad << endl;

    return 0;
}
