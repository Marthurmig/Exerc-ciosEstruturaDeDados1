/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cEx3Lista.cpp
 * Author: aluno
 * 
 * Created on 17 de agosto de 2022, 09:23
 */

#include "cEx3Lista.h"
#include <iostream>

using namespace std;

cEx3Lista::cEx3Lista() {
}

cEx3Lista::cEx3Lista(const cEx3Lista& orig) {
}

cEx3Lista::~cEx3Lista() {
}

void cEx3Lista::lerDados(){
    
    cout << "Informe quantos anos viveu: ";
    cin >> this->anos;
    cout << "Informe quantos meses viveu: ";
    cin >> this->meses;
    cout << "Informe quantos dias viveu: ";
    cin >> this->dias;
    
}

float cEx3Lista::calcularDados(){
    int totaldias = 0
    
    this->diasano = this->anos * 365;
    this->diasmes = this->meses * 30;
    totaldias = this->diasano + this->diasmes + this->dias;
    
    return totaldias;
    
}

