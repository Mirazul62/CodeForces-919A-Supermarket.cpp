#include<bits/stdc++.h>
using namespace std;
int main()
{
    float i,n,m,a,b,count=0,max=0;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        ///count=0;
        count=(a/b)*m;
        ///  cout<<count<<endl;
        if(i==0)
            max=count;
        else if (i>0)
        {
            if(count<max)
                max=count;
        }

    }
    cout<<setprecision(8)<<max;

}
