#include <iostream>
#include <string>
#include <vector>
using namespace std;

class User {
    private:
        string username, password;
    public:
        User(string name, string pass){
            this->username = name;
            this->password = pass;
        }
};

class UserManager {
    private:
        vector<User> users; // create object of vector

    public:
        void RegisterUser() {
            string username, password;
            cout <<"\t\tEnter User Name : ";
            cin>>username;
            cout <<"\t\tEnter Password  : ";
            cin>>password;

            User newUser (username, password);
            users.push_back(newUser);

            cout<<"\t\t User Registered Successfully...."<<endl;
        }


};

int main () {
    UserManager userManage;
    int choice;
    cout<<"\n\n\t\t 1. Register User "<<endl;
    cout<<"\t\t 2. Login "<<endl;
    cout<<"\t\t 3. Show User List"<<endl;
    cout<<"\t\t 4. Search User"<<endl;
    cout<<"\t\t 5. Delete User"<<endl;
    cout<<"\t\t 6. Exit"<<endl;

    cout<<"\t\t Enter your Choice : ";
    cin>>choice;

    switch(choice) {
        case 1: 
            userManage.RegisterUser();
            break;
    }

    return 0;
}