﻿#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, x, xp, xk, dx, F;

    cout << " a: "; cin >> a;
    cout << " b: "; cin >> b;
    cout << " c: "; cin >> c;
    cout << " xp: "; cin >> xp;
    cout << " xk: "; cin >> xk;
    cout << " dX: "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << "   |"
        << setw(7) << "F" << "    |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (a < 0 && x != 0)
            F = a * pow(x, 2) + pow(b, 2) * x;

        else if (a > 0 && x == 0)
            F = x - (a / (x - c));

        else
            F = 1 + (x / c);

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << F
            << " |" << endl;

        x += dx;
    }

    cout << "---------------------------" << endl;
    return 0;
}
