/* POLYMORPHISM 
        /\ 
       /  \
      /    \
     /      \
    /        \
Complie-time  Run-time

// FUNCTION OVERLOADING
*/

#include<iostream>
using namespace std;

class Hero {
    public:

        int sum (int x, int y){
            cout<<"Inside 1st Signature"<<endl;
            return x + y;
        }

        int sum(int x, int y, int z) { 
            cout<<"Inside 2nd Signature"<<endl;
            return x + y + z; 
        }

        int sum (int x, float y){
            cout<<"Inside 3rd Signature"<<endl;
            return x + y;
        }
        
        // Never declare a function different from other than the previous declaration return type...
        double sum (int x, int y) {
            return 100;
        }
    
};

int main () {
    Hero obj;
    //cout<<obj.sum(2,3);
    //cout<<obj.sum(2,3,4);
    cout<<obj.sum(2,3.5f);  // here, 3.5f means floating type number otherwise compiler will consider it as double.

    return 0;
}
