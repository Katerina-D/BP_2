#include <circle.h>
#include <representer.h>
#include <cmath>


Circle::Circle(Coordinates _center, int _width, int _height, unsigned int _color)
	: Figure(_center, _width, _height, _color)
{}


void Circle::drawFigure(Representer *representer)
{
    representer->draw(this);
}

Coordinates Circle::getPoint()
{
	return Coordinates{ center.x - width/2, center.y - height/2};
}

bool Circle::isInFigure(Coordinates point)
{

	return (pow(point.x-center.x,2) + pow(point.y-center.y,2)) <= width*width/4;
}

