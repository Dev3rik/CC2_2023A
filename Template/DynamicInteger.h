//
// Created by PREDATOR on 25/04/2023.
//
#ifndef CONTEO_CONCURSOS_DYNAMICINTEGER_H
#define CONTEO_CONCURSOS_DYNAMICINTEGER_H
#include <iostream>
using namespace std;
class informacionP;

template <typename T>
class DynamicIntegerArray{
private:

    T *data;
    int size;

public:
    friend class informacionP;
    DynamicIntegerArray(){
        this->size=0;
        this->data = new T[0];
    }


    DynamicIntegerArray(T arr[], int size){
        this->size=size;//
        this->data = new T[size];
        for(int i=0; i<size;i++){
            data[i]=arr[i];
        }
    }


    DynamicIntegerArray(const T &o){
        this->size=o.size;
        this->data = new T[size];
        for(int i=0; i<size; i++){
            data[i]=o.data[i];
        }
    }


    void setSize(T size){
        this->size=size;
    }


    T getSize()const{return size;}

    ~DynamicIntegerArray(){
        delete[] data;
    }



    void pushback(T AddNum){
        T *nuevo=new T[size+1];
        for(int i=0; i<size; i++){
            nuevo[i]=data[i];
        }
        delete[] data;
        size++;
        data=nuevo;
        data[size-1]=AddNum;
    }
    void insert(T AddNum,int pos){
        T *nuevo=new T[size+1];
        for(int i=0; i<size; i++){
            nuevo[i]=data[i];
        }
        delete[] data;
        size++;
        data=nuevo;
        T aux;
        for(int i=size-1; i>pos; i--){
            aux = data[i];
            data[i]=data[i-1];
            data[i-1]=aux;
        }
        data[pos]=AddNum;
    }

    void remove(int pos){
        T aux;
        for(int i=pos; i<size; i++){
            aux = data[i];
            data[i]=data[i+1];
            data[i+1]=aux;
        }
        size--;
        T *nuevo = new T[size];
        for(int i=pos; i<size; i++){
            nuevo[i] = data[i];
        }
        data=nuevo;
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<data[i]<<" ";
        }
    }
};
class informacionP {
protected:
    int* data;
    int size;

public:
    informacionP() : data(new int[0]), size(0) {}

    informacionP(int tam):
        data(new int[tam]),size(tam){}

    void pasarDatos(DynamicIntegerArray<int>& dynamicArray) {
        dynamicArray.size = size;
        dynamicArray.data = data;
    }

    ~informacionP() {
        delete[] data;
    }
};







#endif //CONTEO_CONCURSOS_DYNAMICINTEGER_H
