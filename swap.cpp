#include <iostream>

using namespace std;

int main()
{
    cout<<"Swapping Program:";
    int x,y,temp;
    x=5;
    y=6;
    
    cout<<"\nBefore swapping:";
    cout<<"x="<<x;
    cout<<"y="<<y;
    
    temp=x; //temp=5
    x=y;  //x=6
    y=temp;  // y=5
    
    cout<<"\nAfter swapping:";
    cout<<"x="<<x;
    cout<<"y="<<y;
    
    

    return 0;
}
