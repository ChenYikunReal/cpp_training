#ifndef EXTEND_SALARY_MANAGER_H
#define EXTEND_SALARY_MANAGER_H

class Manager : public SalariedEmployee {
public:
    Manager(string name, double salary, double bonus);
    virtual double weeklyPay(int hours) const;

private:
    double weeklyBonus;
};

Manager::Manager(string name, double salary, double bonus) : SalariedEmployee(name, salary){
    weeklyBonus = bonus;
}

double Manager::weeklyPay(int hours) const {
    return SalariedEmployee::weeklyPay(hours) + weeklyBonus;
}

#endif //EXTEND_SALARY_MANAGER_H
