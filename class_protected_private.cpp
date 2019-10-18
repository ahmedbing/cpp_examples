#include <iostream>

using namespace std;

class Rectangle{
    protected:
        int width;
        int height;
    public:
        virtual void display();
};
class RectangleArea : public Rectangle{
    public:
        void read_input();
        void display();

};
void Rectangle::display(){
    cout<<width<<" "<<height<<"\n";
}
void RectangleArea::read_input(){
    int num1,num2;
    cin>>num1>>num2;
    width=num1;
    height=num2;
}
void RectangleArea::display(){
    cout<< (width * height )<<"\n";
}

int main()
{
    RectangleArea r_area;
    r_area.read_input();
    r_area.Rectangle::display();
    r_area.display();

    return 0;
}
