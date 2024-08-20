#include <bits/stdc++.h>
#include <string.h>
using namespace std;

void one()
{
    int a;
    cout << "Enter the number : ";
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        cout << " " << i << " " << endl;
    }
}

void two()
{
    int a;
    cout << "Enter the number : ";
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        if (i % 2 == 0)
        {
            cout << " " << i << " " << endl;
        }
    }
}

void three()
{
    int a;
    cout << "Enter the number : ";
    cin >> a;
    for (int i = 1; i <= 10; i++)
    {

        cout << i << "*" << a << " " << "=" << " " << i * a << " " << endl;
    }
}

void four()
{
    int a = 1, n;
    cout << "Enter the number : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        a *= i;
    }
    cout << "factorial : " << a << endl;
}

void five()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "array sum : " << sum << endl;
}

void six()
{
    int i = 1;
    while (i <= 100)
    {
        cout << "i = " << i << endl;
        i++;
    }
}

void seven()
{

    int num = 123;

    int rem, sum = 0;
    while (num != 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }

    cout << "sum = " << sum << endl;
}

void Eight()
{

    int one = 0, second = 1, num, i = 0, sum;
    cout << " ENTER THE NUMBER : ";
    cin >> num;
    cout << " " << one << " " << " " << second << " ";

    while (i < num)
    {
        sum = one + second;
        cout << " " << sum << " ";
        one = second;
        second = sum;
        i++;
    }
}

void nine()
{

    int num = 23, rem, sum = 0;

    while (num != 0)
    {
        rem = num % 10;
        sum = sum * 10 + rem;
        num = num / 10;
    }
    cout << sum;
}

void ten()
{
    int value = 1021;
    int num = value, rem, sum = 0;

    while (value != 0)
    {
        rem = value % 10;
        sum = sum * 10 + rem;
        value = value / 10;
    }
    if (sum == num)
    {
        cout << "palindrome : " << sum << endl;
        /* code */
    }
    else
    {
        cout << "palindrome not ";
    }
}

void eleven()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << i * j << endl;
        }
        cout << endl;
    }
}

void twelve()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void thirteen()
{
    int count = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

void fourteen()
{

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}

void fifteen()
{
    int i = 0;
    while (i <= 100)
    {
        cout << i << " ";
    }
}

void sixteen()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void seventeen()
{
    int num = 4, m = 1;
    for (int i = 1; i <= num; i++)
    {
        m *= i;
        /* code */
    }
    cout << m;
}

void eighteen()
{
    int num = 30;
    bool isPrime = true;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
    {
        cout << "Prime";
        /* code */
    }
    else
    {
        cout << "Prime not ";
    }
}

void swap(int &i, int &j)
{
    cout << "befor swap : i =" << i << " j =  " << j << endl;

    int temp;
    temp = i;
    i = j;
    j = temp;
    cout << "after swap : i = " << i << " j = " << j << endl;
}

void twenty(int &i, int &j, int &k)
{
    if (i > j && i > k)
    {
        cout << i;
        /* code */
    }
    else if (j > i && j > k)
    {
        cout << j;
    }
    else if (k > i && k > j)
    {
        cout << k;
    }
    else
    {
        cout << "all equal";
    }
}

void twentyOne()
{
    string st = "exe3";
    reverse(st.begin(), st.end());
    cout << st << endl;
}

int twentyTwo(int number, int power)
{
    if (power == 1)
    {
        return number;
    }
    int p;

    p = twentyTwo(number, int(power - 1));

    return p * number;
}

void twentyThree()
{

    vector<int> arr = {1, 2, 4, 2, 5, 3, 9};
    int min = INT_MAX, max = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << min << " " << max << endl;
}

void twentyFour()
{
    vector<int> arr = {1, 2, 3, 6, 5, 2, 8};
    vector<int> rev = {};
    for (int i = arr.size(); i > 0; i--)
    {
        rev.push_back(arr[i]);
        /* code */
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << rev[i] << endl;
    }
}

void twentyFive()
{
    vector<int> arr = {1, 2, 3, 7, 4, 3, 4, 3, 4};
    int sum = 0;
    for (auto i : arr)
    {
        sum += i;
    }
    sum = sum / arr.size();
    cout << sum << endl;
}

void twentySix()
{
    vector<int> arr = {1, 2, 3, 6, 8, 2, 3, 7};
    vector<int> arr2 = {-2, -3, -4, -5, -2, -3, -7};
    vector<int> arr3 = {};
    int i = 0, j = 0, k = 0;

    while (i < arr.size() && j < arr2.size())
    {
        arr3[k++] = arr2[j++];
        arr3[k++] = arr[i++];
    }

    cout << i;
    while (i < arr.size())
    {

        arr3[k] = arr[i];

        i++;
    }
    while (j < arr2.size())
    {

        arr3[k] = arr2[j];
        j++;
    }

    for (auto i : arr3)
    {
        cout << i;
    }
}

int main()
{

    // 1
    // one();

    // 2
    // two();

    // 3
    // three();

    // 4
    // four();

    // 5
    // five();

    // 6
    // six();

    // 7
    // seven();

    // 8
    // Eight();

    // 9
    // nine();

    // 10
    // ten();

    // 11
    // eleven();

    // 12
    // twelve();

    // 13
    // thirteen() ;

    //   14
    // fourteen() ;

    // 15
    // fifteen();

    // 16
    // sixteen();

    // 17
    // seventeen();

    // 18
    // eighteen();

    // 19
    // int a=2,b=4,c=20;
    // swap(a,b);

    // 20

    // twenty(a,b,c);

    // 21
    // twentyOne();

    // 22
    // int number = 2, power = 3,r;
    // r=twentyTwo(number, power);
    // cout<<r;

    // 23
    // twentyThree();

    // 24
    // twentyFour();

    // 25
    // twentyFive();

    // 26
    twentySix();

    return 0;
}