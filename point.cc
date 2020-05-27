#include "point.h"
#include <iostream>
using namespace std;

namespace things {
    
    Point::Point(int i, int j): x(i), y(j) {
    	std::cout << "Making a point!\n";
    }

    void Point::doIt() {
    	cout << "I am a point and I have an x of " << x << " and a y of " << y << endl;
    }

    Point Point::operator + (Point other) {
        Point newPoint (x + other.x, y + other.y);
        return newPoint;
    }
    
}