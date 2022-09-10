#include <iostream>
using  namespace std;
//compare two numbers
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    // cout<<a<<" "<<b<<"\n";

    /* Realational operators
    >  - greater than
    <  - less than
    <= - less than equal to 
    >= - greater than equal to
    == - equal
    != - not equal to

    Logical operators
    &&-> And
    || -> OR
    ! -> NOT
    */
   
    //nested if else
    if(a>b){
        cout<<"Yes";
    }
    else if(a==b){
        cout<<"Equal";
    }
    else{
        cout<<"No";
    }

    //?: => Ternary operator
    // (a==5)?cout<<"YES":cout<<"NO";
    // return 0;
}