//
// Created by PREDATOR on 29/04/2023.
//

#ifndef TAREA_PROFESOR_ALVARO_STUDENTS_H
#define TAREA_PROFESOR_ALVARO_STUDENTS_H
#include "ArrayCharDinamic.h"
using namespace std;
class Students{
private:
    ArrayCharDinamic name;
    ArrayCharDinamic dni;
    ArrayCharDinamic cui;
public:
        void loginTheEndStudent(){
            string ingName,ingDni,ingCui;
            cout<<"Nombre: ";cin>>ingName;
            cout<<"dni: ";cin>>ingDni;
            cout<<"cui: ";cin>>ingCui;
            name.pushback(ingName);
            dni.pushback(ingDni);
            cui.pushback(ingCui);
            cout<<endl;
        }

        void insertStudent(){
            cout<<"Inserta posicion: ";int pos;cin>>pos;
            cout<<"nombre: ";string ingName;cin>>ingName;
            cout<<"dni: ";string ingDni;cin>>ingDni;
            cout<<"cui: ";string ingCui;cin>>ingCui;
            name.insert(ingName,pos);
            dni.insert(ingDni,pos);
            cui.insert(ingCui,pos);
            cout<<endl;
        }

        void removeStudent(){
            cout<<"inserte posicion: ";int pos;cin>>pos;
            name.remove(pos);
            dni.remove(pos);
            cui.remove(pos);
            cout<<endl;
        }

        void printStudent(){
            for(int i=0;i<name.setSize();i++){
                cout<<"ALUMNO "<<i+1<<endl;
                name.print(i);cout<<endl;
                dni.print(i);cout<<endl;
                cui.print(i);cout<<endl;
                cout<<"----------------------------"<<endl;
            }

        }


};
#endif //TAREA_PROFESOR_ALVARO_STUDENTS_H
