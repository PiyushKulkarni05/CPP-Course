#include<iostream>
using namespace std;
namespace first{
    void fuct(){
        cout<<"This is first\""<<endl;
    }
}
namespace second{
    void fuct(){
        cout<<"This is second"<<endl;
    }
}
using namespace first;//of first 
int main(){
    
    fuct();
    return 0;
}