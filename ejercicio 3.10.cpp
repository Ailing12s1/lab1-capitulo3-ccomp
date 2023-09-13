#include <iostream>
#include <string>
#include "Invoice.h"
using namespace std;

class Invoice{
public:
    Invoice(const string & numero, const string & descripcion, int cantidad, int precioarticulo, double tasaiva = 0.20, double descuento = 0.0);
    void establecernumero(const string& numero);
    string obtenernumero() const;

    void establecerdescripcion(const string& description);
    string obtenerdescripcion() const;

    void establecerCantidad(int cantidad);
    int obtenerCantidad() const;

    void establecerprecioarticulo(int precioarticulo);
    int obtenerprecioarticulo() const;

    void establecertasaiva(double tasaiva);
    double obtenertasaiva() const;

    void establecerdescuento(double descuento);
    double obtenerdescuento() const;

    double obtenermontofactura() const;

private:
    string numero;
    string descripcion;
    int cantidad;
    int precioarticulo;
    double tasaiva;
    double descuento;
};

int main(){
    Invoice invoice("258410", "Libros", 100, 12, 0.25, 0.20);

    cout << "Numero de factura: " << invoice.obtenernumero() << endl; 
    cout << "Descripción: " << invoice.obtenerdescripcion() << endl;
    cout << "Cantidad de articulos: " << invoice.obtenerCantidad() << endl;
    cout << "Precio por articulo: " << invoice.obtenerprecioarticulo() << endl;
    cout << "Tasa IVA: " << invoice.obtenertasaiva() << endl;
    cout << "Descuento: " << invoice.obtenerdescuento() << endl;
    cout << "Monto de la factura: "<< invoice.obtenermontofactura() << endl; 

    return 0;
}

