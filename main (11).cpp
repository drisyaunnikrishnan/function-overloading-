#include<iostream>
#include<conio.h>
#define pi 3.14
using namespace std;
class shape
{
 float volume ;
 public:
 void calculate(float side)
 {
 volume = side*side*side;

 }
 void calculate(float l,float b,float h)
 {
 volume=l* b * h;
 }
 void calculate(float r,float h)

 {
 volume= (pi*r*r*h) /3 ;
 }

 void display()
 {
 cout<<" volume = "<<volume;
 }
};
int main()
{
 shape obj;
 float side,l,b,h,r,height;
 cout<<"enter the side of the cube : ";
 cin>>side;

 obj.calculate(side);

 obj.display();

 cout<<"\n\n enter the length ,breadth and height of the cuboid :";
 cin>>l>>b>>h;

 obj.calculate(l,b,h);

 obj.display();

 cout<<"\n\n enter the radius and heigth of the cone : ";

 cin>>r>>height;

 obj.calculate(r,height);
 obj.display();
}