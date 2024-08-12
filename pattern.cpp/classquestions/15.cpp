//design two classes :rectangle and rectangularinspector
// The rectangle class should manage3 a rectangle's width and height, both of which are private attributes. 
// The rectangularInspector class should be a friend of rectangle and provide functionalty to compare areas of two rectangles.
#include<iostream>
using namespace std;
class rectangle{
    int length;
    int breadth;
    public:
    int area(int l,int b){
        int result=l*b;
        return result;
    }
    friend class recinspector;
};
class recinspector{
    public:
     void compare(rectangle r){
        int r1=r.area(2,3);
        int r2=r.area(5,6);
         if(r1>r2){
             cout<<"first rectangle is bigger";
        }
        else{
             cout<<"second rectangle is bigger";
       }

     }
};
int main(){
    rectangle r1;
    recinspector i;
    i.compare(r1);
    return 0;
 }













// class rectangle{
//     int height;
//     int width;
//     public:
//     int value(int h,int w){
//         height=h;
//         width=w;
//         int res=h*w;
//         return res;
//     }
//     friend class rectinspector;
// };
// class rectinspector{  
//     public:
//     void compare(rectangle r){
//         int result1=r.value(8,9);
//         int result2=r.value(5,9);
//         if(result1>result2){
//             cout<<"first rect is bigger";
//         }
//         else{
//             cout<<"second rect is bigger";
//         }
//     }
// };
// int main(){
//     rectangle r1;
//     rectinspector i2;
//     i2.compare(r1);
//     return 0;
// }