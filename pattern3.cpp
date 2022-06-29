#include<iostream>
#include<iomanip>

using namespace std;
int main()
{

int i,j,n,sp=40;
cout<<endl<<"Enter the no of rows:";
cin>>n;
for(i=1;i<=n;i++)
{
for(j=1;j<=sp;j++)
{
cout<<" ";
}
for(j=i;j>=1;j--)
{
cout<<setw(4)<<j;
}
for(j=2;j<=i;j++)
{
cout<<setw(4)<<j;
}
cout<<endl;
sp=sp-4;
}
}