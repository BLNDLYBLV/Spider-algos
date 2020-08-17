#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int factorise(int ab,int arr[2])
{
    int x[]={43,16,10,9,8,7};
    int a=0,b=0;
    for(int i=0;i<6;i++)
    {
        if(a==0)
        {
            if(ab%x[i]==0)
            {
                a=x[i];
                b=ab/x[i];
                break;
            }
        }
    }
    arr[0]=a;
    arr[1]=b;
    
}

int main()
{
    int a[]={43,16,10,9,8,7};
    int response,arr1[2],arr2[2],arr3[2],arr4[2];
    int n1,n2,n3,n4,n5,n6;
    // cout<<a[0]<<a[1]<<a[2]<<a[3];
    cout<<0<<' '<<2<<'\n';
    fflush(stdout);
    cin>>response;
    factorise(response,arr1);
    cout<<1<<' '<<3<<'\n';
    fflush(stdout);
    cin>>response;
    factorise(response,arr2);
    cout<<0<<' '<<5<<'\n';
    fflush(stdout);
    cin>>response;
    factorise(response,arr3);
    cout<<1<<' '<<5<<'\n';
    fflush(stdout);
    cin>>response;
    factorise(response,arr4);
    if(arr4[0]==arr3[0]){
        n6=arr4[0];
        n2=arr4[1];
        n1=arr3[1];
    }
    else if(arr4[0]==arr3[1]){
        n6=arr4[0];
        n2=arr4[1];
        n1=arr3[0];
    }
    else if(arr4[1]==arr3[1]){
        n6=arr4[1];
        n2=arr4[0];
        n1=arr3[0];
    }
    else{
        n6=arr4[1];
        n2=arr4[0];
        n1=arr3[1];
    }
    if(arr1[0]==n1){
        n3=arr1[1];
    }
    else{
        n3=arr1[0];
    }
    if(arr2[0]==n2){
        n4=arr2[1];
    }
    else{
        n4=arr2[0];
    }
    for(int i=0;i<6;i++){
        if(a[i]!=n1 && a[i]!=n2 && a[i]!=n3 && a[i]!=n4 && a[i]!=n6){
            n5=a[i];
        }
    }
    int n[]={n1,n2,n3,n4,n5,n6};
    for(int i=0;i<6;i++){
        cout<<n[i]<<' ';
    }
    return 0;
}