#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

char *concatCStrings1(const char *one, const char *other) {
    char * result = (char *)malloc(sizeof(char) * (strlen(one) + strlen(other)));
    strcpy(result, one);
    strcpy(result + strlen(one), other);
    return result;
}

char *concatCStrings2(const char *one, const char *other) {
    int stringLength = sizeof(char) * (strlen(one) + strlen(other));
    char * result = new char[stringLength];
    strcpy(result, one);
    strcpy(result + strlen(one), other);
    return result;
}

int main()
{
    char oneC[] = "Hello";
    char twoC[] = "World";
    char *threeC = concatCStrings1(oneC, twoC);
    cout << threeC << endl;


    char oneC2[] = "Hello";
    char twoC2[] = "World";
    char *threeC2 = concatCStrings2(oneC2, twoC2);
    cout << threeC2 << endl;
}
