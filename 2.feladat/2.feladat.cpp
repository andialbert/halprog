

#include <iostream>
#include <cmath>
using namespace std;


template<typename F, typename DF, typename T>

T Newton(F f, DF df, T x0, T epsilon)
{

    double x1 = x0 - f(x0) / df(x0);
    while (abs(x1 - x0) > epsilon)
    {

        x0 = x1;
        x1 = x0 - f(x0) / df(x0);

    }
    return x1;

}



int main()
{
    cout.precision(16);
    double result = Newton([](double x) { return x * x - 612.0; }, [](double x) { return 2.0 * x; }, 10.0, 0.005);
    cout << "The root using the Newton iterator is: " << result << endl;
    return 0;
}

