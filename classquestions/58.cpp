/*
Question Statement:
In a complex calculator application, implement a C++ program that performs a variety of operations:
addition, subtraction, multiplication, division, exponentiation, and square root. The program should
define a class named ComplexCalculator that can handle these operations with the following features:
1. Add two numbers.
2. Subtract two numbers.
3. Multiply two numbers.
4. Divide two numbers, throwing exceptions for division by zero.
5. Raise a number to a power (exponentiation), throwing exceptions for negative bases with non-
integer exponents.
6. Compute the square root of a number, throwing exceptions for negative numbers.
The program should implement custom exceptions for:
 Division by zero.
 Invalid operation types.
 Negative square roots.
 Invalid exponentiation inputs.
Input Explanation:
1. The first line contains a string operation, which can be &quot;add&quot;, &quot;subtract&quot;, &quot;multiply&quot;, &quot;divide&quot;,
&quot;exponentiate&quot;, or &quot;sqrt&quot;.
2. The second line contains one or two space-separated values, which can be integers or floating-
point numbers.
Output Explanation:
 After performing the operation, display the result.
 If an exception is thrown during an operation, display the corresponding error message.Question Statement:
In a complex calculator application, implement a C++ program that performs a variety of operations:
addition, subtraction, multiplication, division, exponentiation, and square root. The program should
define a class named ComplexCalculator that can handle these operations with the following features:
1. Add two numbers.
2. Subtract two numbers.
3. Multiply two numbers.
4. Divide two numbers, throwing exceptions for division by zero.
5. Raise a number to a power (exponentiation), throwing exceptions for negative bases with non-
integer exponents.
6. Compute the square root of a number, throwing exceptions for negative numbers.
The program should implement custom exceptions for:
 Division by zero.
 Invalid operation types.
 Negative square roots.
 Invalid exponentiation inputs.
Input Explanation:
1. The first line contains a string operation, which can be &quot;add&quot;, &quot;subtract&quot;, &quot;multiply&quot;, &quot;divide&quot;,
&quot;exponentiate&quot;, or &quot;sqrt&quot;.
2. The second line contains one or two space-separated values, which can be integers or floating-
point numbers.
Output Explanation:
 After performing the operation, display the result.
 If an exception is thrown during an operation, display the corresponding error message.
*/

#include<iostream>
#include<stdexcept>
#include<math.h>
using namespace std;
class ComplexCalculator{
    private:
    int a;
    int b;
    public:
    ComplexCalculator(int aa,int bb){
        aa=a=0;
        bb=b=0;
        }
    void add(int a,int b){
        cout<<a+b<<endl;
    }
    void sub(int a,int b){
       cout<<a-b<<endl;
    }
    void mul(int a, int b){
       cout<<a*b<<endl;
    }
    void div(int a,int b){
        if(b==0){
            throw invalid_argument("cannot be divisible");
        }
        cout<<a/b<<endl;
    }
    void sq(int a){
        if(a<0){
            throw invalid_argument("the value is negative");
            }
        cout<<sqrt(a)<<endl;
    }
    void power(int a,int b){
          if(a<0){
            throw invalid_argument("the value is negative");}
            cout<<pow(a,b)<<endl;

    }
};

int main(){
    ComplexCalculator c(2,3);
    string s;
    cout<<"Enter an operator (+,-,*,/,^,sqrt): ";
    cin>>s;
    cout<<"Enter two numbers (operands): ";
    int a, b;
    cin>>a;
    cin>>b;
    try{
        if(s=="+"){
            c.add(a,b);
        }
        else if(s=="-"){
              c.sub(a,b);
        }
         else if(s=="*"){
            c.mul(a,b);
            
        }
         else if(s=="/"){
            c.div(a,b);
            
        }
         else if(s=="^"){
            c.power(a,b);
            
        }
         else if(s=="sqrt"){
            c.sq(a);
            
        }
        else{
            cout<<"Invalid operator"<<endl;
        }
    }
    catch(exception& x){
        cout<<x.what();
    }
}