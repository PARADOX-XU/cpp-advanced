#include <iostream>
#include <string>
using namespace std;

string remainingwords(string s){
    if(s.find(' ') != string::npos )
        return s.substr(s.find(' ')+1);
    else
        return "e";
}
