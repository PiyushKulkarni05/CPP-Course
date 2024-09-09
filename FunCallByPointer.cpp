#include<iostream>
using namespace std;
static swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    cout<<"Swapped values are:"<<*x<<" & "<<*y<<endl;
}
int main(){
    int a=100;
    int b=435;
    cout<<"Before swap:"<<a<<" & "<<b<<endl;
    swap(&a,&b);
    return 0;
}