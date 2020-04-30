

#include <iostream>
#include <vector>
#include <array>
#include <numeric>

using namespace std;


template<typename T>

auto fit(vector<T> const& a, vector<T> const& b) {

    T m, bb;
    T mean_a = accumulate(a.begin(), a.end(), 0);
    T mean_b = accumulate(b.begin(), b.end(), 0);
    int size = a.size();

    vector<T> numerator,denominator;
    
    for (int i = 0; i < size; i++) {
        numerator.push_back((a[i]-mean_a)*(b[i]-mean_b));
        denominator.push_back(pow(a[i]-mean_a,2));
    }
    
    m = accumulate(numerator.begin(), numerator.end(), 0) / accumulate(denominator.begin(), denominator.end(), 0);
    bb = mean_b - m * mean_a;

    array<T, 2> fit_p = { m,bb };
    return fit_p;

}

int main()
{
    vector<double> x_vals, y_vals;
    double value;
    int num;

    
    cout << "Give the number of points:" << endl;
    cin >> num;
    cout << "Give the x coordinates:" << endl;
    for (int i = 0; i < num; i++) {
        cin >> value;
        x_vals.push_back(value);
    }
    cout << "Give the y coordinates:" << endl;
    for (int i = 0; i < num; i++) {
        cin >> value;
        y_vals.push_back(value);
    }
    
    fit(x_vals,y_vals);

    cout << "m = " << fit(x_vals, y_vals)[0] << ", b = " << fit(x_vals, y_vals)[1] << endl;

}


