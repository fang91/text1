//
//  Factory.cpp
//  Factory
//
//  Created by director on 15-4-7.
//  Copyright (c) 2015年 director. All rights reserved.
//

#include "Factory.h"


Rectangle::Rectangle(int width,int height)
{
    _width = width;
    _height = height;
}

double Rectangle::Area()
{
    return _width * _height;
}

Circle::Circle(int radius)
{
    _radius = radius;
}

double Circle::Area()
{
    return PI * _radius * _radius;
}

Shape * RectCreator::CreateShape()
{
    Rectangle * rect = new Rectangle(10,20);
    return rect;
}

Shape* CircleCreator::CreateShape()
{
    Circle* circle = new Circle( 10 );
    return circle;
}

void Create(Creator* pCreator)
{
    Shape* pShape = pCreator->CreateShape();
    pShape->Area();
    delete pShape;
    pShape =NULL;
}
