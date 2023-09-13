#include <iostream>
#include "Cuenta.h"
using namespace std;

class Cuenta {
public:
    Cuenta(unsigned int numeroCuenta, string nombre, string apellido, double saldo)
        : numeroCuenta(numeroCuenta), nombre(nombre), apellido(apellido), saldo(saldo) {

    }

    void mostrarInformacion() {
        cout << "Número de cuenta: " << numeroCuenta << endl;
        cout << "Nombre: " << nombre << " " << apellido << endl;
        cout << "Saldo: S/. " << saldo << endl;
    }

private:
    unsigned int numeroCuenta;
    string nombre;
    string apellido;
    double saldo;
};

int main() {

    Cuenta miCuenta(40531785, "Ales", "Luna", 500);


    cout << "Información de la cuenta:" << endl;
    miCuenta.mostrarInformacion();

    return 0;
}