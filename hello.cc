#include <iostream>
#include "point.h"
using namespace things;
using namespace std;

int main()
{
	string name;
    
    std::cout << "What is your name?" << endl;
    getline(cin, name);
    
    cout << "Hello, " << name << "!" << endl;
}
