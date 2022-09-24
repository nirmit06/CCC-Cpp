#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // int sz=s.length(); <= returns the size of the string

    // Checking palindrome using inbuilt function
    /*
        string s;
        cin>>s;

        string temp=s;

        reverse(temp.begin(),temp.end());

        if(temp==s){
            cout<<"Palindrome"<<"\n";
        }
        else{
            cout<<"Not Palindrome"<<"\n";
            }
    */

    // Two pointer approach
    int i = 0;//first index
    int j = s.length() - 1;// last index

    bool flag = true;

    while (i < j)//Using while loop as we have to iterate from front and back simultaneously
    {
        if (s[i] == s[j])//if both the front value and back value matches we increment i and decrement j
        {
            i++;
            j--;
        }
        else
        {
            flag = false;// we found a pair which is not matching...This means that the string is not palindrome and there is no point of checking further...At this point we change the value of our flag and exit the loop
            break;
        }
    }

    if (flag == true)//Printing based on the value of the flag
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }

    return 0;
}