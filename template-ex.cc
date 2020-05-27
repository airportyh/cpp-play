#include <iostream>
#include "point.h"
using namespace things;
using namespace std;

template <class T> T sum(T one, T other) {
    return one + other;
}

int main()
{
    auto result = sum(1, 2);
    cout << "The answer is " << result << "." << endl;
    Point p1 (1, 2);
    Point p2 (3, 4);
    auto pResult = sum(p1, p2);
    pResult.doIt();
    string hello = "Hello";
    string comma = ", ";
    string world = "world";
    string exclamation = "!";
    auto result2 = sum(sum(sum(hello, comma), world), exclamation);
    cout << "The second answer is " << result2 << "." << endl;
}
