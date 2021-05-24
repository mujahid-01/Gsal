#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double salary;
        cin >> salary;
        double total;
        if (salary < 1500)
        {
            total = salary * 0.1 + salary * .9 + salary;
            printf("%.2f\n", total);
        }
        else if (salary >= 1500)
        {
            total = salary * 0.98 + 500 + salary;
            printf("%.2f\n", total);
        }
    }
    return 0;
}
