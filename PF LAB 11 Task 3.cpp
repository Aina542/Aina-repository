#include <iostream>
using namespace std;


struct StudentGrading
 {
    string name;
    string SAP_ID;
    string address;
    string department;
    float marks1, marks2;
    float calculateMaxMarks()
	 {
        return (marks1 > marks2) ? marks1 : marks2;
    }
    void displayStudent()
	 {
        cout << "\nStudent Name: " << name << endl;
        cout << "SAP ID: " << SAP_ID << endl;
        cout << "Address: " << address << endl;
        cout << "Department: " << department << endl;
        cout << "Marks for Subject 1: " << marks1 << endl;
        cout << "Marks for Subject 2: " << marks2 << endl;
        cout << "Maximum Marks: " << calculateMaxMarks() << endl;
    }
};

int main()
 {
    const int numStudents = 5;
    StudentGrading students[numStudents];
    for (int i = 0; i < numStudents; i++)
	 {
        cout << "Enter details for Student " << i + 1 << endl;
        cout << "Enter Name: ";
        getline(cin, students[i].name);
        cout << "Enter SAP ID: ";
        getline(cin, students[i].SAP_ID);
        cout << "Enter Address: ";
        getline(cin, students[i].address);
        cout << "Enter Department: ";
        getline(cin, students[i].department);
        cout << "Enter Marks for Subject 1: ";
        cin >> students[i].marks1;
        cout << "Enter Marks for Subject 2: ";
        cin >> students[i].marks2;
        cin.ignore();

        cout << "\n";
    }
    for (int i = 0; i < numStudents; i++)
	 {
        cout << "\nDetails for Student " << i + 1 << ":";
        students[i].displayStudent();
        cout << "\n--------------------------------------\n";
    }
    return 0;
}