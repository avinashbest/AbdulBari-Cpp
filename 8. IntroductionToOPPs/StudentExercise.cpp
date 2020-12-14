#include <iostream>
#include <string>
using namespace std;
/*Write a class for student with 
1. Roll
2. Name
3. Marks in 3 subject
Functions for Total marks Grade & required methods*/
class Student
{
private:
    int roll;
    string name;
    int mathMarks;
    int phyMarks;
    int chemMarks;

public:
    Student(int r, string n, int m, int p, int c) //Constructor
    {
        roll = r;
        name = n;
        mathMarks = m;
        phyMarks = p;
        chemMarks = c;
    }
    int total()
    {
        return (mathMarks + phyMarks + chemMarks);
    }
    char grade()
    {
        float avg = total() / 3;
        if (avg > 60)
        {
            return 'A';
        }
        else if (avg >= 40 && avg < 60)
        {
            return 'B';
        }
        else
        {
            return 'C';
        }
    }
};

int main(void)
{
    int roll;
    string name;
    int m, p, c;
    cout << "Enter Roll number of a Student: ";
    cin >> roll;
    cout << "Enter name of the Student: ";
    cin >> name;
    cout << "Enter marks for maths, phy & chem respectively: ";
    cin >> m >> p >> c;
    Student s(roll, name, m, p, c);
    cout << "Total Marks: " << s.total() << endl;
    cout << "Grade of Student: " << s.grade() << endl;
    return 0;
}
// Code By: Avinash Kumar.