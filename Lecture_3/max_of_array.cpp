#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> v(n); //Initialization of a vector of size n

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int mx=INT_MIN;//Initializing mx with minimum possible value of interger datatype

    for(auto it:v){
        mx=max(mx,it);//We compare between current mx value and the value we are checking
    }

    cout<<mx<<"\n";
    return 0;
}