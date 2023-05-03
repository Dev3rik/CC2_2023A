//
// Created by PREDATOR on 28/04/2023.
//

#ifndef TAREA_PROFESOR_ALVARO_ARRAYCHARDINAMIC_H
#define TAREA_PROFESOR_ALVARO_ARRAYCHARDINAMIC_H
#include <iostream>
using namespace std;
class ArrayCharDinamic{
private:
    int size;
    string *data;
public:
    ArrayCharDinamic(){
        this->size=0;
        this->data=new string[size];
    }
    ~ArrayCharDinamic(){
        delete[] data;
    }
    void getSize(int size){
        delete[] data;
        this->size=size;
        this->data=new string[size];
    }
    int setSize(){
        return this->size;
    }
    void pushback(string element){
        string *copy=new string[size+1];
        for(int i=0;i<size;i++){
            copy[i]=data[i];
        }
        delete[] data;
        data=new string[size+1];
        data=copy;
        data[size]=element;
        size++;
    }

    void insert(string element,int pos){
        string *copy=new string[size+1];
        for(int i=0; i<size; i++){
            copy[i]=data[i];
        }
        delete[] data;
        data=new string[size+1];
        data=copy;
        for(int i=size; i>pos; i--){
            string aux=data[i];
            data[i]=data[i-1];
            data[i-1]=aux;
        }
        data[pos]=element;
        size++;

    }

    void remove(int pos){
        string *nuevo=new string[size-1];
        for(int i=0; i<size-1; i++){
            if(i<pos){
                nuevo[i]=data[i];
            }
            else{
                nuevo[i]=data[i+1];
            }
        }
        delete[] data;
        data=new string[size-1];
        data=nuevo;
        size--;
    }


    void print(int pos){
            cout<<data[pos]<<" ";
    }

};

#endif //TAREA_PROFESOR_ALVARO_ARRAYCHARDINAMIC_H
