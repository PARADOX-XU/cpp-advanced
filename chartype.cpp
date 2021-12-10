#include <iostream>
using namespace std;

int charAssign(char c){
    int asciiValue=c;
  
    if (asciiValue>=97 && asciiValue<=122)
       return 100;
    else if(asciiValue>= 65 && asciiValue<=90)
       return 200;
    else if(asciiValue>=48 && asciiValue<=57)
       return 300;
    else
    return 400;
}
int main(){
  char ch;
  
  cout << "\nEnter a character: ";
  cin >> ch;
  
  switch (charAssign(ch)){
    case 100:
        cout << ch << " is a lower case letter.\n";
        break;
    case 200:
        cout << ch << " is an upper case letter.\n";
        break;
    case 300:
        cout << ch << " is a digit.\n";
        break;
    case 400:
        cout << ch << " is a non-alphanumeric character.\n";
        break;
    default:
        break;
    }
return 0;
}
