#include <iostream>
using namespace std;

int main()
{
    int i1 = 1;
    double d1 = 2.2;
    // Promotion
    double d5 = i1;
    // Conversion of pointers to related classes
    // Convert ints to float
    int i5 = static_cast<int>(d1);
    cout << "Value of i5 is: " << i5 << endl;
    return 0;
}