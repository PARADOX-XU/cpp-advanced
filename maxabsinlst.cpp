#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int maxabsinlst(int lst[], int size){
    int tmpMax, tmpVal;

    for(int i=0; i<size;i++){
        tmpVal = lst[i];
        if (lst[i]<0) tmpVal = lst[i]*-1;
        if (i==0) tmpMax=tmpVal;
        if (i>0 && tmpVal>tmpMax) tmpMax=tmpVal;
    }

    return tmpMax;
}
