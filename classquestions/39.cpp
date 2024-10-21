//How does the string class in the provided code implement and use the[] operator for indexing,and what are the effects of modifying a character in the string using this operator? 
//convert binary to decimal
#include <iostream>
#include <cmath>
using namespace std;
int main(){ int n;
    cout<<"Enter a binary number: ";
    cin>>n;
    int sum=0;
    int i=0;
    while(n!=0){
        int d=n%10;
        int result=d*pow(2,i);
        sum+=result;
        i++;
        n=n/10;
    }
    cout<<"Decimal number: "<<sum<<endl;

}
