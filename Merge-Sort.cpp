#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
vector<long long> arr;
void merge(long long l, long long mid,long long r)
{
    long long n1=mid-l+1;
    long long n2=r-mid;
    long long a[n1];
    long long b[n2];
    for(long long i=0;i<n1;i++){
        a[i]=arr[l+i];
    }
    for(long long i=0;i<n2;i++){
        b[i]=arr[mid+1+i];
    }
    long long i=0,j=0,k=l;
    while(l<n1 && j<n2){
        if(a[i]<=b[j])
        {
            arr[k]=a[i];
           i++;
        }
        else
        {
            arr[k]=b[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=a[i];
        k++;i++;
    }
    while(j<n2)
    {
        arr[k]=b[j];
        k++;j++;
    }
}
void MergeSort(long long l, long long r){
    if(l<r)
    {
        long long mid=l+(r-l)/2;
        MergeSort(l,mid);
        MergeSort(mid+1,r);
        merge(l,mid,r);
    }
}

int main()
{
//   freopen('input.txt', 'r', stdin);
//   freopen('output.txt', 'w', stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t,n;
    cin>>n;
    for(long long i=0;i<n;i++)
    {
        cin>>t;
        arr.push_back(t);
    }
    MergeSort(0,n-1);
    for(long long i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
   return 0;
}