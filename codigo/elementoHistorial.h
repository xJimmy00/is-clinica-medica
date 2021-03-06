#ifndef ELEMENTOHISTORIAL_H
#define ELEMENTOHISTORIAL_H
#include <string>

using namespace std;

class ElementoHistorial{
private:
    string fecha_;
    string observaciones_;

public:
    ElementoHistorial(string fecha, string observaciones){
        fecha_ = fecha;
        observaciones_ = observaciones;
    }

    inline string getFecha(){
        return fecha_;
    }
    
    inline string getObservaciones(){
        return observaciones_;
    }

    inline void setFecha(string fecha){
        fecha_ = fecha;
    }

    inline void setObservaciones(string observaciones){
        observaciones_ = observaciones;
    }
};

#endif