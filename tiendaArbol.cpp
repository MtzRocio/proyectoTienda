#include <conio.h>
#include <iostream>
#include <locale>
#include <cstdlib>
using namespace std;
struct tienda{
     double nombre;
     struct tienda *precio, *exis;
};
typedef struct tienda *ABB;
ABB creartienda(int x)
{
     ABB nuevatienda = new(struct tienda);
     nuevatienda->nombre = x;
     nuevatienda->precio = NULL;
     nuevatienda->exis = NULL;

     return nuevatienda;
}
void insertar(ABB &arbol, char x)
{
     if(arbol==NULL)
     {
           arbol = creartienda(x);
     }
     else if(x < arbol->nombre)
          insertar(arbol->precio, x);
     else if(x > arbol->nombre)
          insertar(arbol->exis, x);
}
