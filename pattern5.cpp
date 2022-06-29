#include<iostream>
#include<iomanip>

using namespace std;
int main()
{

int i,j,n,sp;
cout<<endl<<"Enter the no of rows:";
cin>>n;
sp=((n*2)-3)*4;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
cout<<setw(4)<<j;
}
for(j=sp;j>=1;j--)
{
cout<<" ";
}
for(j=i;j>=1;j--)
{
if(j==n)
continue;
else
cout<<setw(4)<<j;
}
cout<<endl;
sp=sp-8;
}

}