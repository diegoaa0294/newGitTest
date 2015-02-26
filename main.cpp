#include "ProcesadorXML.h"
#include <iostream>

using namespace std;

int main()
{
    ProcesadorXML P;
    P.abrirArchivo("archivo.xml");
    P.iterarArchivo();
    P.imprimirResultado();
    P.cerrarArchivo();

    return 0;
}
