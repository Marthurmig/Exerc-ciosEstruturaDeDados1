/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: aluno
 *
 * Created on 17 de agosto de 2022, 09:22
 */

#include <cstdlib>
#include <iostream>

#include "cEx3Lista.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    cEx3Lista obj;
    obj.lerDados();
    cout << "Você viveu " << obj.calcularDados() << " dias.";
    
    return 0;
}

