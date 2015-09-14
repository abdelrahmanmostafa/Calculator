#include <iostream>
#include <stdlib.h>
#include "calculator.hpp"
#include "main.hpp"
using namespace std;

  int main (int argc, char ** argv)
{
    startCalc();
	return 0;
}
void startCalc()
{
    calculator  calc;
    int operation=0;
	while(1)
	{
    cout<<endl;
	cout<<"********Simple  Caclulator********"<<endl;
    cout<<"select an operation"<<endl;
    cout<<"1:addition"<<endl;
    cout<<"2:substraction"<<endl;
    cout<<"3:muliplication"<<endl;
    cout<<"4:division"<<endl;
    cout<<"5:Modulo"<<endl;
    cout<<"6:exit"<<endl;
    cout<<"--------------------------------------------------------------------"<<endl;
    cout<<"Enter your choice :";
	cin>>operation;
    switch(operation)
	{
		case 1:
		{
        enterInputs();
		calc.sum(num1,num2);
		break;
		}
		case 2:
		{
        enterInputs();
        calc.sub(num1,num2);
        break;
		}
		case 3:
		{
        enterInputs();
        calc.mul(num1,num2);
        break;
		
		}
		case 4:
		{
        enterInputs();
        calc.div(num1,num2);
        break;
		
		}
		case 5:
		{
        enterInputs();
        calc.mod(num1,num2);
        break;
        }
        case 6:
        {
        exit(0);
        }

        default:
        {
        cout<<"\nunvalid choice,try again"<<endl;
		}

	}
 }
}
void enterInputs()
{
    cout<<"Enter first number:  ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
}
