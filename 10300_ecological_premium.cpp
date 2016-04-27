#include<iostream>
using namespace std;

int main()
{
    //Accepted
    int t,f,ans,a,b,c;
    while(cin>>t)
    {
        for(int i=1; i<=t; i++)
        {
            cin>>f;
            ans=0;
            for(int j=1; j<=f; j++)
            {
                cin>>a>>b>>c;
                ans+=a*c;
            }
            cout<<ans<<endl;
        }
    }


    return 0;
}
