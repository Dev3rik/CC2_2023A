//
// Created by PREDATOR on 25/04/2023.
//
#ifndef CONTEO_CONCURSOS_DYNAMICINTEGER_H
#define CONTEO_CONCURSOS_DYNAMICINTEGER_H
#include <iostream>
using namespace std;
class DynamicIntegerArray{
private:

    int *data;
    int size;
    int *copia;

public:

    DynamicIntegerArray(){
        this->size=0;
        this->data = new int[0];
    }


    DynamicIntegerArray(int arr[], int size){
        this->size=size;//
        this->data = new int[size];
        for(int i=0; i<size;i++){
            data[i]=arr[i];
        }
    }


    DynamicIntegerArray(const DynamicIntegerArray &o){
        this->size=o.size;
        this->data = new int[size];
        for(int i=0; i<size; i++){
            data[i]=o.data[i];
        }
    }


    void setSize(int size){
        this->size=size;
    }


    int getSize()const{return size;}

    ~DynamicIntegerArray(){
        delete[] data;
    }


    void Copy(){
        this->copia=new int[size];
        for(int i=0; i<size; i++){
            copia[i]=data[i];
        }
        delete[] data;
    }


    void pushback(int AddNum){
        Copy();
        this->size=size+1;
        this->data=new int[size];
        for(int i=0;i<size-1;i++){
            data[i]=copia[i];
        }
        data[size-1]=AddNum;
        delete[] copia;
    }


    void insert(int AddNum,int pos){
        Copy();
        this->size=size+1;
        this->data=new int[size];
        for(int i=0;i<size;i++){
            if(i<pos){
                data[i]=copia[i];
            }
            else if(i==pos){
                data[i]=AddNum;
            }
            else{
                data[i]=copia[i-1];
            }
        }
        delete[] copia;
    }


    void remove(int pos){
        Copy();
        this->size=size-1;
        this->data=new int[size];
        for(int i=0;i<size;i++){
            if(pos>i){
                data[i]=copia[i];
            }
            else{
                data[i]=copia[i+1];
            }
        }
        delete[] copia;
    }


    void print(){
        for(int i=0;i<size;i++){
            cout<<data[i]<<" ";
        }
    }
};
#endif //CONTEO_CONCURSOS_DYNAMICINTEGER_H
