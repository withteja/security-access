#include<bits/stdc++.h>
using namespace std;
int b[100+1][100+1];
int main (){
    vector<pair<int,int>>a;
    int n,m;
    cin>>n>>m;
    for(int i =0;i<m;i++){
        int a1,b;
        cin>>a1>>b;
        a.push_back(make_pair(a1,b));
    }
    
    for(int i =0;i<n;i++){
        b[a[i].first][a[i].second]=1;
        b[a[i].second][a[i].first]=1;
        }
//    for(auto& rows:b){
//        for(auto& ele :rows)cout<<ele;
//    }
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<b[i][j]<<" ";
        }cout<<endl;}
    for(int  i =0;i<=m+1;i++){
     vector<int>max
        ;
        if(a[i][j]==1&&)
    }
    return 0;
    }


