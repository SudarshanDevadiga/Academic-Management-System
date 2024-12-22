#include <iostream>
#include <string>
using namespace std;

// Base Class
class Person {
protected:
    string name;
    int age;

public:
    Person(string n = "", int a = 0) : name(n), age(a) {}
    
    void inputDetails() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        
        // Input validation for age
        while (age < 0 || age > 120) {
            cout << "Invalid age! Please enter age between 0 and 120: ";
            cin >> age;
        }
    }
    
    virtual void displayDetails() {
        cout << "\nName: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived Class - Student
class Student : public Person {
private:
    string rollNumber;
    string course;

public:
    void inputDetails() {
        Person::inputDetails();
        cin.ignore(); // Clear input buffer
        
        cout << "Enter roll number: ";
        getline(cin, rollNumber);
        cout << "Enter course: ";
        getline(cin, course);
    }
    
    void displayDetails() override {
        cout << "\nStudent Details:" << endl;
        Person::displayDetails();
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Course: " << course << endl;
    }
};

// Derived Class - Faculty
class Faculty : public Person {
private:
    string employeeId;
    string department;

public:
    void inputDetails() {
        Person::inputDetails();
        cin.ignore(); // Clear input buffer
        
        cout << "Enter employee ID: ";
        getline(cin, employeeId);
        cout << "Enter department: ";
        getline(cin, department);
    }
    
    void displayDetails() override {
        cout << "\nFaculty Details:" << endl;
        Person::displayDetails();
        cout << "Employee ID: " << employeeId << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Student student;
    Faculty faculty;
    
    cout << "Enter Student Information:\n";
    student.inputDetails();
    
    cout << "\nEnter Faculty Information:\n";
    faculty.inputDetails();
    
    // Display information
    student.displayDetails();
    faculty.displayDetails();
    
    return 0;
}