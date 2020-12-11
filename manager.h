#ifndef CLICKHANDLER_H
#define CLICKHANDLER_H

#include <representer.h>
#include <figure.h>
#include <circle.h>
#include <rectangle.h>
#include <cstdlib>
#include <iostream>


class Manager
{
public:
	Manager();
	~Manager();

	void addFigure(Coordinates center);

	void deleteFigure(Coordinates point);

	std::vector<Figure*>* getFigures(){ return figures; }

private:
	int MAX_SIZE = 250;

    std::vector<Figure*> *figures;

	Figure* createFigure(Coordinates center);
};

#endif // CLICKHANDLER_H
