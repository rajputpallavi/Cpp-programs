#include <iostream>
using namespace std;
class vector{
    private:
    int x,y;
    public:
    vector(int x1=0,int y1=0):x(x1),y(y1){}
    vector operator +(const vector &other) const{
        return vector(x+other.x,y+other.y);
    }
    vector operator -(const vector &other) const{
        return vector(x-other.x,y-other.y);
    }
    void add(int a1,int a2){
        x+=a1;
        y+=a2;
    }
    void subtract(int a1,int a2){
        if (a1 <= x){
            x-=a1;
          }
          else{
            cout<<"the x is insufficient"<<endl;
          }
          if (a2 <=y){
            y-=a2;

          }
          else{
            cout<<"the y is insufficient"<<endl;
          }
        
    }
      void display() const{
            cout<<"The x is = "<<x<<endl;
            cout<<"The y is = "<<y<<endl;
          }

};
int main(){
  vector v1(2,4);
  vector v2(1,2);
  cout<<"Initial values"<<endl;
  v1.display();
  v2.display();
  vector total=v1+v2;
  total.display();
  vector sub=v1-v2;
  sub.display();





}
