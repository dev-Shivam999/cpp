#include<bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int num, year, angle1, angle2, angle3, age, quantity, creditScore;
    char ch;
    string str;
    double percentage, score, salary, timeOfDay;

    // 1. Determine whether a number is even or odd
    cout << "Enter a number: ";
    cin >> num;
    if (num % 2 == 0)
        cout << "The number is even." << endl;
    else
        cout << "The number is odd." << endl;

    // 2. Determine a student's grade based on their percentage
    cout << "Enter a student's percentage: ";
    cin >> percentage;
    if (percentage >= 90)
        cout << "The student's grade is A." << endl;
    else if (percentage >= 80)
        cout << "The student's grade is B." << endl;
    else if (percentage >= 70)
        cout << "The student's grade is C." << endl;
    else if (percentage >= 60)
        cout << "The student's grade is D." << endl;
    else
        cout << "The student's grade is F." << endl;

    // 3. Determine whether a year is a leap year
    cout << "Enter a year: ";
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        cout << "The year is a leap year." << endl;
    else
        cout << "The year is not a leap year." << endl;

    // 4. Determine the type of triangle based on its angles
    cout << "Enter three angles: ";
    cin >> angle1 >> angle2 >> angle3;
    if (angle1 == 90 || angle2 == 90 || angle3 == 90)
        cout << "The triangle is right-angled." << endl;
    else if (angle1 > 90 || angle2 > 90 || angle3 > 90)
        cout << "The triangle is obtuse." << endl;
    else
        cout << "The triangle is acute." << endl;

    // 5. Determine whether a number is positive, negative, or zero
    cout << "Enter a number: ";
    cin >> num;
    if (num > 0)
        cout << "The number is positive." << endl;
    else if (num < 0)
        cout << "The number is negative." << endl;
    else
        cout << "The number is zero." << endl;

    // 6. Find the largest of three numbers
    cout << "Enter three numbers: ";
    cin >> num >> year >> age;
    if (num >= year && num >= age)
        cout << "The largest number is " << num << "." << endl;
    else if (year >= num && year >= age)
        cout << "The largest number is " << year << "." << endl;
    else
        cout << "The largest number is " << age << "." << endl;

    // 7. Determine whether a character is a vowel or consonant
    cout << "Enter a character: ";
    cin >> ch;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        cout << "The character is a vowel." << endl;
    else
        cout << "The character is a consonant." << endl;

    // 8. Determine a person's age group
    cout << "Enter a person's age: ";
    cin >> age;
    if (age < 12)
        cout << "The person is a child." << endl;
    else if (age < 20)
        cout << "The person is a teenager." << endl;
    else if (age < 60)
        cout << "The person is an adult." << endl;
    else
        cout << "The person is a senior." << endl;

    // 9. Determine whether a string is a palindrome
    cout << "Enter a string: ";
    cin >> str;
    string revStr = str;
    reverse(revStr.begin(), revStr.end());
    if (str == revStr)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    // 10. Determine the ticket price for a movie
    cout << "Enter a person's age and time of day (morning, afternoon, evening): ";
    cin >> age >> timeOfDay;
    if (age < 12 || age > 60)
        cout << "The ticket price is $5." << endl;
    else if (timeOfDay == "morning")
        cout << "The ticket price is $7." << endl;
    else
        cout << "The ticket price is $10." << endl;

    // 11. Determine the category of a character
    cout << "Enter a character: ";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
        cout << "The character is an uppercase letter." << endl;
    else if (ch >= 'a' && ch <= 'z')
        cout << "The character is a lowercase letter." << endl;
    else if (ch >= '0' && ch <= '9')
        cout << "The character is a digit." << endl;
    else
        cout << "The character is a special character." << endl;

    // 12. Determine the total cost of books after applying discounts
    cout << "Enter the quantity of books: ";
    cin >> quantity;
    if (quantity >= 5 && quantity <= 10)
        cout << "The total cost is $" << quantity * 10 * 0.9 << "." << endl;
    else if (quantity > 10)
        cout << "The total cost is $" << quantity * 10 * 0.8 << "." << endl;
    else
        cout << "The total cost is $" << quantity * 10 << "." << endl;

    // 13. Determine the total tax after applying discounts based on income
    cout << "Enter a person's salary: ";
    cin >> salary;
    if (salary < 20000)
        cout << "The total tax is $" << salary * 0.1 << "." << endl;
    else if (salary < 50000)
        cout << "The total tax is $" << salary * 0.2 << "." << endl;
    else
        cout << "The total tax is $" << salary * 0.3 << "." << endl;

    // 14. Determine whether a number is positive or negative
    cout << "Enter a number: ";
    cin >> num;
    if (num > 0)
        cout << "The number is positive." << endl;
    else if (num < 0)
        cout << "The number is negative." << endl;
    else
        cout << "The number is zero." << endl;

    // 15. Determine whether a number is a power of two
    cout << "Enter a number: ";
    cin >> num;
    if ((num != 0) && ((num & (num - 1)) == 0))
        cout << "The number is a power of two." << endl;
    else
        cout << "The number is not a power of two." << endl;

    // 16. Determine a person's category based on their age
    cout << "Enter a person's age: ";
    cin >> age;
    if (age < 12)
        cout << "The person is a Child." << endl;
    else if (age < 20)
        cout << "The person is a Teenager." << endl;
    else if (age < 60)
        cout << "The person is an Adult." << endl;
    else
        cout << "The person is a Senior." << endl;

    // 17. Determine whether a score is valid and whether the student passed or failed
    cout << "Enter a student's score: ";
    cin >> score;
    if (score >= 0 && score <= 100)
    {
        if (score >= 50)
            cout << "The score is valid and the student passed." << endl;
        else
            cout << "The score is valid and the student failed." << endl;
    }
    else
        cout << "The score is not valid." << endl;

    // 18. Determine whether a number is divisible by both 3 and 5
    cout << "Enter a number: ";
    cin >> num;
    if (num % 3 == 0 && num % 5 == 0)
        cout << "The number is divisible by both 3 and 5." << endl;
    else
        cout << "The number is not divisible by both 3 and 5." << endl;

    // 19. Determine the total cost of books after applying discounts
    cout << "Enter the quantity of books: ";
    cin >> quantity;
    if (quantity >= 5 && quantity <= 10)
        cout << "The total cost is $" << quantity * 10 * 0.9 << "." << endl;
    else if (quantity > 10)
    cout << "The total cost is $" << quantity;

    int creditScore;
    cout << "Enter a credit score: ";
    cin >> creditScore;
    if (creditScore >= 750)
        cout << "The credit score category is Excellent." << endl;
    else if (creditScore >= 650)
        cout << "The credit score category is Good." << endl;
    else if (creditScore >= 550)
        cout << "The credit score category is Fair." << endl;
    else
        cout << "The credit score category is Poor." << endl;

    int math, science, english;
    cout << "Enter a student's grades (math, science, english): ";
    cin >> math >> science >> english;
    if (math >= 80 && science >= 80 && english >= 80)
        cout << "The student is eligible for a scholarship." << endl;
    else
        cout << "The student is not eligible for a scholarship." << endl;

    string day;
    cout << "Enter a day of the week: ";
    cin >> day;
    if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
        cout << "The day is a Weekday." << endl;
    else
        cout << "The day is a Weekend." << endl;

        
    return 0;
}