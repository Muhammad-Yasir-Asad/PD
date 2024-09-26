#include <iostream>
using namespace std;

void add(int num1,int num2);
void sub(int num1,int num2);
void mul(int num1,int num2);
void divison(int num1,int num2);

int main()
{

	int num1, num2;
	cout << "Enter the first Number : ";
	cin >> num1;
	cout << "Enter the second Number : ";
	cin >> num2;
	char opreater;
	cout << "Enter opreater (+, -, *, /) : ";
	cin >> opreater;
	if(opreater == '+')
	{

		add(num1, num2);

	}

	if(opreater == '-')
	{

		sub(num1, num2);

	}

	if(opreater == '*')
	{

		mul(num1, num2);

	}

	if(opreater == '/')
	{

		divison(num1, num2);

	}
	
}

void add(int num1,int num2)
{

	int sum = num1 + num2;
	cout << "Sum : " << sum;

}

void sub(int num1,int num2)
{

	int sub = num1 - num2;
	cout << "Substraction : " << sub;

}

void mul(int num1,int num2)
{

	int mul = num1 * num2;
	cout << "Multiplication : " << mul;

}

void divison(int num1,int num2)
{

	int div = num1 / num2;
	cout << "Division : " << div;

}
