#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>

struct Coordinates
{
	int x;
	int y;
};

class Representer;

class Figure
{
public:
    Figure() {}
	Figure(Coordinates center, int width, int height, unsigned int color)
		: center(center), width(width), height(height), color(color)
	{}

	virtual ~Figure() = default;

	virtual Coordinates getPoint()=0;

    virtual void drawFigure(Representer* representer)=0;

	virtual bool isInFigure(Coordinates point)=0;

	int getHeight() { return height; }

	int getWidth() { return width; }

	unsigned int getColor() { return color; }

protected:
	Coordinates center;
    int width;
    int height;
	unsigned int color;
};

#endif // FIGURE_H
