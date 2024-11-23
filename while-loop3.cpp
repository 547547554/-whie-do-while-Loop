#include<iostream>
using namespace std;

int main()
{
    int i, n;
    cout<<"Enter input : ";
    cin>>n;

    i = n;
    while(i<=n)
    {
        if(n%2==0)
        {
            cout<<"Even";
        }
        else
        {
            cout<<"Odd";
        }
      i++;
      
    }
   
}