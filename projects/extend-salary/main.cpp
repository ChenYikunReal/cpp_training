#include <iostream>
#include <vector>

#include "employee.h"
#include "hourly_employee.h"
#include "salaried_employee.h"
#include "manager.h"

using namespace std;

int main() {
    vector<Employee*> staff;
    staff.push_back(new HourlyEmployee("Sam", 50));
    staff.push_back(new SalariedEmployee("Bob", 520000));
    staff.push_back(new Manager("Smith", 2600000, 5000));
    for (auto & i : staff) {
        cout << "Hours worked by " << i->getName() << ": ";
        int hours;
        cin >> hours;
        cout << "Salary: " << i->weeklyPay(hours) << endl;
    }
    return 0;
}
