#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

string concatStrings(string one, string other) {
    return one + other;
}

char *concatCStrings(const char *one, const char *other) {
    char * result = (char *)malloc(sizeof(char) * (strlen(one) + strlen(other)));
    strcpy(result, one);
    strcpy(result + strlen(one), other);
    return result;
}

int main()
{
    string one = "Hello";
    string two = "World";
    string three = concatStrings(one, two);
    cout << three << endl;  
    char oneC[] = "Hello";
    char twoC[] = "World";
    char *threeC = concatCStrings(oneC, twoC);
    cout << threeC << endl;
}
