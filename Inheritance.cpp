#include<iostream>
using namespace std;
class Company
{
protected:
    int id;
    string name;
    //static company = "InfoTech";/* data */
public:
    void setid(int id){
        this->id=id;
    }
    void setname(string name){
        this->name=name;
    }
};
class Employee:public Company
{
    public:
    void info(){
        cout<<"**********************\nId:"<<id<<"\nName:"<<name<<endl;
    }
};

int main(){
    int a;
    string b;
    cout<<"Enter id:";
    cin>>a;
    cout<<"Enter name:";
    cin>>b;
    Employee e;
    e.setid(a);
    e.setname(b);
    e.info();
    return 0;
}