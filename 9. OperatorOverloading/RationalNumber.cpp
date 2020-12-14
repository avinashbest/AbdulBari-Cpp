// Program with a Class Rational Number
#include <iostream>
using namespace std;

class Rational
{
private:
    int p;
    int q;

public:
    //Constructors
    Rational()
    {
        p = 1;
        q = 1;
    }
    Rational(int p, int q)
    {
        this->p = p;
        this->q = q;
    }
    Rational(Rational &r)
    {
        this->p = r.p;
        this->q = r.q;
    }
    //Accessors or Getters
    int getP() { return p; }
    int getQ() { return q; }

    //Mutators or Setters
    void setP(int p)
    {
        this->p = p;
    }
    void setQ(int q)
    {
        this->q = q;
    }
    //Overloading '+' Operator
    Rational operator+(Rational r)
    {
        Rational t;
        t.p = this->p * r.q + this->q * r.p;
        t.q = this->q * r.q;
        return t;
    }
    //Overloading Insertion Operator '<<'
    friend ostream &operator<<(ostream &os, Rational &r);
};

ostream &operator<<(ostream &os, Rational &r)
{
    os << r.p << "/" << r.q;
    return os;
}

int main()
{
    Rational r1(3, 4), r2(2, 5), r3;
    r3 = r1 + r2;
    cout << "Sum of " << r1 << " and " << r2 << " is " << r3 << endl;

    return 0;
}
//Code By: Avinash Kumar