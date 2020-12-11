#include <rectangle.h>
#include <representer.h>

Coordinates Rectangle::getPoint()
{
	return Coordinates{center.x - width/2, center.y - height/2};
}

Rectangle::Rectangle(Coordinates _center, int _width, int _height, unsigned int _color)
	: Figure(_center,  _width, _height, _color)
{}

void Rectangle::drawFigure(Representer* representer)
{
    representer->draw(this);
}

bool Rectangle::isInFigure(Coordinates point)
{
	return (point.x >= center.x - width/2) && (point.x <= center.x + width/2) &&
			(point.y >= center.y - height/2) && (point.y <= center.y + height/2);
}
