#include<iostream>
using namespace std;
class shape{
    public:
    virtual float area()=0;  //pure virtual function
};
class circle:public shape{
    private:
    float radius;
    public:
    circle(float r){
        radius=r;
    }
    float area(){
        return 3.14*radius*radius;
    }
};
class rectangle:public shape{
    private:
    float lenght,breadth;
    public:
    rectangle(float l,float b){
        lenght=l;
        breadth=b;
    }
    float area()
    {
        return lenght*breadth;
    }
};
class triangle:public shape{
    private:
    float base,height;
    public:
    triangle(float b,float h){
    
    base=b;
    height=h;
    }
    float area(){
        return 0.5*base*height;
    }
};
int main(){
    circle c(5);
    rectangle rec(4,6);
    triangle t(10,8);
    shape *ptr;
    ptr=&c;
    cout<<"area of circle:"<<ptr->area()<<endl;
    ptr=&rec;
    cout<<"area of rectangle:"<<ptr->area()<<endl;
    ptr=&t;
    cout<<"area of triangle:"<<ptr->area()<<endl;
    return 0;
}