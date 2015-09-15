#include "calculator.hpp"
#include <iostream>
using namespace std;

    void calculator::sum (const double x,const double y)
      { 
       cout<<"\n The Result is "<<x + y<<endl;
       }
    void calculator::sub (const double x,const double y)
      {
        cout<<"\n The Result is "<<x - y<<endl;
      }
    void calculator::mul (const double x,const double y)
      {
            cout<<"\n The result is "<<x * y<<endl;
      }
    void calculator::div (const double x,const double y)
      {
          cout<<"\n The Result is "<<x / y<<endl;
      }
    void calculator::mod (const int x,const int y)
      {
           cout<<"\n The Result is "<<x % y<<endl;
       }
	

