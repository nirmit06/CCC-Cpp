#include <bits/stdc++.h>
using namespace std;
// void=> we don't need to return anything.We use this when we just need to make changes to arrays or variables
// int=>  We need to return some data which is of type int

void s(int &a, int &b)
{ // Used '&' before variable name as we are directly referring to the address in order to make changes to the variable which are present in the main function
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b;
    cin >> a >> b;

    //We need to mention all the required parameters 
    s(a, b); // calling the function
    

    cout << a << " " << b << "\n";

    return 0;
}

//If still not clear about the concept of call by value and call by reference...Google it ! Enough resources are available !