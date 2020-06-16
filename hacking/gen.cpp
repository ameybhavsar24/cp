#include<bits/stdc++.h>
#define pi 2*acos(0.0)

using namespace std;
int main()
{
    ios_base::sync_with_stdio( false);
    cin.tie(0), cout.tie(0);

    long long arr[10000];
    arr[0]=1;
    long long x=1;
    for(int i=1;i<10000;i++)
    {
        x=2*x;
        arr[i]=arr[i-1]+x;
    }
    int t;cin>>t;
    while(t--)
    {
        long long n;cin>>n;
        for(int i=1;i<10000;i++)
        {
            if(n%arr[i]==0)
            {
                cout<<(n/arr[i])<< "\n";
                break;
            }
        }

    }

    return 0;
}

