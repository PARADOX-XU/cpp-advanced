#include <iostream>
#include <string>
#include <math.h>
using namespace std;

string strCDC(float BMI){
    if (BMI >=30.0) return "Obese";
    if (BMI >=25.5) return "Overweight";
    if (BMI >=18.5) return "Normal";
    return "Underweight";
}

int main(){
	float weight, height, floatBMI;
	int intBMI;
	
	cout <<"Please enter weight in kilograms: ";
	cin >> weight;
	cout <<"Please enter height in meters: ";
	cin >> height;

	floatBMI = weight /(height * height); 
	intBMI = (int) ((floatBMI * 100)+0.5);

	cout << "BMI is: " << (float) intBMI/100 << ", Status is "<< strCDC(floatBMI) << endl;

	return 0;
	}
