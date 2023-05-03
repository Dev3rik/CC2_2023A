//
// Created by PREDATOR on 28/04/2023.
//
#include <iostream>
#include "Students.h"
using namespace std;
void menu(){
    cout<<"-------------MENU DE ESTUDIANTES----------"<<endl;
    cout<<"1. ingresar un numero al final"<<endl;
    cout<<"2. ingresar en un posicion"<<endl;
    cout<<"3. eliminar un estudiante"<<endl;
    cout<<"4. salir"<<endl;
}


int main(){
    Students ArrayStudents;
    menu();
    cout<<"elige una opcion:";int opc;cin >> opc;
    while(opc!=4){
    }
    ArrayStudents.loginTheEndStudent();
    ArrayStudents.loginTheEndStudent();
    ArrayStudents.insertStudent();
    ArrayStudents.removeStudent();
    ArrayStudents.printStudent();

    return 0;
}