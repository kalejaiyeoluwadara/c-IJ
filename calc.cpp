#include <iostream>
using namespace std;


int main() {
	float firstNumber,secondNumber;
	char operand;
	cout<<"Enter first number: ";
	cin>>firstNumber;
	cout<<"Enter second number: ";
	cin>>secondNumber;	
	cout<<"Enter operator: ";
	cin>>operand;
	
	if(operand == '*'){
		cout << mult(firstNumber,secondNumber);
	}
	else if(operand == '+'){
		cout << add(firstNumber,secondNumber);
	}
	else{
		cout<<"Operator not found."<<endl;
	}
	return 0;
}


int mult(float a, float b){
		return a * b;
	}
	int add(float a, float b){
		return a + b;
	}

