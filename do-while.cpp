#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter input : ";
    cin>>n;

    int i = 1; //intialize
    do{
        cout<<i<<endl;
        i++;    //update
    }
    while (i<=n);  //break
    
}