#include <iostream>
#include <iomanip>
using namespace std;

double celsius(double fahrenheit)
{
    return (5.0 / 9.0) * (fahrenheit - 32);
}

int main()
{
    cout << "Fahrenheit      Celsius" << endl;
    cout << "-----------------------" << endl;

    cout << fixed << setprecision(2);

    for (int f = 0; f <= 100; f += 5)
    {
        cout << setw(10) << f
            << setw(13) << celsius(f) << endl;
    }

    return 0;
}