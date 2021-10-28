#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,r,p,c=0;
        cin>>n>>r;
        int a[n+1]={0};
        for(int i=0;i<r;i++)
        {
            cin>>p;
            for(int j=1;j<=n;j++)
            {
                if((j%7==6)||(j%7==0))
                    continue;
                else if(j%p==0)
                    a[j]=1;
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(a[i]==1)
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
