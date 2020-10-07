#ifndef EXTEND_SALARY_EMPLOYEE_H
#define EXTEND_SALARY_EMPLOYEE_H

#include <string>

using namespace std;

class Employee {
public:
    Employee();
    void setName(string employeeName);
    string getName() const;
    virtual double weeklyPay(int hoursWorked) const;

private:
    string name;
};

Employee::Employee() {}

void Employee::setName(string employeeName) {
    name = employeeName;
}

string Employee::getName() const {
    return name;
}

double Employee::weeklyPay(int hoursWorked) const {
    return 0;
}

#endif //EXTEND_SALARY_EMPLOYEE_H
