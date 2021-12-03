#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int maxinlst(int lst[], int size){
    int tmpMax;

    for(int i=0; i<size;i++){
        if (i==0) tmpMax=lst[i];
        if (i>0 && lst[i]>tmpMax) tmpMax=lst[i];
    }

    return tmpMax;
}
