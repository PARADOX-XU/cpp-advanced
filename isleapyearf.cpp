#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(int argc, char* argv[]){
	int year = 0;

	for(int i=0; i<4; i++){
		int temp = (int) argv[1][i];
		year += (temp - 48) * (pow(10,3-i)); 
		//cout<<temp - 48<<endl;
	}

	if (!(year % 400) || year % 4 == 0 && year % 100 != 0)
		cout<<year<<" was a leap year";
	else
		cout<<year<<" was not a leap year";

	return 0;

}
