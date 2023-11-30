#include <iostream>
using namespace std;

double a, y;

double f1(double x)
{

    if (-6 >= x && x >= -7) // отрезок от -7 до -6
    {
        y = 1;
    }
    else if (x <= -4) // отрезок от -6 до -4
    {
        y = -0.5 * x - 2;
    }
    else if (x <= 0) // отрезок от -4 до 0
    {
        y = sqrt(4 - pow((x + 2), 2)); // расчет у для заданного отрезка
    }
    else if (x <= 2) // отрезок от 0 до 2
    {
        y = -sqrt((1) - pow((x - 1), 2)); // расчет у для заданного отрезка
    }
    else if (x <= 3) // отрезок от 2 до 3
    {
        y = -x + 2; // расчет у для заданного отрезка
    }
    return y;
}

void main()
{
    for (a = -7; a <= 3; a++)
    {
        y = f1(a);
        cout << "y=" << y << "\n";
    }
}
