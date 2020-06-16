#include<bits/stdc++.h>
using namespace std;
//drivercode
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long number,a;
        cin>>number>>a;
        if(a>number)
        {
            cout<<"NO"<<endl;
        }
        else if(number%2==0)
        {
            if(a%2==0)
            {
                //cout<<a;
                cout<<"YES"<<endl;
                for(int i=0; i<a-1; i++)
                { //cout<<i;
                    cout<<1<<" ";
                }
                cout<<number-(a-1)<<endl;
            }
            else
            {
                if(a>number/2)
                { //cout<<a;
                    cout<<"NO"<<endl;
                }
                else
                {
                    cout<<"YES"<<endl;
                    for(int i=0; i<a-1; i++)
                    {  //cout<<i;
                        cout<<2<<" ";
                    }
                    cout<<number-2*(a-1)<<endl;
                }
            }
        }
        else
        {
            if(a%2==0)
            { //cout<<a;
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
                for(int i=0; i<a-1; i++)
                { //cout<<i;
                    cout<<"1"<<" ";
                }
                cout<<number-(a-1)<<endl;
            }


        }
    }
}


//return 0;}
