#include <iostream>
using namespace std;

int main()
{
    int n, reversedNumber = 0, remainder;
    cout << "Enter an integer to reverse: ";
    cin >> n;
    while (n != 0)
    {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }
    cout << "reversed Number = " << reversedNumber << endl;
    return 0;
}
