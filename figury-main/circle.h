//
// Created by student on 09.06.2025.
//

#ifndef POLIMORFIZM_CIRCLE_H
#define POLIMORFIZM_CIRCLE_H

#include "figure.h"

class Circle : public Figure
{
private:
    float m_a;


public:
    Circle(string name = "", float a = 0);
    virtual ~Circle() {}
    virtual float Area() const;
    virtual float Perimeter() const;
    virtual void Info() const;
};

#endif //POLIMORFIZM_CIRCLE_H
