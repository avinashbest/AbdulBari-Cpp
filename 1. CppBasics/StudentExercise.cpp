/*
Write a program to calculate Net Salary Program should take following as input:
1. Basic Salary
2. Percentage of Allowances
3. Percentage of Deductions
*/

#include <iostream>
using namespace std;

int main(void)
{
    float basic;
    float percentAllow;
    float percentDeduct;
    float netSalary;

    cout << "Enter Basic Salary: ";
    cin >> basic;
    cout << "Enter percent of Allowances: ";
    cin >> percentAllow;
    cout << "Enter percent of Deductions: ";
    cin >> percentDeduct;

    netSalary = basic + basic * percentAllow / 100 - basic * percentDeduct / 100;

    cout << "Net Salary is: " << netSalary << endl;

    return 0;
}
// Date: 09 Nov 2020
// Code By: Avinash Kumar.