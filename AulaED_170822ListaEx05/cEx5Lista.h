/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cEx5Lista.h
 * Author: aluno
 *
 * Created on 24 de agosto de 2022, 09:15
 */

#ifndef CEX5LISTA_H
#define CEX5LISTA_H

class cEx5Lista {
public:
    cEx5Lista();
    cEx5Lista(const cEx5Lista& orig);
    virtual ~cEx5Lista();
    
    void lerDados();
    float calcularMedia(float n1, float n2, float n3);
    
private:

};

#endif /* CEX5LISTA_H */

