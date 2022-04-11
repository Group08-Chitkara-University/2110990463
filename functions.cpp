#include <iostream>
using namespace std;

int main(){
    int r;
    int num1,num2;
    cout<<"Enter the numbers:"<<endl;
    cin>>num1>>num2;
    r=max(num1,num2);
    cout<<r<<endl;
    return 0;
}



int max(int num1,int num2){
    int result;

    if (num1>num2)
    {
        /* code */
        result=num1;
    }
    else{
        result=num2;
    }
    return result;
}


