#include "DynamicInteger.h"
int main(){
    int lista[]={1,5,2,6,2,4};
    DynamicIntegerArray da(lista,6);
    DynamicIntegerArray nuevo(da);
    da.pushback(5);
    da.insert(199,1);
    da.pushback(1999);
    da.remove(0);
    da.remove(0);
    da.pushback(100);
    da.print();
}
