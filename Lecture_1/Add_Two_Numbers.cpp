//https://www.codechef.com/submit/FLOW001 <= Question link
#include <bits/stdc++.h> // <= this header file is used instead of iostream as it contains all the header because of which don't have to add multiple header files for using diffenent inbuilt functions
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t>0){ // <= This helps to handle testcases i.e. it specifies how many times will our code run
    int a;
    cin>>a;
    int b;
    cin>>b;

    cout<<a+b<<"\n";
    t--;
    }
    return 0;
}

/* Standard template for solving questions:

#include <bits/stdc++.h> 
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t>0){ 


    t--;
    }
    return 0;
}

*/