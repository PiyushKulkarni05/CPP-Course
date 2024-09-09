#include<iostream>
#include<string>
using namespace std;
template <typename T>
inline T const& Max(T const&a,T const&b){
    return a<b ? b:a;//it means if a<b return a otherwise b so (a<b)? if part : true-a oterwise b as (a:b)
} //it is called as "Function like macros"
int main(){
    int i = 15;
    int j = 30;
    cout<<"Max(i,j) "<<Max(i,j)<<endl;

    string a = "Piyush";
    string b = "Kulkarni";
    cout<<"Max(a,b) "<<Max(a,b)<<endl;
    
    return 0;
}