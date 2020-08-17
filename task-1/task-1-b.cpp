#include <bits/stdc++.h>
#include <iostream>

using namespace std;


int main()
{
    string given;
    cin>>given;
    int len=given.length();
    int n=log2(len);
    int ans=0;
    while(n!=0){
        if(given.substr(0,pow(2,n-1))==given.substr(pow(2,n-1),pow(2,n-1)))
        {
            ans++;
            n--;
        }
        else{
            break;
        }
    }
    cout<<ans;
    return 0;
}