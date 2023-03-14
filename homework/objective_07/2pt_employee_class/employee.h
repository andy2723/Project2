/**
 * Intermediate: Create a class for Employees
 */
#pragma once

// Your code goes here
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
public:
    Employee(const std::string& name, double wage);
    double getPay(double hoursWorked) const;
    std::string getName() const;
private:
    std::string m_name;
    double m_wage;
};

#endif
