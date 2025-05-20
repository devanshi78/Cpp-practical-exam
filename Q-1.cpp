//  Q1. (Single Inheritance with Array)
// Create a class Student to store 5 student names using an array. Create a derived class
// Display that will show all student names using single inheritance.


#include<iostream>
using namespace std;

class Student{
    protected:
        string name[5];

    public:
    void inputNames() {
        cout << "Enter 5 student names:\n";
        for (int i = 0; i < 5; i++) {
            cout << "Student " << i + 1 << ": ";
            cin>>name[i];
        }
    }
};

class Display : public Student {
    public:
        void showNames() {
            cout << "\nStudent Names are:\n";
            for (int i = 0; i < 5; i++) {
                cout << name[i] << endl;
            }
        }
};

int main()
{
    Display d;
    d.inputNames();
    d.showNames();

    return 0;

}