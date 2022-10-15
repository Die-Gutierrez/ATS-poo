// Methods builders and modifiers (getters and setters).

#include <iostream>

using namespace std;

class Point
{
    private: 
        int x,y;
    public:
        Point();
        void setPoint(int);
};
Point::Point()
{
}
//
void Point::setPoint(int _x)
{
    x = _x;
    cout<<"The element "<<x<<" has been added successfully . . .";
}
int main()
{
    Point point1;

    point1.setPoint(15);

    return 0;
}