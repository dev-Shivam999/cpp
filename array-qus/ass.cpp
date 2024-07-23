#include <bits/stdc++.h>
#include <cmath>
#include <string>
using namespace std;

// Function declarations
void printRange1To20() { cout << "1-20" << endl; }
void printRange20To30() { cout << "20-30" << endl; }
void printFactorial5()
{
    int fact = 1;
    for (int i = 1; i <= 5; ++i)
        fact *= i;
    cout << "5! = " << fact << endl;
}
void printMyName() { cout << "My Name" << endl; }
void checkPowerOf2(int n)
{
    if (n > 0 && (n & (n - 1)) == 0)
        cout << n << " is a power of 2" << endl;
    else
        cout << n << " is not a power of 2" << endl;
}
void printFactorial4()
{
    int fact = 1;
    for (int i = 1; i <= 4; ++i)
        fact *= i;
    cout << "4! = " << fact << endl;
}
void checkVowel(char ch)
{
    if (strchr("aeiouAEIOU", ch))
        cout << ch << " is a vowel" << endl;
    else
        cout << ch << " is not a vowel" << endl;
}
void sum1To50()
{
    int sum = 0;
    for (int i = 1; i <= 50; ++i)
        sum += i;
    cout << "Sum of 1 to 50 is " << sum << endl;
}
void swapValues(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
    cout << "Swapped values: " << x << " " << y << endl;
}
bool isPalindrome(int n)
{
    int original = n, reversed = 0;
    while (n > 0)
    {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    return original == reversed;
}

int main()
{
    // 1. Average of 3 inputs
    int a, b, c;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;
    float avg = (a + b + c) / 3.0;
    if (avg > 50)
        printRange20To30();
    else
        printRange1To20();

    // 2. Max of 3 inputs and respective function call
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;
    int max_val = a;
    if (b > max_val)
        max_val = b;
    if (c > max_val)
        max_val = c;

    if (max_val == a)
        printMyName();
    else if (max_val == b)
        printFactorial5();
    else if (max_val == c)
        checkPowerOf2(c);

    // 3. Sum of 4 inputs
    int d;
    cout << "Enter 4 numbers: ";
    cin >> a >> b >> c >> d;
    int sum = a + b + c + d;
    if (sum < 0)
    {
        string str = to_string(abs(b));
        reverse(str.begin(), str.end());
        cout << "Reversed 2nd number: " << str << endl;
    }
    else if (sum > 0)
    {
        printFactorial4();
    }
    else
    {
        cout << "Product of 4 inputs: " << a * b * c * d << endl;
    }

    // 4. Sum of 5 inputs
    cout << "Enter 5 numbers: ";
    cin >> a >> b >> c >> d >> e;
    sum = a + b + c + d + e;
    if (sum > 50)
        sum1To50();
    else if (sum < 50)
    {
        char ch;
        cout << "Enter a character: ";
        cin >> ch;
        checkVowel(ch);
    }
    else
    {
        cout << (sum % 2 == 0 ? "Sum is even" : "Sum is odd") << endl;
    }

    // 5. Single input check
    int input;
    cout << "Enter a number: ";
    cin >> input;
    if (input > 0)
    {
        int x, y;
        cout << "Enter two values to swap: ";
        cin >> x >> y;
        swapValues(x, y);
    }
    else if (input < 0)
    {
        cout << (isPalindrome(abs(input)) ? "Palindrome" : "Not a palindrome") << endl;
    }
    else
    {
        int x;
        cout << "Enter a value to check for power of 2: ";
        cin >> x;
        checkPowerOf2(x);
    }

    return 0;
}
