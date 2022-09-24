#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    bool flag = true; // This comes in handy when we have to check for every iteration and at some point we know that checking further won't be of any use and we store the outcome and exit the loop

    for (int i = 2; i < num; i++)// range lies from 2 to num-1 as we know what makes prime number distinct is that we don't have any other divisor except 1 and the number itself
    {
        if (num % i == 0)
        {
            flag = false; // As we know prime numbers have only 2 divisors...1 and the number itself...So if this iteration gives num%i==0 that means there is a third divisor because of which we don't have any need of checking furthur..So we change our flags value and exit the loop
            break;
        }
    }

    if (flag == true)// Printing the value based on the value of flag
    {
        cout << "Prime";
    }
    else
    {
        cout << "Not prime";
    }

    return 0;
}