/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Categoria.h
 * Author: lucho
 *
 * Created on 23 de junio de 2022, 09:45 AM
 */

#ifndef CATEGORIA_H
#define CATEGORIA_H

#include <string>
#include "IDictionary.h"
#include "ICollectible.h"
using namespace std;

class Categoria : public ICollectible {
public:
    Categoria();
    Categoria(const Categoria& orig);
    virtual ~Categoria();
    
    string getNombre();
    string getDescripcion();
    void setNombre(string);                             
    void setDescripcion(string);
private:
    string nombre;
    string descripcion;
};
//------------------------------------------------------------------------------
class Genero : public Categoria {
public:
    Genero();
    Genero(const Genero& orig);
    virtual ~Genero();
    
    //tipo getTipoGenero();                             Falta el enum tipo
   //void setTipoGenero(tipo);                          Falta el enum tipo
private:
    //tipo tipoGenero;                                  Falta el enum tipo
};
//------------------------------------------------------------------------------
class Plataforma : public Categoria {
public:
    Plataforma();
    Plataforma(const Plataforma& orig);
    virtual ~Plataforma();
    
   //tipo getTipoPlataforma();                          Falta el enum tipo
    //void setTipoPlataforma(tipo);                     Falta el enum tipo
private:
    //tipo tipoPlataforma;                              Falta el enum tipo
};
#endif /* CATEGORIA_H */