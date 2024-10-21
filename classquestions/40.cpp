#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0;
    int b=1;
    cout<<a<<","<<b<<",";
    for(int i=0;i<n;i++){
        int c=a+b;
        cout<<c;
           if(i!=n-1){
            cout<<",";
           }
        a=b;
        b=c;}

}


// int fun(int n){
//     if(n==0) return 0;
//     else if(n==1) return 1;
//     else{
//         return fun(n-1)+fun(n-2);
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<fun(n);

// }