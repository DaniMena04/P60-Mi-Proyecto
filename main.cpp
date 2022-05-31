#include <iostream>

#include "persona.h"
using namespace std;

int main()
{
    cout << "Buena noche jsjsjs!" << endl;
    Persona p;

    p.nombre = "Daniel";
    p.edad = 39;

    cout << p.nombre << endl;
    cout << p.edad << endl;
    return 0;
}
