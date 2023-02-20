/**
 * Intermediate: Create a class for Employees
 */
#include "employee.h"

// Your code goes here

Employee::Employee(const std::string& name, double wage)
    : m_name(name), m_wage(wage) {}

double Employee::getPay(double hoursWorked) const {
    return m_wage * hoursWorked;
}

std::string Employee::getName() const {
    return m_name;
}
