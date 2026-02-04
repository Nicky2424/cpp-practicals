/*
Practical 1
Creating a Structure Student with the following parameters:
Roll Number, Name and Marks
*/

#include <iostream>
#include <string>
using namespace std;

struct Student {
    int roll;
    string name;
    float marks;
};

int main() {
    Student s[5];

    // Input details
    for (int i = 0; i < 5; i++) {
        cout << "\nEnter details of student " << i + 1 << endl;
        cout << "Roll Number: ";
        cin >> s[i].roll;

        cout << "Name: ";
        cin >> s[i].name;

        cout << "Marks: ";
        cin >> s[i].marks;
    }

    // Display students with marks > 75
    cout << "\nStudents who scored more than 75 marks:\n";
    for (int i = 0; i < 5; i++) {
        if (s[i].marks > 75) {
            cout << "\nRoll Number: " << s[i].roll;
            cout << "\nName: " << s[i].name;
            cout << "\nMarks: " << s[i].marks << endl;
        }
    }

    return 0;
}

/*
==================== SAMPLE INPUT ====================

Enter details of student 1
Roll Number: 5
Name: Amy
Marks: 78

Enter details of student 2
Roll Number: 11
Name: Rohan
Marks: 80

Enter details of student 3
Roll Number: 18
Name: Priya
Marks: 83

Enter details of student 4
Roll Number: 20
Name: Nancy
Marks: 85

Enter details of student 5
Roll Number: 22
Name: Jia
Marks: 90

==================== SAMPLE OUTPUT ====================

Students who scored more than 75 marks:

Roll Number: 5
Name: Amy
Marks: 78


Roll Number: 11
Name: Rohan
Marks: 80


Roll Number: 18
Name: Priya
Marks: 83


Roll Number: 20
Name: Nancy
Marks: 85


Roll Number: 22
Name: Jia
Marks: 90

=====================================================
*/
