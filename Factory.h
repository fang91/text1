//
//  Factory.h
//  Factory
//
//  Created by director on 15-4-7.
//  Copyright (c) 2015年 director. All rights reserved.
//

#ifndef __Factory__Factory__
#define __Factory__Factory__

#include <iostream>
using namespace std;

static const double PI=3.14;

class Shape
{
public:
    virtual double Area() = 0;
    virtual ~Shape(){}
    virtual void print();
};

class Rectangle : public Shape
{
public:
    Rectangle(int width,int height);
    double Area();
private:
    int _width;
    int _height;
};

class Circle : public Shape
{
public:
    Circle(int radius);
    double Area();
private:
    int _radius;
};

class Creator
{
public:
    virtual Shape * CreateShape()=0;
    virtual ~Creator() {}
};

class RectCreator:public Creator
{
public:
    Shape * CreateShape();
};

class CircleCreator : public Creator
{
public:
    Shape* CreateShape();
};

void Create(Creator* pCreator);

#endif /* defined(__Factory__Factory__) */
