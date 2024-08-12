/* create a class counter with static member variable count and static member function that increment count by 1 .
 add another static member function get count that return the current value of count . demonstrate its uses in main()*/

 #include <iostream>
 using namespace std;
 class counter{
   private:
    static int count;
    public:
    void inc(){
        count++;
    }
    int getcount(){
        return count;
    } };
int counter::count;
 int main(){
    counter c;
    // cout<<"count before increment"<<c.getcount()<<endl;
    // c.inc();
    // cout<<"count after incrementing once"<<c.getcount()<<endl;
    // c.inc();
    //  cout<<"count before incrementing twice"<<c.getcount()<<endl;
    // c.inc();
    // cout<<"count before incrementing thrice"<<c.getcount()<<endl;
    for(int i=1;i<6;i++){
        counter c;
        c.inc();
        cout<<"count after increment by "<<i<<"="<<c.getcount()<<endl;
    }
   
 }
 //implement a class mathoperations with a static 