
// LOGIN MANAGEMENT SYSTEM....

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// TEMPLATE OF USER THAT CONSISTS OF : USERNAME & PASSWORD
class User {
    private:
        string username, password;

    public:
        User(string name, string pass){
            this->username = name;
            this->password = pass;
        }

        string getUsername () {
            return this->username;
        }

        string getPassword () {
            return this->password;
        }
};

// MANAGING ALL THE USER MENU OPTIONS HERE.
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

        bool LoginUser(string name, string pass) {
            for (int i=0; i<users.size(); i++){
                if(users[i].getUsername() == name && users[i].getPassword() == pass) {
                    cout<<"\t\t Login Successfully....."<<endl;
                    return true;
                }
            }
            cout<<"\t\t Invalid User Name and Password ....."<<endl;
            return false;
        }

        void showUser () {
            cout<<"\t\t ---USERS LISTS ---"<<endl;
            for (int i=0; i<users.size(); i++){
                cout<<"\t\t"<<users[i].getUsername()<<endl;
            }
        }

        void searhUser (string name) {
            for (int i=0; i<users.size(); i++){
                if (users[i].getUsername() == name) {
                    cout<<"\t\t User Found"<<endl;
                    return;
                }
            }
            cout<<"\t\t User not Found"<<endl;
        }

        void deleteUser (string name) {
            for (int i=0; i<users.size(); i++) {
                if (users[i].getUsername() == name){
                    users.erase(users.begin() + 1);
                    cout<<"\t\t User Deleted Successfully...."<<endl;
                    return;
                }
            }
            cout<<"\t\t User not found"<<endl;
        }

};


int main () {
    UserManager userManage;
    int choice; // Accepting user choice from the Menu.
    char conChoice; // User wants to continue searching the menu or not.
    string userName, password;

    do {
        system("cls");  // CLEAR THE SCREEN...
        cout << "\n\n\t\t 1. Register User " << endl;
        cout << "\t\t 2. Login " << endl;
        cout << "\t\t 3. Show User List" << endl;
        cout << "\t\t 4. Search User" << endl;
        cout << "\t\t 5. Delete User" << endl;
        cout << "\t\t 6. Exit" << endl;

        cout << "\t\t Enter your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            userManage.RegisterUser();
            break;

        case 2:
            cout<<"\t\t Enter Username : ";
            cin>>userName;
            cout<<"\t\t Enter Password : ";
            cin>>password;
            userManage.LoginUser(userName,password);
            break;

        case 3:
            userManage.showUser();
            break;

        case 4:
            cout<<"\t\t Enter User Name : ";
            cin>>userName;
            userManage.searhUser(userName);
            break;

        case 5:
            cout<<"\t\t Enter User Name you want to delete : ";
            cin>>userName;
            userManage.deleteUser(userName);
            break;

        case 6:
            exit (1);
        }

    cout<<"\t\tDo you Want to Continue [Yes/No] ? : ";
    cin>>conChoice;
    }while(conChoice == 'y' || conChoice == 'Y');

    return 0;
}