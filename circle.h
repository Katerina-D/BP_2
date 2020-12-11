#ifndef CIRCLE_H
#define CIRCLE_H

#include <figure.h>



class Representer;

class Circle : public Figure
{
public:
	Circle(Coordinates center, int width, int height, unsigned int color);

	Coordinates getPoint();

    void drawFigure(Representer *representer);

	bool isInFigure(Coordinates point);
};

#endif // CIRCLE_H
