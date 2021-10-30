#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a=n;
    while(k--)
    {
        cout<<a<<" ";
        a--;
    }
    for(int i=1; i<=a; i++)
        cout<<i<<" ";

}