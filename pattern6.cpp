#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int i,j,sp=0,n;
    cout<<endl<<"Enter the number of lines :";
    cin>>n;
    cout<<endl;

    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<setw(2)<<j;
        }
        for(j=1;j<=sp;j++){
            cout<<" ";
        }
        if(i==n){
            j=i-1;
            sp=2;
        }
        else{
            j=i;
            sp=sp+4;
        }
            

        for(;j>=1;j--){
            cout<<setw(2)<<j;
        }
        cout<<endl;
    }
}