#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    // int mx=INT_MIN;

    // cout<<mx<<" ";

    // for(int i=0;i<n;i++){
    //     int count=0;
    //     for(int j=0;j<n;j++){
    //         if(v[i]==v[j]){
    //             count++;
    //         }
    //     }
    //     mx=max(mx,count);
    // }

    // cout<<mx<<" ";

    // 1-2
    // 3-3
    // 4-1
    // 5-1

    map<int,int> mp;

    //for each
    for(auto it:v){
        mp[it]++;
    }

    //printing values of map
    int mx=INT_MIN;
    for(auto it:mp){
        // cout<<it.first<<" "<<it.second<<"\n";
        mx=max(mx,it.second);
    }

    cout<<mx<<" ";





    








    return 0;
}