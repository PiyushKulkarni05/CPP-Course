#include<iostream>
using namespace std;
class Parameters
{
protected:
    int height;
    int breadth;/* data */
public:
    void setheight(int height){
        this->height=height;
    }
    void setbreadth(int breadth){
        this->breadth=breadth;
    }
};
class Cost{
    public:
    int cost(int area){
        return area*70;
    }
};
class Total:public Parameters,public Cost
{

public:
int getarea(){
    return (height*breadth);
}
    
};
int main(){
    Total T;
    T.setheight(30);
    T.setbreadth(20);
    int area = T.getarea();
    cout<<"Area is:"<<area<<" And cost is:"<<T.cost(area)<<endl;
    
    return 0;
}