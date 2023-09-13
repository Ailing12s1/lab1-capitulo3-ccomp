#include <iostream>
#include <string>
#include "accountssettingspaneinterop.h"
using namespace std;

class Account{
public:
    Account(string nombreCuenta, int saldoInicial)
    : nombre{nombreCuenta}{
        if (saldoInicial > 0){
            saldo = saldoInicial;
        }
    }
    void deposito(int montoDeposito){
        if (montoDeposito > 0){
            saldo = saldo + montoDeposito;
        }
    }
    void withdraw(int montoWithdraw){
        if (montoWithdraw > 0){
            if (montoWithdraw <= saldo){
                saldo = saldo - montoWithdraw;
            } 
            else {
                cout << "El monto de retiro supero el saldo de su cuenta." << endl;
            }
        }
    }
    int getSaldo() const {
        return saldo;
    }
    void establecerNombre(string nombreCuenta){
        nombre = nombreCuenta;
    }
    string getNombre() const {
        return nombre;
    }
private:
    string nombre;
    int saldo{0};    
};

int main (){
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};
    cout << "Cuenta 1: " << account1.getNombre() << " saldo es $" << account1.getSaldo() << endl;
    cout << "Cuenta 2: " << account2.getNombre() << " saldo es $" << account2.getSaldo() << endl;
    
    cout << "\nIngrese el monto de deposito para la cuenta 1, por favor: ";
    int montoDeposito;
    cin >> montoDeposito;
    cout << "Agregando $" << montoDeposito << " a la cuenta 1." << endl;
    account1.deposito(montoDeposito);

    cout << "\nIngrese el monto de deposito para la cuenta 2, por favor: ";
    cin >> montoDeposito;
    cout << "Agregando $" << montoDeposito << " a la cuenta 2." << endl;
    account2.deposito(montoDeposito);

    cout << "\nIngrese el monto de retiro para la cuenta 1: ";
    int montoWithdraw;
    cin >> montoWithdraw;
    cout << "Retirando $" << montoWithdraw << " de la cuenta 1." << endl;
    account1.withdraw(montoWithdraw);

    cout << "\nCuenta 1: " << account1.getNombre() << " su saldo total es" << account1.getSaldo() << endl;
    cout << "\nCuenta 2: " << account2.getNombre() << " su saldo total es" << account2.getSaldo() << endl;   
    
    return 0;
}



 


