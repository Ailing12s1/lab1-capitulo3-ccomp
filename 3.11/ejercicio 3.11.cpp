#include <iostream>
#include <string>
#include "MotorVehiculo.h"
using namespace std;

class Motor{
public:
    Motor(const string& marca, const string& combustible, int fabricacion, const string & color, int capacidad)
        : marca_(marca), combustible_(combustible), fabricacion_(fabricacion), color_(color), capacidad_(capacidad){
        }  
    void setmarca(const string& marca){
        this->marca = marca;       
    }
    string getmarca() const{
        return marca;
    }
    void setcombustuble(const string& combustible){
        this->combustible = combustible;
    }
    
        
}