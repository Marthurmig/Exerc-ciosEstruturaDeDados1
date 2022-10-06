/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Ex1Lista.cpp
 * Author: aluno
 * 
 * Created on 17 de agosto de 2022, 08:22
 */

#include "cEx1Lista.h"
#include <iostream>
#include <math.h>

using namespace std;

cEx1Lista::cEx1Lista() {
}

cEx1Lista::cEx1Lista(const cEx1Lista& orig) {
}

cEx1Lista::~cEx1Lista() {
}

void cEx1Lista::lerDados(){
    
    cout << "Informe o valor de x1: ";
    cin >> this->x1;
    cout << "Informe o valor de y1: ";
    cin >> this->y1;
    cout << "Informe o valor de x2: ";
    cin >> this->x2;
    cout << "Informe o valor de y2: ";
    cin >> this->y2;
    
}

void cEx1Lista::executarDados(){
    
    d = sqrt((pow(this->x2 - this->x1,2) + pow(this->y2 - this->y1, 2)));
    
    cout << "O valor da distância dos pontos é: " << d;
    
}

