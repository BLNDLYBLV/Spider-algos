#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int n,r,x,y,val;
    cin>>n>>r>>x>>y;
    val=r;
    int comp[n],nood[n];
    for(int i=0;i<n;i++){
        cin>>comp[i];
    }
    for(int i=0;i<n;i++){
        cin>>nood[i];
        if(nood[i]==1 && comp[i]==1){
            val+=x;
        }
        else if(comp[i]==1 && nood[i]==0){
            val-=y;
        }
    }
    if(val>r){
        cout<<"Promoted";
    }   
    else if(val<r){
        cout<<"demoted";
    }
    else{
        cout<<"no change";
    }
   return 0;
}
