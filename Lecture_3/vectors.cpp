#include<bits/stdc++.h>

using namespace std;

int main(){
    // int arr[4];

    vector<int> v;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // v.pop_back();
    // sort(v.rbegin(),v.rend());

    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }

    int front=v.front();
    int last=v.back();

    cout<<front<<" "<<last<<"\n";












    return 0;
}