
// STUDENT MANAGEMENT SYSTEM.....

#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Student {
    private:
        string studentName;
        int studentRoll, studentAge;
    
    public:
        Student (int rollno, int age, string name) {
            this->studentAge = age;
            this->studentRoll = rollno;
            this->studentName = name;
        }
    
    void setRollno(int rollno) {
        this->studentRoll = rollno;
    }

    int getRollno (){
        return this->studentRoll;
    }
    
    void setName (string name){
        this->studentName = name; 
    }

    string getName () {
        return this->studentName;
    }

    void setAge (int age) {
        this->studentAge = age;
    }

    int getAge () {
        return this->studentAge;
    }

    void displayStudent () {
        cout<<"\t\tRoll No : "<<this->studentRoll<<endl;
        cout<<"\t\tName : "<<this->studentName<<endl;
        cout<<"\t\tAge : "<<this->studentAge<<endl;
    }

};

// Function to Add New Student.
void addNewStudent (vector<Student> &students) {
    int rollno, age;
    string name;

    cout <<"\t\tEnter Rollno: ";
    cin>>rollno;

    // check if student already exists...
    for (int i=0; i<students.size(); i++){
        if (students[i].getRollno() == rollno){
            cout<<"\t\tStudent already exists...."<<endl;
            return;
        }
    }
    cout <<"\t\tEnter Name : ";
    cin>>name;
    cout<<"\t\tEnter Age : ";
    cin>>age;

    Student newStudent(rollno, age, name);
    students.push_back(newStudent);

    cout<<"\t\tStudent Add Successfully..."<<endl;
}

// Function to Display All Students..
void displayAllStudents(vector<Student> &students){
    if (students.empty()){
        cout<<"\t\t No Students Found"<<endl;
        return;
    }

    for (int i=0; i<students.size(); i++){
        students[i].displayStudent();
        cout<<endl;
    }
}

// Function to Search Students...
void searchStudent (vector<Student> &students, string &key){
    if (students.empty()){
        cout<<"\t\t No Students Found"<<endl;
        return;
    }

    for (int i=0; i<students.size(); i++){
        if (students[i].getName() == key ){
            cout<<"\t\t Student Found"<<endl;
            return;
        }

        else {
            cout<<"\t\t Student Not Found"<<endl;
            return;
        }
    }
    
}

// Function to Update Student....
void updateStudent (vector<Student> &students, string &keyName, int &keyRoll){
    int i=0;
    string name;
    for (i; i<students.size(); i++){
        if(students[i].getRollno() == keyRoll && students[i].getName() == keyName){
            cout<<"\t\tEnter the Updated Name : ";
            cin>>name;
            students[i].setName(name);
        }
    }
}


int main () {
    vector <Student> students;

    students.push_back(Student(1,21,"Arsh"));   // Student(roll, age , name)
    students.push_back(Student(2,22,"Shubham"));
    students.push_back(Student(3,23,"Shubhangi"));

    int menuOptions, keyRoll;
    char choice;
    string keyName;
    
    do {

        system("cls");
        cout << "\n\t\t------------------------------" << endl;
        cout << "\t\t STUDENT MANAGEMENT SYSTEM" << endl;
        cout << "\t\t------------------------------" << endl;
        cout << "\t\t 1. Add New Student" << endl;
        cout << "\t\t 2. Display all Student" << endl;
        cout << "\t\t 3. Search Student" << endl;
        cout << "\t\t 4. Update Student" << endl;
        cout << "\t\t 5. Delete Student" << endl;
        cout << "\t\t 6. EXIT " << endl;

        cout << "\n\t\tENTER YOUR CHOICE : ";
        cin >> menuOptions;
        cout << "\t\t------------------------------" << endl;

        switch (menuOptions)
        {
        case 1:
            addNewStudent(students);
            break;
        
        case 2:
            displayAllStudents(students);
            break;

        case 3:
            cout<<"\t\t Enter the student Name you want to search : ";
            cin>>keyName;
            searchStudent(students, keyName);
            break;
        
        case 4:
            cout<<"\t\t Enter the student Name you want to update : ";
            cin>>keyName;
            cout<<"\t\t Enter the Roll No of the student : ";
            cin>>keyRoll;
            updateStudent(students, keyName, keyRoll);
            break;
        
        
        case 6:
            exit (1);
        
        default :
            cout<<"\t\tINVALID Option......"<<endl;
        }

        cout <<"\t\tDo you wish to continue [YES/NO]";
        cin>>choice;
    }while (choice == 'y' || choice == 'Y');

    
    return 0;
}