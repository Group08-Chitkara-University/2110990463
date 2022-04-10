#include<iostream>
using namespace std;

int main(){
    int S,E,W;
    // cout<<"The start,end Fahrenheit value and step size:"<<endl;
    cin>>S>>E>>W;
    for ( S=S; S <=E ; S=S+W)
    {
        /* code */
        int c=(5.0/9)*(S-32);
        cout<<S<<" "<<c<<endl;
    }
    return 0;
    
}
