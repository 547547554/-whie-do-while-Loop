#include<iostream>
using namespace std;


//factor need of n

int main()
{
    int n;
    cout<<"Enter input : ";
    cin>>n;

    int i=1;
    while(i<=n)
    {
        if(n%i==0)
        cout<<i<<endl;

        i++;
    }
    

}