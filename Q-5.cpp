// Q5. (Menu-Driven Program Using Vector)
// Create a menu-driven program that performs the following using a vector of strings:
// - Add a student name
// - View all student names
// - Delete student name by index
// Use appropriate functions for each operation.

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<string> studentname;
    int choice;

    do{
        cout<<"-------- Student Details --------"<<endl;
        cout<<"1. Add Student Name"<<endl;
        cout<<"2. View All Student Name"<<endl;
        cout<<"3. Delete Student Name"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your Choice : ";
        cin>>choice;

        switch(choice){
            case 1 :
                {
                string name;
                cout<<"Enter Student name to add : ";
                cin>>name;
                studentname.push_back(name);
                cout<<name<<" added successfully."<<endl;  

                break;
            }
            case 2 :
                cout<<"\nList Of student Data: "<<endl;
                if(studentname.empty())
                {
                    cout<<"No Student Found. ";
                }
                else
                {
                    for(int i = 0; i < studentname.size(); i++){
                        cout<<i<<". "<<studentname[i]<<endl;
                    }
                }

                break;
            case 3 :
                int index;
                cout << "Enter index to delete: ";
                cin >> index;

                if (index < studentname.size()) {

                    cout << "Deleted: " << studentname[index] << endl;

                    studentname.erase(studentname.begin() + index);
                } else {
                    cout << "Invalid index!" << endl;
                }
                break;
            case 4 :
                cout<<"Exiting.....";
                break;
            default:
                cout<<"Invalid Choice.";
        }

    }while(choice != 4);

    return 0;

}