//
// Created by student on 09.06.2025.
//

#ifndef POLIMORFIZM_RECTANGLE_H
#define POLIMORFIZM_RECTANGLE_H

#include "figure.h"

class Rectangle : public Figure
{
private:
    float m_a;
    float m_b;


public:
    Rectangle(string name = "", float a = 0, float b = 0);
    virtual ~Rectangle() {}
    virtual float Area() const;
    virtual float Perimeter() const;
    virtual void Info() const;
};


#endif //POLIMORFIZM_RECTANGLE_H
