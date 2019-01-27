#include <iostream>

using namespace std;

void metodo1(){
    cout << "Imprime un texto" << endl;
}

string metodo2(){
    return "Buenos dias/tardes/noches Ingeniero Rene, necesito alcanzar el puntaje requerido 28 pts para acceder al examen de validacion, espero que presentando todos los  trabajos pueda llegar a esa nota";
}

int main()
{
    metodo1();
    metodo2();
    string valor = metodo2();
    cout << valor << endl;

    return 0;
}
