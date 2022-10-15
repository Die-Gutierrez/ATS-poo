// Methods builders and modifiers (getters and setters).

#include <iostream>

using namespace std;

class Point
{
    private: 
        int x,y;
    public:
        Point();
        //This is setters.
        void setPoint(int, int);
        //Thi is getters.
        int getPointX();
        int getPointY();
};
Point::Point()
{
}
void Point::setPoint(int _x, int _y)
{
    x = _x;
    y = _y;
}
int Point::getPointX()
{
    return x;
}
int Point::getPointY()
{
    return y;
}
int main()
{
    Point point1;

    point1.setPoint(15,10);
    cout<<point1.getPointX()<<endl;
    cout<<point1.getPointY()<<endl;

    return 0;
}