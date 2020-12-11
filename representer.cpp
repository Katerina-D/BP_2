#include <representer.h>

Representer::Representer(){}

Representer::~Representer()
{
    delete painter;
}

void Representer::representFigures(QWidget* widget, std::vector<Figure*> *figures)
{
    painter = new QPainter(widget);
    painter->setPen(QPen(Qt::black));

	for(auto f : *figures)
	{
		painter->setBrush(QBrush(QColor(f->getColor())));
		f->drawFigure(this);
    }
    painter->end();
}

void  Representer::draw(Circle* circle)
{
	Coordinates center = circle->getPoint();
	painter->drawEllipse(center.x, center.y, circle->getWidth(), circle->getHeight());
}

void  Representer::draw(Rectangle* rectangle){
	Coordinates a = rectangle->getPoint();
	painter->drawRect(a.x, a.y, rectangle->getWidth(), rectangle->getHeight());
}


