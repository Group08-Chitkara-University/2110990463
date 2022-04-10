#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n:"<<endl;
    cin>>n;
    int i=1;
    // int val=1;

    for ( i = 1; i <=n; i++)
    {
        /* code */
        int j=1;
        int k=i;
        for ( j = 1; j <= i; j++)
        {
            /* code */
            cout<<k;
            // val=val+1;
            k=k+1;
        }
    cout<<endl;    
    }

    return 0;
    
}
