// // Implement a class MathOperations with a static member function add(int a, int b) that returns the 
// // sum of a and b. Also, implement a static member function subtract(int a, int b) that returns the 
// // difference between a and b. Demonstrate these functions in main()

#include<iostream>
using namespace std;
class MathOperations{
    private:
    static int a,b;
    public:
    static int add(int a,int b){
        return a+b;
    }
    static int sub(int a,int b){
        return a-b;
    }
};
int MathOperations:: a,b;
int main(){
    MathOperations m;
    cout<<m.add(7,9)<<endl;
    cout<<m.sub(7,9)<<endl;


    // cout<<MathOperations:: add(7,9)<<endl;
    // cout<<MathOperations:: sub(7,9);
    
}