#include "DynamicInteger.h"
int main() {
    int lista[] = {1, 5, 2, 6, 2, 4};
    DynamicIntegerArray<int> da(lista, 6);
    da.pushback(5);
    da.remove(0);
    da.insert(5, 0);
    da.print();
    string listaString[]={"Erik","Manuel"};
    DynamicIntegerArray<string> daPrueba(listaString,2);
    daPrueba.pushback("hola");
    cout<<endl;
    daPrueba.print();
    cout<<endl;
    informacionP inf(5);
    DynamicIntegerArray<int> nuevo;
    inf.pasarDatos(nuevo);
    nuevo.print();
    for(int i=0;i<5;i++) {
        nuevo.insert(1, i);
    }
    cout<<endl;
    nuevo.print();
}