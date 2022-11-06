#include <iostream>
#include "Supermercado.h"

using namespace std;

int main()
{
    Supermercado super = Supermercado("Manolo", "Callao 653");
    super.ingresarArticulos();
    super.mostrarArticulos("\nDatos de los articulos");
    super.ingresarVentas();
    super.mostrarMontoCajas("\nMonto Caja");
    super.mostrarArticulos("\nDatos de los articulos");
    super.mostrarVentasCaja("\nDetalle de ventas por caja");


    return 0;
}
