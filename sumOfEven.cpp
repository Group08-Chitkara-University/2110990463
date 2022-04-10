#include<iostream>
using namespace std;

int main(){
    int i=0;
    int sum=0;
    int n;
    cout<<"enter N:";
    cin>>n;
    for ( i = 1; i <= n; i++)
    {
        /* code */
        if (i%2==0)
        {
            /* code */
            sum=sum+i;
        }    
    }
    cout<<"The sum of even numbers:"<<sum<<endl;
    return 0;
}
