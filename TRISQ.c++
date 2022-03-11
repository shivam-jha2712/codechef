#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;
int main() // MAIN DEFINATION
{
    int t;
    cin >> t;
    while (t--)
    {
        int b;
        int a = 2;
        cin >> b;
        int number = ((b / a) - 1) * (b / a) / 2;
        cout << number << endl;
    }
    return 0;
}
// To find the maximum number of squares we will have to start from the base of the triangle and find out the number of squares.

// To find the number of squares we will divide the base s by the side of the square a and subtract 1 from it = b/a – 1.

// Then it will leave us another isosceles triangle with base (b - a) which will accommodate one less square than the previous row below it which we can calculate in the following way −

// Squares in next row = (b - a)/a – 1 = (b/a – a/a) – 1= b/a - 1 - 1 = b/a – 2 = one square less than the previous row.

// The number of squares keep decreasing until it reaches 1, therefore we have to only find the number of squares in the base row and use the formula of adding natural numbers to find the final sum which is −

// (n) * (n + 1) / 2
// In this case the formula becomes − ((b / a) – 1) * (b / a) / 2