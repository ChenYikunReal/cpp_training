#ifndef EXTEND_SALARY_HOURLY_EMPLOYEE_H
#define EXTEND_SALARY_HOURLY_EMPLOYEE_H

#include "employee.h"

class HourlyEmployee : public Employee {
public:
    HourlyEmployee(string name, double wage);
    virtual double weeklyPay(int hoursWorked) const;

private:
    double hourlyWage;
};

HourlyEmployee::HourlyEmployee(string name, double wage) {
    setName(name);
    hourlyWage = wage;
}

double HourlyEmployee::weeklyPay(int hoursWorked) const {
    double pay = hoursWorked * hourlyWage;
    if (hoursWorked > 40) {
        pay = pay + ((hoursWorked-40)*0.5) * hourlyWage;
    }
    return pay;
}

#endif //EXTEND_SALARY_HOURLY_EMPLOYEE_H
