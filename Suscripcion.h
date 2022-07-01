/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Suscripcion.h
 * Author: lucho
 *
 * Created on 23 de junio de 2022, 10:14 AM
 */

#ifndef SUSCRIPCION_H
#define SUSCRIPCION_H

#include <string>
#include "IDictionary.h"
#include "ICollectible.h"
class Suscripcion : public ICollectible  {
public:
    Suscripcion();
    Suscripcion(const Suscripcion& orig);
    virtual ~Suscripcion();
    
    IDictionary* ObtenerNombreJuego();
private:
};
//------------------------------------------------------------------------------
class Vitalicea : public Suscripcion {
public:
    Vitalicea();
    Vitalicea(const Vitalicea& orig);
    virtual ~Vitalicea();
    
    int getCosto();
    void setCosto();
private:
    int costo;
};
//------------------------------------------------------------------------------
class Temporal : public Suscripcion {
public:
    Temporal();
    Temporal(const Temporal& orig);
    virtual ~Temporal();
    
//    tiempoValidez getPeriodoValidez();                    Falta el enum tiempoValidez
    int getCostoMensual();
    bool getCancelada();
//    void setPeriodoValidez(tiempoValidez);                Falta el enum tiempoValidez
    void setCostoMensual(int);
    void setCancelada(bool);
private:
//   tiempoValidez periodoValidez;                          Falta el enum tiempoValidez
    int costoMensual;
    bool cancelada;
};
#endif /* SUSCRIPCION_H */

