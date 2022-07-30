#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

int count2(int n,int k)
{
int count=0;
if(k==1)
return n;

else
{

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j%i==0)
                count++;
        }
    }
    }
return count;

}

int count1(int n,int k)
{
if(k==1)
return n;

  if(k==2)
  {
    return count2(n,k);
  }

    int mid=k/2;
    int x=count1(n,k-mid);
    int y=count2(n,mid);
    return x+y-1;
}

int main(void)
{
int k,n;
cin>>n;
cin>>k;
cout<<endl<<count1(n,k);

return 0;
}