#include <iostream>
#include <string>
using namespace std;

string firstword(string s){
    if(s.find(' ') != string::npos )
        return s.substr(0, s.find(' '));
    else
        return "e";
}
