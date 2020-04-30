
#include <iostream>
#include <list>
#include <vector>
#include <cmath>

using namespace std;

template<typename T, typename F, typename I>

auto sum(F func, vector<T> x_vals, I n)
{

    T sum_fin = 0;
    for (int i = 0; i <= n / 2; i++)
    {
        sum_fin += func(x_vals[2 * i]);
    }

    return sum_fin;

}

template<typename T, typename F, typename I>

auto integrate(F func, I n, T x0, T x1)
{
    n++;
    T h = (x1 - x0) / (n + 2);

    vector<T> x_vals;
    for (int i = -1; i <= n + 1; ++i)
    {
        x_vals.push_back(x0 + (i + 1) * h);
    }

    return 2 * h * sum(func, x_vals, n);

}

int main()
{
    cout.precision(16);

    double result = integrate([](double x)
        {
            return cos(x) * exp(-pow(x, 2));
        }, 10000, -1, 3);
    cout << "The result of the integral is: " << result << endl;

}

