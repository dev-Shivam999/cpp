#include <bits/stdc++.h>
#include <cctype>

using namespace std;

// Function declarations
void A() { cout << "A is printed" << endl; }
void B() { cout << "B is printed" << endl; }
void C() { cout << "C is printed" << endl; }
void D() { cout << "D is printed" << endl; }

string getAgeGroup(int age)
{
    if (age >= 0 && age <= 5)
        return "child";
    else if (age >= 6 && age <= 12)
        return "young age";
    else if (age >= 13 && age <= 19)
        return "teenage";
    else if (age >= 20 && age <= 50)
        return "middle age";
    else if (age > 51)
        return "senior citizen";
    else
        return "Invalid age";
}

void checkInput(char input)
{
    if (strchr("aeiouAEIOU", input))
        A();
    else if (isdigit(input) && input >= '0' && input <= '5')
        C();
    else if (isalpha(input))
        B();
    else if (strchr("#$%^&*()!>:<", input))
        D();
}

void sumEvenOdd()
{
    int num1, num2, num3;
    cout << "Enter 3 numbers: ";
    cin >> num1 >> num2 >> num3;
    int sum = num1 + num2 + num3;
    cout << (sum % 2 == 0 ? "Even" : "Odd") << endl;
}

void productEvenOdd()
{
    int num1, num2, num3, num4;
    cout << "Enter 4 numbers: ";
    cin >> num1 >> num2 >> num3 >> num4;
    int product = num1 * num2 * num3 * num4;
    if (product % 2 == 0)
        A();
    else
        B();
}

void sumCalculation()
{
    int num1, num2, num3;
    cout << "Enter 3 numbers: ";
    cin >> num1 >> num2 >> num3;
    int sum = num1 + num2 + num3;
    if (sum % 2 == 0)
    {
        cout << "Max number is: " << max({num1, num2, num3}) << endl;
    }
    else
    {
        cout << "Product is: " << num1 * num2 * num3 << endl;
    }
}

int main()
{
    char input;
    cout << "Enter a character: ";
    cin >> input;
    checkInput(input);

    int age;
    cout << "Enter age: ";
    cin >> age;
    cout << "Age group: " << getAgeGroup(age) << endl;

    int number;
    cout << "Enter a number (1-3): ";
    cin >> number;
    if (number == 1)
        A();
    else if (number == 2)
        B();
    else if (number == 3)
        C();

    sumEvenOdd();
    productEvenOdd();
    sumCalculation();

    return 0;
}
