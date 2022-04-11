#include<iostream>
using namespace std;

// void display(int a){
//     int b;
//     cout<<"enter number: "<<endl;
//     cin>>b;
//     b++;
// }

// int main(){
//     int r;
//     r=display();
//     cout<<r<<endl;
// }
void swap(int *x,int *y){
    int temp;
    
    temp=*x;
    *x=*y;
    *y=temp;
    return;
}

int main(){
    int a,b;
    cout<<"before swap: "<<endl;
    cin>>a>>b;
    swap(&a,&b);
    cout<<"after swap: "<<endl;
    cout<<a<<endl<<b;
}
