#include <iostream>
#include "Account1.h"
using namespace std;

int main() {
    Account cuenta1("Cuenta 1 Mari", 1000);
    Account cuenta2("Cuenta 2 Paola", 2000);

    cout << "cuenta1: " << cuenta1.getName() << "El balance es S/. " << cuenta1.getBalance();
    cout << "\ncuenta2: " << cuenta1.getName() << "El balance es S/. " << cuenta2.getBalance();
    cout << "\n\nIngrese el monto del deposito para la cuenta1: ";
  int depositoMonto;
  cin >> depositoMonto;
  cout << "agrega" << depositoMonto << "al balance de la cuenta1";
  cuenta1.deposito(depositoMonto);

  cout << "\ncuenta1: " << cuenta1.getName() << "balance es S/. " << cuenta1.getBalance();

  cout << "cuenta1: " << cuenta1.getName() << "balance es S/. " << cuenta1.getBalance();
  cout << "cuenta2: " << cuenta2.getName() << "balance es S/. " << cuenta2.getBalance() << endl;
  

    return 0;
}