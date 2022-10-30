#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cin >> n;
    int a[n];
    int nine = 0,three = 0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%9==0)
        {
            nine++;
        }
        else if(a[i]%3==0)
        {
            three++;
        }
    }
    int remaining=n-nine-three;
    if(three==0)
    {
        if(n%2==0)
        {
            if(remaining<=nine)
            {
                cout<<"YES"<<"\n";
            }
            else{
                cout<<"NO"<<"\n";
            }
        }
        else{
            if(remaining-1<=nine)
            {
                cout<<"YES"<<"\n";
            }
            else{
                cout<<"NO"<<"\n";
            }
        }
    }
    else{
        if(remaining<=nine)
        {
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}