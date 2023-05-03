//
// Created by PREDATOR on 28/04/2023.
//
#include <iostream>
#include "Students.h"
using namespace std;
void menu(){
    cout<<"-------------MENU DE ESTUDIANTES----------"<<endl;
    cout<<"1. ingresar un estudiante al final"<<endl;
    cout<<"2. ingresar en un posicion"<<endl;
    cout<<"3. eliminar un estudiante"<<endl;
    cout<<"4. Mostrar listado"<<endl;
    cout<<"5. salir"<<endl;
    cout<<"elige una opcion:";
}


int main(){
    Students ArrayStudents;
    menu();
    int opc;cin >> opc;
    while(opc!=5){

        if(opc==1){
            ArrayStudents.loginTheEndStudent();
        }
        else if(opc==2){
            ArrayStudents.insertStudent();
        }
        else if(opc==3){
            ArrayStudents.removeStudent();
        }
        else if(opc==4){
            ArrayStudents.printStudent();
        }
        else{
            cout<<"no hay esa opcion"<<endl;
        }
        menu();
        cin>>opc;
    }
    return 0;
}
