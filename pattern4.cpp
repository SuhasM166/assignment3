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
for(j=1;j<=i;j++)
{
if((j==1)||(j==i))
{
cout<<setw(4)<<"1";
}
else
{
cout<<setw(4)<<"0";
}
}
cout<<endl;
sp=sp-2;
}
}