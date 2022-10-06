/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cEx3Lista.h
 * Author: aluno
 *
 * Created on 17 de agosto de 2022, 09:23
 */

#ifndef CEX3LISTA_H
#define CEX3LISTA_H

class cEx3Lista {
public:
    
    int anos, meses, dias, diasano, diasmes;
    
    cEx3Lista();
    cEx3Lista(const cEx3Lista& orig);
    virtual ~cEx3Lista();
    
    void lerDados();
    float calcularDados();
    
private:

};

#endif /* CEX3LISTA_H */

