#ifndef EXTEND_SALARY_SALARIED_EMPLOYEE_H
#define EXTEND_SALARY_SALARIED_EMPLOYEE_H

#include "employee.h"

class SalariedEmployee : public Employee {
public:
    SalariedEmployee(string name, double salary);
    virtual double weeklyPay(int hoursWorked) const;

private:
    double annualSalary;
};

SalariedEmployee::SalariedEmployee(string name, double salary) {
    setName(name);
    annualSalary = salary;
}

double SalariedEmployee::weeklyPay(int hoursWorked) const {
    const int WEEKS_PER_YEAR = 52;
    return annualSalary / WEEKS_PER_YEAR;
}

#endif //EXTEND_SALARY_SALARIED_EMPLOYEE_H
