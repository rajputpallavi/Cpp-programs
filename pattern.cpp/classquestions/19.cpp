// Create a class InstanceTracker with a static member variable instanceCount and a static member 
// function createInstance() that increments instanceCount. Add another static memberfunction 
// getInstanceCount() to return the current count of instances. Demonstrate the functionality in main()

#include<iostream>
using namespace std;
class InstanceTracker{
    private:
    static int instancecount;
    public:
    static void createInstance(){
        instancecount++;
    }
    static int getInstanceCount(){
        return instancecount;
    }
};
int InstanceTracker:: instancecount=23;
int main(){
    // InstanceTracker::createInstance();
    InstanceTracker i;
    cout<<i.getInstanceCount();
}