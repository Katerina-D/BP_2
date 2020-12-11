#include <manager.h>
#define RAND_MAX  294 967 290

enum Figures
{
	CIRCLE, RECTANGLE, FIG_NUMBER
};

Manager::Manager()
{
    figures = new std::vector<Figure*>();
}

Manager::~Manager()
{
	for (auto ptr : *figures)
        delete ptr;
    delete figures;
}


void Manager::addFigure(Coordinates center)
{
	Figure* newFigure = createFigure(center);
    figures->push_back(newFigure);
}


Figure* Manager::createFigure(Coordinates center)
{
	int type = rand() % FIG_NUMBER;
	Figures figure = static_cast<Figures>(type);
	Figure* newFigure = nullptr;

	switch(figure)
	{
		case RECTANGLE :
		{
			int width = rand() % MAX_SIZE;
			int height = rand() % MAX_SIZE;
			unsigned int color = rand() * 10;
			newFigure = new Rectangle(center, width, height, color);
			break;
		}
		case CIRCLE :
		{
			int radius = rand() % MAX_SIZE;
			unsigned int color = rand() * 10;
			newFigure = new Circle(center, radius*2, radius*2, color);
			break;
		}
		default :
		{ throw "Bad type";}
	}
	return newFigure;
}

void Manager::deleteFigure(Coordinates point)
{
	auto i = figures->begin();
	while(i != figures->end())
	{
		if((*i)->isInFigure(point))
			figures->erase(i);
		else
			++i;
	}

}
