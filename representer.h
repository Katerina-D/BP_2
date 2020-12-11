#ifndef REPRESENTER_H
#define REPRESENTER_H

#include <QPainter>
#include <figure.h>
#include <rectangle.h>
#include <circle.h>
#include <vector>
#include <QtWidgets/QWidget>
#include <iostream>


class Representer
{
public:
    Representer();

    ~Representer();

    void representFigures(QWidget* widget, std::vector<Figure*> *figures);

	void draw(Circle* circle);

    void draw(Rectangle* rectangle);

private:
    QPainter* painter;
};



#endif // REPRESENTER_H
