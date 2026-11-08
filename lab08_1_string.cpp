#include <iostream>
#include <string>
#include "functions.h"

using namespace std;

int main()
{
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    cout << "Number of occurrences: " << Count(s) << endl;
    cout << "Result: " << Replace(s) << endl;

    return 0;
}