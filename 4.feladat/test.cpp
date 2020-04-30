
#include <iostream>
#include "Vector2.h"



using namespace std;

int main()
{

    Vector2<double> v1{}, v2{};
    cout << "Enter vector 1:\n";
    cin >> v1;
    cout << "Enter vector 2:\n";
    cin >> v2;

    cout << "v1 + v2 = (" << (v1 + v2).x << ", " << (v1 + v2).y << ")" << endl;
    cout << "v1 - v2 = (" << (v1 - v2).x << ", " << (v1 - v2).y << ")" << endl;
    cout << "v1 * v2 = (" << (v1 * v2).x << ", " << (v1 * v2).y << ")" << endl;
    cout << "v1 / v2 = (" << (v1 / v2).x << ", " << (v1 / v2).y << ")" << endl;
  
    v2 += v1;
    cout << "v2 += v1 -> v2 = (" << v2.x << ", " << v2.y << ")" << endl;
    v2 -= v1;
    cout << "v2 -= v1 -> v2 = (" << v2.x << ", " << v2.y << ")" << endl;
    v2 *= 5;
    cout << "v2 *= 5 -> v2 = (" << v2.x << ", " << v2.y << ")" << endl;
    v2 /= 2;
    cout << "v2 /= 2 -> v2 = (" << v2.x << ", " << v2.y << ")" << endl;
    
    cout << "v2 dot v1 = " << dot(v1,v2) << endl;
    cout << "The length of v1 is: " << length(v1) << endl;
    cout << "... and the square of its length:" << sqlength(v1) << endl;
    cout << "Normalized v1: (" << normalize(v1).x << ", " << normalize(v1).y << ")" << endl;
    cout << "Normalized v2: (" << normalize(v1).x << ", " << normalize(v1).y << ")" << endl;

    return 0;
}


