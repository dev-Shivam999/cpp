#include <bits/stdc++.h>
using namespace std;

void count(vector<int> &fac)
{
    int count = 0;
    for (int i = 0; i < fac.size(); i++)
    {
        if (fac[i] >= 50)
        {
            count++;
            /* code */
        }
    }
    cout << count;
}

void fc(vector<int> &fac, int a)
{
    int count = 0;
    for (int i = 0; i < fac.size(); i++)
    {
        if (fac[i] >= a)
        {
            count++;
        }
    }
    cout << count;
}
void ef(vector<int> &fac)
{
    for (int i = 0; i < fac.size(); i++)
    {
        fac[i] = fac[i] + 2;
    }

    for (auto it : fac)
    {
        cout << it << "\n";
    }
}
void Pav(int &avg)
{
    int c = avg, b, d = 0;
    while (c != 0)
    {
        b = c / 10;

        d++;
    }
    cout << d << "\n";
}

void abs(vector<int> &pice)
{
    int count = 0;
    for (int i = 0; i < pice.size(); i++)
    {
        if (pice[i] >= 2500)
        {
            count++;
            /* code */
        }
    }
    cout << count << "\n";
}

void lp(vector<int> &pice)
{

    for (int i = 0; i < pice.size(); i++)

    {
        if (pice[i] < 1500)
        {

            cout << pice[i] << "\n";
            break;
        }
    }
}

void ls(vector<int> &hight)
{
    vector<int> c = {};
    for (int i = 0; i < hight.size(); i++)
    {
        if (hight[i] > 300)
        {
            c.push_back(hight[i]);
            /* code */
        }

        /* code */
    }
    cout << c[c.size() - 1] << "\n";
}

void evH(vector<int> &hight)
{
    cout << "even" << "\n";
    for (auto it : hight)
    {
        if (it % 2 == 0)
        {
            cout << it << "\n";
            /* code */
        }
    }
    cout << "odd" << "\n";
    for (auto it : hight)
    {
        if (it % 2 != 0)
        {
            cout << it << "\n";
            /* code */
        }
    }
}

void fh(vector<int> &hight)
{
    for (int i = 0; i < hight.size(); i++)
    {
        if (hight[i] > 300)
        {
            cout << hight[i] << "\n";
            break;
            /* code */
        }

        /* code */
    }
}
vector<int> Ssq(vector<int> &sale)
{

    for (int i = 0; i < sale.size(); i++)

    {
        sale[i] = sale[i] * sale[i];
        /* code */
    }
    return sale;
}

void odS(vector<int> &sale)
{
    int count = 0;
    for (int i = 0; i < sale.size(); i++)
    {
        if (sale[i] % 2 != 0)
        {
            count++;
            /* code */
        }

        /* code */
    }
    cout << count << endl;
}

void spS(vector<int> &sale)
{

    for (int i = 0; i < sale.size(); i++)
    {
        if (sale[i] >= 200)
        {
            cout << sale[i] << endl;
        }
    }
}

void sCOUNT(vector<int> &sizes)
{
    int count = 0;
    for (auto it : sizes)
    {
        if (it > 7)
        {
            count++;
            /* code */
        }
    }
    cout << count << endl;
}

void dif(vector<int> &sizes)
{
    int min = sizes[0], max = sizes[0];
    for (int i = 0; i < sizes.size(); i++)
    {
        if (min < sizes[i])
        {
            min = sizes[i];
            /* code */
        }
        if (max > sizes[i])
        {
            max = sizes[i];
            /* code */
        }
    }
    cout << min - max << endl;
}

void sLess(vector<int> &sizes)
{
    for (int i = 0; i < sizes.size(); i++)
    {
        if (sizes[i] < 3)

        {
            cout << sizes[i] << endl;
            break;
            /* code */
        }
    }
}

void PN(vector<int> &Length)
{
    vector<int> pos, nev;
    for (auto l : Length)
    {
        if (l > 0)
        {
            pos.push_back(l);
            /* code */
        }
        else
        {
            nev.push_back(l);
        }
    }
    cout << "negative";
    for (auto l : nev)
    {
        cout << l << "\n";
    }
    cout << "positive";
    for (auto l : pos)
    {
        cout << l << "\n";
    }
}

void Sl(vector<int> &Length)
{

    for (int i = Length.size(); i > 0; i--)
    {
        if (Length[i] == 10)
        {
            cout << Length[i] << "\n";
            break;
            /* code */
        }
    }
}
void LL(vector<int> &Length)
{

    for (int i = 0; i < Length.size(); i++)
    {
        if (Length[i] == 10)
        {
            cout << Length[i] << "\n";
            break;
            /* code */
        }
    }
}

vector<int> m2(vector<int> &Brand)
{
    for (int i = 0; i < Brand.size(); i++)
    {
        Brand[i] = 2 * Brand[i];
        /* code */
    }
    return Brand;
}

void Se(vector<int> &Brand)
{
    for (int i = 0; i < Brand.size(); i++)
    {
        if (Brand[i] % 2 == 0)
        {
            cout << Brand[i];
            /* code */
        }

        /* code */
    }
}

void Fe(vector<int> &Brand)
{

    int count = 0;
    for (int i = 0; i < Brand.size(); i++)
    {
        if (Brand[i] % 2 == 0)
        {
            count++;
            /* code */
        }

        /* code */
    }
    cout << count << "\n";
}

void c5(vector<int> &stare)
{
    int count = 0;
    for (int i = 0; i < stare.size(); i++)
    {
        if (stare[i] = > 5)
        {
            count++;
        }
        /* code */
    }
    cout << count << "\n";
}

void l5(vector<int> &stare)
{
    for (int i = 0; i < stare.size(); i++)
    {
        if (stare[i] < 3)
        {
            cout << stare[i] << "\n";
            break;
        }
        /* code */
    }
    cout << count << "\n";
}

void s5(vector<int> &stare)
{
    int sum = 0;
    for (auto i : stare)
    {
        sum += i;
    }
    cout << sum << "\n";
}

void ppLast(vector<int> &item)
{
    vector<int> last = {};
    for (int i = 0; i < item.size(); i++)
    {
        if (item[i] == 5)
        {
            last.push_back(item[i]);
            /* code */
        }

        /* code */
    }

    cout << last[last.size()] << "\n";
}

void prime(vector<int> &item)
{
    int prim = 0, notP = 0;
    bool ifPrime;

    for (int i = 0; i < item.size(); i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                ifPrime = true;
                break;

                /* code */
            }

            /* code */
        }
        if (isPrime)
        {
            prim++;
            /* code */
        }
        else
        {
            notP++;
        }
    }

    cout << "prim = " << prim << "not prime" << notP << endl;
}

void pl(vector<int> &item)
{
    for (int i = 0; i < item.size(); i++)
    {
        if (item[i] == 4)
        {
            cout << item[4];
            break;
            /* code */
        }
    }
}

void sd(vector<int> &dis)
{
    for (int i = 0; i < dis.size(); i++)
    {
        dis[i] = dis[i] * dis[i];
        /* code */
    }

    for (int i = 0; i < dis.size(); i++)
    {
        cout << dis[i] << endl;
    }
}

void dc(vector<int> &dis)
{

    int sum = 0;
    for (auto i : dis)
    {
        sum += i;
    }
    for (int i = 0; i < dis.size(); i++)
    {
        if (dis[i] > (dis[i] / 100) * 20)
        {
            cout << dis[i] << endl;
            /* code */
        }
    }
}

void fd(vector<int> &dis)
{
    int count = 0;
    for (int i = 0; i < dis.size(); i++)
    {
        if (dis[i] > 2000)
        {
            count++;
            /* code */
        }

        /* code */
    }

    cout << count << endl;
}

int main()
{

    // 30

    vector<int> fac = {01,
                       20,
                       21,
                       22,
                       23,
                       24,
                       25,
                       26,
                       01,
                       20,
                       21,
                       22,
                       23,
                       24,
                       25,
                       26,
                       84,
                       50,
                       34,
                       23};

    int sum = 0;

    for (auto it : fac)
    {
        sum += it;
    }
    if (sum < 400)
    {
        fc(fac, 20);
    }
    else if (sum == 400)
    {
        ef(fac);
    }
    else
    {
        count(fac);
    }

    // 29

    vector<int> pice = {01,
                        20,
                        21,
                        22,
                        23,
                        24,
                        25,
                        26,
                        01,
                        20,
                        21,
                        22,
                        23,
                        24,
                        25,
                        26,
                        84,
                        50,
                        34,
                        23};
    int sumPice = 0;

    for (auto it : pice)
    {
        sumPice += it;
    }
    int avg = sumPice / 20;

    if (avg == 2000)
    {
        Pav(avg);
    }
    else if (avg > 2000)
    {
        abs(pice);
    }
    else
    {
        lp(pice);
    }

    // 28

    vector<int> hight = {200, 53, 34, 23, 34, 234, 234, 234, 234, 234, 234, 23};
    int hSum = 0;
    for (auto it : hight)
    {
        hSum += it;
    }
    if (hSum == 7000)
    {
        ls(hight);
    }
    else if (hSum > 7000)
    {
        evH(hight);
    }
    else
    {
        fh(hight);
    }

    // 27

    vector<int> sale = {3214, 111, 323, 12, 32, 3423};
    int sSum = 0;
    for (auto it : sale)
    {

        sSum += it;
    }
    if (sSum == 9000)
    {
        vector<int> arr = Ssq(sale);
        for (auto it : arr)
        {
            cout << it << endl;
        }
    }
    else if (sSum > 9000)
    {
        odS(sale);
    }
    else
    {
        spS(sale);
    }

    // 26

    vector<int> red = { 12,
                        12,
                        1,
                        21,
                        2,
                        1,
                        21,
                        2,
                        1,
                        21,
                        2,
                        12,
                        1,
                        21,
                        2,
                        1,
                        2,
                        1,
                        2,
                        1 } int redSum = 0;
    for (auto it : red)
    {
        redSum += it;
    }
    int redAvg = redSum / (red.size() - 1);

    if (redAvg == 25)
    {
        int c = redSum, count = 0;
        while (c != 0)
        {
            c = c / 10;
            count++;
        }
        cout << count << "\n";
        /* code */
    }
    else if (redAvg > 25)
    {
        for (int i = 0; i < red.size(); i++)
        {
            if (red[i] > 50)
            {
                cout << red[i] << " \n";
                /* code */
            }

            /* code */
        }
    }
    else
    {
        for (int i = 0; i < red.size(); i++)
        {
            if (red[i] < 10)
            {
                cout << red[i] << " \n";
                break;
            }
            /* code */
        }
    }

    // 25

    vector<int> week = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35};
    int sold = 1000;

    if (sold == 6000)
    {
        cout << 35;
    }
    else if (sold > 6000)
    {
        cout << "5x";
        for (int i = 0; i < week.size(); i++)
        {
            if (week[i] % 5 == 0)
            {
                cout << week[i] << endl;
                /* code */
            }

            /* code */
        }
        cout << "not 5x";
        for (int i = 0; i < week.size(); i++)
        {
            if (week[i] % 5 != 0)
            {
                cout << week[i] << endl;
                /* code */
            }

            /* code */
        }
        /* code */
    }
    else
    {
        cout << 1;
    }

    // 24

    int widthSum = 0;
    for (int width : widths)
    {
        WidthSum += width;
    }

    if (widthSum > 10000)
    {
        int count = 0;
        for (int width : widths)
        {
            bool isPrime = true;
            for (int i = 2; i * i <= width; i++)
            {
                if (width % i == 0)
                {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime)
            {
                count++;
            }
        }
        cout << "Number of prime widths: " << count << endl;
    }
    else if (sum < 10000)
    {
        int specificWidth = /* specify the width to search for */;
        int count = 0;
        for (int width : widths)
        {
            if (width == specificWidth)
            {
                count++;
            }
        }
        cout << "Number of occurrences of width " << specificWidth << ": " << count;
        else
        {
            vector<int> incrementedWidths;
            for (int width : widths)
            {
                incrementedWidths.push_back(width + 5);
            }
            cout << "Incremented widths: ";
            for (int width : incrementedWidths)
            {
                cout << width << " ";
            }
            cout << endl;
        }
    }

    // 23

    vector<int> sizes = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int MSum = 0;
    for (auto it : sizes)
    {
        MSum += it;
    }
    MSum /= sizes.size();
    if (MSum > 5)
    {
        sCOUNT(sizes);
        /* code */
    }
    else if (MSum == 5)
    {
        dif(sizes);
    }
    else
    {
        sLess(sizes);
    }

    // 22

    vector<int> Length = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int p = 1;
    for (auto it : Length)
    {
        p *= it;
    }

    if (p > 15000)
    {
        PN(Length);
    }
    else if (p == 15000)
    {
        Sl(Length);
    }
    else
    {
        LL(Length);
    }

    // 21

    vector<int> Brand = {12, 1, 2, 122, 21, 1212, 1212, 12, 112, 121, 21, 21, 21, 12};
    int SB = 0;
    for (auto it : Brand)
    {
        SB += it;
    }
    if (SB == 8000)
    {
        vector<int> ac = m2(Brand);
        for (auto i : Brand)
        {
            cout << i << endl;
        }
    }
    else if (SB > 8000)
    {
        Se(Brand);
    }
    else
    {
        Fe(Brand)
    }

    // 20

    vector<int> stare = {1, 2, 1, 3, 2, 5, 4, 2, 5, 3, 5, 4, 3, 4, 2, 3};

    int StCount = 0;
    for (auto i : stare)
    {
        StCount += i;
    }
    StCount /= stare.size();

    if (StCount > 3)
    {
        c5(StCount);
        /* code */
    }
    else if (StCount == 3)
    {
        s5(StCount);
    }
    else
    {

        l5(StCount);
    }

    // 19

    vector<int> item = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8};
    int pp = 1;
    for (auto i : item)
    {
        p *= i;
    }
    if (pp == 30)
    {
        ppLast(item);
        /* code */
    }
    else if (pp > 30)
    {
        prime(item);
    }
    else
    {
        pl(item);
    }

    // 18

    vector<int> dis = {12, 323, 1232, 1232, 1232, 1232, 3242, 22, 23, 23};
    int Ds = 0;
    for (auto i : dis)
    {
        Ds += i;
    }
    if (Ds == 5000)
    {
        sd(dis);
        /* code */
    }
    else if (ds > 5000)
    {
        dc(dis);
    }
    else
    {
        fd(dis);
    }

    // 17
    

    return 0;
}