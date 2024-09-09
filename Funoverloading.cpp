#include<iostream>
using namespace std;
class Overload
{

public:
    int print(int a){
        return a;
    }
    int print(int a, int b){
        return a+b;
    }
};


int main(){
    Overload a;
    cout<<a.print(5)<<endl;
    cout<<a.print(4,5)<<endl;
    
    return 0;
}