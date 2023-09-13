#include <iostream>
#include <string>
#include "Fecha.h"
using namespace std;

class Fecha{
public:
    Fecha(int mes, int dia, int año){
        setmes(mes);
        set(dia);
        setaño(año);
    }

    void setmes(int mes){
        if (mes >= 1 && <= 12){
            this->mes = mes;
        }
        else {
            this->mes = 1;
        }
    }
    int getmes() const{
        return mes;
    }
    void setdia(int dia) {
        this -> dia = dia; 
    }
    int getDia() const {
        return dia;
    }

    void setAño(int año) {
        this -> año=año;
    } 

    void mostrarFecha const {
        cout << getMes()<< "/" << getDia( << "/" << getAño()<<endl;)
    }
}
