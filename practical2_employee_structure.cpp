/*
Practical 2

Question:
Define a structure Employee containing Employee ID, Name and Basic Salary.
Calculate and display the Gross Salary where:
HRA = 20% of Basic Salary
DA  = 10% of Basic Salary
*/

#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int emp_id;
    string name;
    float basic_salary;
};

int main() {
    Employee e[5];
    float hra, da, gross_salary;

    // Input employee details
    for (int i = 0; i < 5; i++) {
        cout << "\nEnter details of employee " << i + 1 << endl;

        cout << "Employee ID: ";
        cin >> e[i].emp_id;

        cout << "Name: ";
        cin >> e[i].name;

        cout << "Basic Salary: ";
        cin >> e[i].basic_salary;
    }

    // Display gross salary
    cout << "\nEmployee Salary Details:\n";
    for (int i = 0; i < 5; i++) {
        hra = 0.20 * e[i].basic_salary;
        da  = 0.10 * e[i].basic_salary;
        gross_salary = e[i].basic_salary + hra + da;

        cout << "\nEmployee ID: " << e[i].emp_id;
        cout << "\nName: " << e[i].name;
        cout << "\nGross Salary: " << gross_salary << endl;
    }

    return 0;
}

/*
==================== SAMPLE INPUT ====================

Enter details of employee 1
Employee ID: 101
Name: Amy
Basic Salary: 20000

Enter details of employee 2
Employee ID: 102
Name: Rina
Basic Salary: 25000

Enter details of employee 3
Employee ID: 103
Name: Yash
Basic Salary: 30000

Enter details of employee 4
Employee ID: 104
Name: Raj
Basic Salary: 28000

Enter details of employee 5
Employee ID: 105
Name: Subhi
Basic Salary: 22000

==================== SAMPLE OUTPUT ====================

Employee Salary Details:

Employee ID: 101
Name: Amy
Gross Salary: 26000

Employee ID: 102
Name: Rina
Gross Salary: 32500

Employee ID: 103
Name: Yash
Gross Salary: 39000

Employee ID: 104
Name: Raj
Gross Salary: 36400

Employee ID: 105
Name: Subhi
Gross Salary: 28600

=====================================================
*/
