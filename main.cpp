#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,l,m;
    cin>>n;
    for(i=1;i<=(n+1)/2;i++)
    {
        for(k=n-1;k>=2*i-1;k--)
            cout<<"  ";
        for(l=i;l>=1;l--)
            cout<<l<<" ";
        for(m=1;m<=2*i-3;m++)
            cout<<"  ";
        if(i==1)
            cout<<"  ";
        else
        {
            for(j=1;j<=i;j++)
                cout<<j<<" ";
        }
        cout<<endl;
    }
    for(i=1;i<=(n-1)/2;i++)
    {
        for(k=1;k<=2*i;k++)
            cout<<"  ";
        for(l=(n+1)/2-i;l>=1;l--)
            cout<<l<<" ";
        for(m=n-4;m>=2*i-1;m--)
            cout<<"  ";
        if(i!=(n-1)/2)
        {
            for(l=1;l<=(n+1)/2-i;l++)
                cout<<l<<" ";
        }
        else
            cout<<" ";
        cout<<endl;
    }
	return 0;
}
