#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int arraytonumber(int arr[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        res+=pow(2,n-i-1)*arr[i];
        // cout<<res<<'\n';
    }
    return res;
}

int numbertoarray(int arr[],int n,int a){
    for(int i=0;i<n;i++){
        arr[i]=a/pow(2,n-i-1);
        a=int(a)%int(pow(2,n-i-1));
    }
} 

int main()
{
    int n,alloneflag=1,allzeroflag=1,firstoneflag=1;
    cin>>n;
    int given[n];
    string givenstr;
    cin>>givenstr;
    // firstoneflag=int(givenstr[0])-48;
    for(int i=0;i<n;i++){
        given[i]=int(givenstr[i])-48;
        // cout<<given[i];
        if(given[i]==0){
            alloneflag=0;
        }
        if(given[i]==1 && i!=0){
            allzeroflag=0;
        }
    }
    if(alloneflag==1){
        cout<<-1;
    }
    else if(allzeroflag==1 && firstoneflag==1){
        cout<<"-1";
    }
    else if(allzeroflag==1 && firstoneflag==0){
        for(int i=0;i<n;i++){
            cout<<'0';
        }
        cout<<' ';
        for(int i=0;i<n;i++){
            cout<<'0';
        }
    }
    else
    {
        int givenno=arraytonumber(given,n);
        // cout<<given[0]<<given[1]<<given[2]<<given[3]<<givenno<<'\n';
        int arr1[n],arr2[n];
        numbertoarray(arr1,n,givenno-1);
        numbertoarray(arr2,n,givenno+1);
        for(int i=0;i<n;i++){
            cout<<arr1[i];
        }
        cout<<' ';
        for(int i=0;i<n;i++){
            cout<<arr2[i];
        }
    }
    return 0;
}
