// Create a class DataManager with a static member variable dataValue and static member functions 
// setData(int value) and getData(). setData should set the dataValue, and getData should return the 
// current dataValue. Demonstrate these functions in main()
 
#include<iostream>
using namespace std;
class DataManager{
    private:
    static int datavalue;
    public:
    static void setData(int value){
        datavalue=value;
    }
    static int getdata(){
        return datavalue;
    }
};
int DataManager:: datavalue;
int main(){
    DataManager data;
    data.setData(100);
    cout<<data.getdata();
    // DataManager::setData(14);
    // cout << DataManager::getdata();
}

















