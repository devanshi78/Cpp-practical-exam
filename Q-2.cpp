// Q2. (Multilevel Inheritance – Student Marks)
// Create a multilevel inheritance structure with:
// - Class 1: Student – to input student name
// - Class 2: Marks – to input marks of 3 subjects using array
// - Class 3: Result – to calculate and display total and percentage.

#include<iostream>
using namespace std;

class Student{
    protected:
        string name;

    public:
        void inputName() {
        cout << "Enter student name: ";
        cin >> name;
    };
};

class Marks : public Student{
    protected:
        int marks[3];
    
    public:
    void inputMarks() {
        cout << "Enter marks of 3 subjects:\n";
        for (int i = 0; i < 3; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }
};

class Result : public Marks {
public:
    void displayResult() {
        int total = 0;
        for (int i = 0; i < 3; i++) {
            total += marks[i];
        }
        float percentage = (total / 3.0f);

        cout << "\nStudent Name: " << name << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main()
{
    Result r;
    r.inputName();
    r.inputMarks();
    r.displayResult();


    return 0;

}