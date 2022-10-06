/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Ex1Lista.h
 * Author: aluno
 *
 * Created on 17 de agosto de 2022, 08:22
 */

#ifndef CEX1LISTA_H
#define CEX1LISTA_H

class cEx1Lista {
public:
    
    int x1, x2, y1, y2;
    float d;
    
    cEx1Lista();
    cEx1Lista(const cEx1Lista& orig);
    virtual ~cEx1Lista();
    
    void lerDados();
    void executarDados();
    
private:

};

#endif /* EX1LISTA_H */

