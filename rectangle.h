#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <figure.h>


class Representer;

class Rectangle : public Figure
{
public:

	Rectangle(Coordinates center, int width, int height, unsigned int color);

	Coordinates getPoint();

    void drawFigure(Representer* representer);

	bool isInFigure(Coordinates point);
};

#endif // RECTANGLE_H
