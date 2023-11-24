
// DESTRUCTOR

#include <iostream>
#include <string>
using namespace std;

class Hero {
    private:
    int age;
    int height;
    string name;

    public:

    // Constructor....
    Hero () {
        this->age = 0;
        this->height = 0;
        this->name = "";
        cout<<"Default Constructor gets called and all the values gets initialized."<<endl;
    }

    int getAge (){
        return this->age;
    }

    void setAge(int age){
        this->age = age;
    }
    
    // DESTRUCTOR
    ~Hero (){
        cout<<"I'm inside the Destructor"<<endl;
    }

};

int main () {
    system ("cls");
    //Hero arsh; // For static allocation Destructor automatically gets called....

    Hero *ptr = new Hero(); // For dynamic memory allocation use Delete keyoword...


    // cout << "\t\t The Age is : " << ptr->getAge();
    // int newAge;
    // cout << endl;
    // cout<<"\t\t Enter the Age : ";
    // cin>>newAge;
    // ptr->setAge(newAge);
    // cout << "\t\t The Age is : " << ptr->getAge();
    delete ptr;
    return 0;
}