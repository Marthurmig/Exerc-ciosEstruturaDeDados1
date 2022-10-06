/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cEx5Lista.cpp
 * Author: aluno
 * 
 * Created on 24 de agosto de 2022, 09:15
 */

#include "cEx5Lista.h"
#include <iostream>

using namespace std;

cEx5Lista::cEx5Lista() {
}

cEx5Lista::cEx5Lista(const cEx5Lista& orig) {
}

cEx5Lista::~cEx5Lista() {
}

void cEx5Lista::lerDados(){
    
    float n1, n2, n3;
    
    cout << "Informe a nota 1: " << endl;
    cin >> n1;
    cout << "Informe a nota 2: " << endl;
    cin >> n2;
    cout << "Informe a nota 3: " << endl;
    cin >> n3;
    
    cout << "A média é: " << this->calcularMedia(n1, n2, n3);
}

float cEx5Lista::calcularMedia(float n1, float n2, float n3){
    float media;
    
    media = ((n1*2) + (n2*3) + (n3*5)) / 10;
    
    return media;
}

