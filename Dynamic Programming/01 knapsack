#include <bits/stdc++.h>
using namespace std;
int knapsack(int w[],int b[],int n,int k)
{
    int ans[n+1][k+1];
    for(int i=0; i<=k; i++)
        ans[0][i]=0;
    for(int i=0; i<=n; i++)
        ans[i][0]=0;
		
		for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=k; j++)
        {
            if(w[i]<=j)
                ans[i][j]=max(b[i]+ans[i-1][j-w[i]],ans[i-1][j]);
            else
                ans[i][j]=ans[i-1][j];
        }
    }
    return ans[n][k];
}
int main()
{

    int n,w[50],b[50],k;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>w[i]>>b[i];
    }
    cin>>k;
    int total_benifit=knapsack(w,b,n,k);
    cout<<total_benifit<<endl;
}
