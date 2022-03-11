#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

int main() // MAIN DEFINATION
{
    char ch;
    scanf("%c", &ch);
    if (ch == 65 || ch == 69 || ch == 73 || ch == 79 || ch == 85)
    {
        printf("Vowel");
    }
    else if (ch >= 65 && ch <= 90)
    {
        printf("Consonant");
    }

    return 0;
}