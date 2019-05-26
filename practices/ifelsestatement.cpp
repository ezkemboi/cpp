#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Please enter your age: ";
    cin >> age;
    if (age < 10)
        cout << "My age is less than 10 years\n";
    else if (age > 10)
        cout << "My age is greator than 10 years\n";
    else
        cout << "My age is 10\n";
    return 0;
}