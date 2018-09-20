
#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long int i,n,t,d,sum,cnt;

    cin >> t;
    while(t--)
    {
        cin>>n;
        d=5;
        cnt=0;
        while(1)
        {
            cnt+=(n/d);
            d*=5;
            if(d>n)
               break;
        }

        cout<<cnt<<endl;
    }
    return 0;
}
