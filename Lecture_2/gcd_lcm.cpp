#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    //Minimum=> min(a,b)
    //Maximum=> max(a,b)

    // int range=min(a,b);
    
    // int gcd=1;
    // for(int i=1;i<=range;i++){
    //     if(a%i==0 && b%i==0){
    //         gcd=i;
    //     }
    // }

    //__gcd => gcd --> inbuilt function to find gcd

    // gcd*lcm=a*b -->basic formula to find lcm

    int optimal=__gcd(a,b);
    int lcm=(a*b)/optimal;
    cout<<lcm<<"\n";

    return 0;
}