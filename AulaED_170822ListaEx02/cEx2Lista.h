/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   ex2Lista.h
 * Author: aluno
 *
 * Created on 17 de agosto de 2022, 08:40
 */

#ifndef CEX2LISTA_H
#define CEX2LISTA_H

class cEx2Lista {
public:
    
    int D, R, S, A, B, C;
    
    cEx2Lista();
    cEx2Lista(const cEx2Lista& orig);
    virtual ~cEx2Lista();
    
    void lerDados();
    void calcularDados();
    
private:

};

#endif /* EX2LISTA_H */

