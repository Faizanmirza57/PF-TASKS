#include<iostream>
using namespace std;
main()
{
    string shape;
    cout<<" Enter the shape of the figure (square, rectangle, circle, triangle) : ";
    cin>>shape;

    if(shape == "square"){
        float length, area;
        cout<<"Enter length of side of the square : ";
        cin>>length;
        area= length*2;
        cout<<" Area= "<<area;
    }
    if(shape == "rectangle"){
        float length, width, area;
        cout<<" Enter length of rectangle : ";
        cin>>length;
        cout<<" Enter width of rectangle : ";
        cin>>width;
        area= length*width;
        cout<<" Area= "<<area;
    }
    if(shape == "circle"){
        float radius, area;
        cout<<" Enter radius of circle : ";
        cin>>radius;
        area= 3.14*(radius*2);
        cout<<" Area= "<<area;
    }
    if(shape == "triangle"){
        float base, height, area;
        cout<<" Enter length of the base of triangle : ";
        cin>>base;
        cout<<" Enter length of the height of triangle : ";
        cin>>height;
        area= 1/2*base*height;
    }
}