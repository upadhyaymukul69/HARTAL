#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        int arr[x];
        for(int i=0;i<x;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+x);
        int i=0,j=x-1;
        int mid = (i+j)/2;
        cout<<arr[mid]<<endl;
    }
    return 0;
}
