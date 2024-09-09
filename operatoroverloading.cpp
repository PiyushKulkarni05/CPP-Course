#include <iostream>
using namespace std;
class box
{
public:
    int lenght, height;
    void setlenght(int lenght)
    {
        this->lenght = lenght;
    }
    void setheight(int height)
    {
        this->height = height;
    }
    int getvolume()
    {
        return (lenght * height);
    }

    box operator+(const box &b)
    {
        box box;
        box.lenght = this->lenght + b.lenght;
        box.height = this->height + b.height;
        return box;
    }
};

int main()
{
    box b1;
    box b2;

    b1.setlenght(2);
    b1.setheight(3);
    int vol = b1.getvolume();
    cout << vol << endl;
    b2.setlenght(5);
    b2.setheight(6);
    int vol1 = b2.getvolume();
    cout << vol1 << endl;
    box b3;
    b3 = b1.operator+(b2);
    int vol2 = b3.getvolume();
    cout << vol2 << endl;

    return 0;
}