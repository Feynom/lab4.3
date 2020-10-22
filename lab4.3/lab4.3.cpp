#include <iostream>
#include <Windows.h>
#include <iomanip>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    double x, a, b, c, f, xp, xk, dx;

    cout << "Введіть значення 'a':"; cin >> a;
    cout << "Введіть значення 'b':"; cin >> b;
    cout << "Введіть значення 'c':"; cin >> c;
    cout << "Введіть значення 'xp':"; cin >> xp;
    cout << "Введіть значення 'xk':"; cin >> xk;
    cout << "Введіть значення 'dx':"; cin >> dx;

    cout << fixed;
    cout << "---------------------------------------------------" << endl;
    cout << "|" << setw(5) << "a" << "    |";
    cout << setw(5) << "b" << "    |";
    cout << setw(5) << "c" << "    |";
    cout << setw(5) << "   x=xp" << "  |";
    cout << setw(5) << "f" << "    |" << endl;
    cout << "---------------------------------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (x < 5 && c != 0)
            f = -a * x * x - b;
        else
            if (x > 5 && c == 0)
                f = (x - a) / x;
            else
                f = -x / c;
        cout << "|" << setw(9) << setprecision(2) << a;
        cout << "|" << setw(9) << setprecision(2) << b;
        cout << "|" << setw(9) << setprecision(2) << c;
        cout << "|" << setw(9) << setprecision(2) << x;
        cout << "|" << setw(9) << setprecision(2) << f;
        cout << "|  " << endl;
        x += dx;
    }
    cout << "---------------------------------------------------" << endl;

    cin.get();
    return 0;
}