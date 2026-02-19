/*Design a simple calculator for the user which takes 2 numbers as the input. And a choice
for the operation that he wish to perform as following:
Press + for addition
Press – for subtraction
Press * for multiplication
Press / for division
Press % for modulus.
Note that the denominator for / and % should be greater than 0*/

#include<iostream>
using namespace std;
int main(){
			
	float num1=0.0;
	float num2=0.0;
	int num3=0;
	int num4=0;
	float result=0.0;
	char ch=0;				
		
	cout<<"\n\nPress + for addition\n";
	cout<<"Press – for subtraction\n";
	cout<<"Press * for multiplication\n";
	cout<<"Press / for division\n";
	cout<<"Press % for modulus\n\n"; 
	
	cout<<"Enter oerator: ";
	cin>>ch;
	
	switch(ch)
	{
		case '+':
		cout<<"Enter number 1: ";
		cin>>num1;
		cout<<"Enter number 2: ";
		cin>>num2;	
		result=num1+num2;
		cout<<"result is: "<<result;	
		break;
			
		case '-':
		cout<<"Enter number 1: ";
		cin>>num1;
		cout<<"Enter number 2: ";
		cin>>num2;
		result=num1-num2;
		cout<<"result is: "<<result;
		break;
		
		case '*':
		cout<<"Enter number 1: ";
		cin>>num1;
		cout<<"Enter number 2: ";
		cin>>num2;	
		result=num1*num2;
		cout<<"result is: "<<result;	
		break;
		
		case '/':
		cout<<"Enter number 1: ";
		cin>>num1;
		cout<<"Enter number 2: ";
		cin>>num2;	
		result=num1/num2;
		
		if(num2>=1){
		cout<<"result is: "<<result;}
		else{cout<<"invalid";}
		break;
		
		case '%':
			
		cout<<"Enter number 1: ";
		cin>>num3;
		cout<<"Enter number 2: ";
		cin>>num4;
		if(num4>=1){
			
		result=num3 % num4;
		cout<<"result is: "<<result;}
		else{cout<<"invalid";}
		break;
		
		default:
		cout<<"Invalid data";		
	}
}
