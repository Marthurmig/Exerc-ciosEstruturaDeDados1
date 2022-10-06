/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   ex2Lista.cpp
 * Author: aluno
 * 
 * Created on 17 de agosto de 2022, 08:40
 */

#include "cEx2Lista.h"
#include <iostream>
#include <math.h>

using namespace std;

cEx2Lista::cEx2Lista() {
}

cEx2Lista::cEx2Lista(const cEx2Lista& orig) {
}

cEx2Lista::~cEx2Lista() {
}

void cEx2Lista::lerDados(){
    
    cout << "Informe o valor de A: ";
    cin >> this->A;
    cout << "Informe o valor de B: ";
    cin >> this->B;
    cout << "Informe o valor de C: ";
    cin >> this->C;
      
}

void cEx2Lista::calcularDados(){
    
    this->R = pow(this->A + this->B, 2);
    this->S = pow(this->B + this->C, 2);
    
    this->D = (this->R + this->S) / 2;
    
    cout << "O valor de D é: " << D;
    
}

