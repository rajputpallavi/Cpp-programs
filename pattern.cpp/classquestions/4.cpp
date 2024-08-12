#include <iostream>
using namespace  std;
int sending(string email="example@example.com",string subject="NO subject",string body="NO body"){
    cout<<email<<endl;
    cout<<subject<<endl;
    cout<<body<<endl;

}
int main(){
    sending();
    sending("friendship@example.com","meeting reminder");
    sending("boss@example.com","Quarterly Report");    
   
}