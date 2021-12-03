#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

float avgoflst(int lst[], int size){
    float tmpVal=0.0;

    for(int i=0; i<size;i++){
        tmpVal += (float) lst[i];
     }
  
    return tmpVal /(float) size;
}
