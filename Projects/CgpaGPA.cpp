#include <iostream>
#include <iomanip>
using namespace std;
// Made by NUST student
// you can edit as per your need
void menu(){
    cout << "******************************************" << endl; 
    cout << "*        CGPA/GPA Calculator             *" << endl;
    cout << "******************************************" << endl;  
    cout << "*              Main Menu:                *" << endl; 
    cout << "******************************************" << endl; 
    cout << "*              1. GPA Calculator         *" << endl; 
    cout << "*              2. CGPA Calculator        *" << endl; 
    cout << "*              3. Exit                   *" << endl; 
    cout << "******************************************" << endl;
}

void GPA(){
    int subjects;
    cout << "How many subjects are present in this course: ";
    cin >> subjects;

    if (subjects <= 0) {
        cout << "Invalid number of subjects!\n";
        return;
    }

    float sumofgradepoints = 0, credithour = 0;

    for(int i = 1; i <= subjects; i++) {
        float g, p;
        cout << "--------------------------" << endl;
        cout << "Enter the Credit hours for subject " << i << " : ";
        cin >> g;
        cout << "Enter the Grade Points for subject " << i << " : ";
        cin >> p;

        if (g < 0 || p < 0) {
            cout << "Invalid input! Credit hours and grade points must be non-negative.\n";
            return;
        }

        credithour += g;
        sumofgradepoints += (g * p);
    }

    if (credithour == 0) {
        cout << "Total credit hours cannot be zero!\n";
        return;
    }

    float gpa = sumofgradepoints / credithour;

    cout << "=====================" << endl;
    cout << "|                   |" << endl;
    cout << "|  Your GPA is: " << fixed << setprecision(2) << gpa << "  |" << endl;
    cout << "|                   |" << endl;
    cout << "=====================" << endl;
}

void CGPA(){
    int semesters;
    float CGPA = 0, credithours = 0;

    cout << "How many semesters you want to calculate: ";
    cin >> semesters;

    if (semesters <= 0) {
        cout << "Invalid number of semesters!\n";
        return;
    }

    for(int j = 1; j <= semesters; j++) {
        float gpa, ch;
        cout << "--------------------------" << endl;
        cout << "Enter the GPA of semester " << j << ": ";
        cin >> gpa;
        cout << "Enter the Credit hours of semester " << j << ": ";
        cin >> ch;

        if (gpa < 0 || ch <= 0) {
            cout << "Invalid input! GPA must be non-negative and credit hours > 0.\n";
            return;
        }

        CGPA += (gpa * ch);
        credithours += ch;
    }

    float finalCGPA = CGPA / credithours;

    cout << "=====================" << endl;
    cout << "|                   |" << endl;
    cout << "| Your CGPA is: " << fixed << setprecision(2) << finalCGPA << "  |" << endl;
    cout << "|                   |" << endl;
    cout << "=====================" << endl;
}

int main(){
    while(true){
        menu();
        int option;
        cout << "Enter your option: ";
        cin >> option;

        switch(option){
            case 1:
                GPA();
                break;
            case 2:
                CGPA();
                break;
            case 3:
                cout << "Program exited successfully." << endl;
                return 0;
            default:
                cout << "Please enter a valid option!" << endl;
        }
    }
}
