//
// Created by student on 09.06.2025.
//

#ifndef POLIMORFIZM_TRIANGLE_H
#define POLIMORFIZM_TRIANGLE_H

#include "figure.h"

class Triangle : public Figure
{
private:
    float m_a;
    float m_b;
    float m_c;

public:
    Triangle(string name = "", float a = 0, float b = 0, float c = 0);
    virtual ~Triangle() {}
    virtual float Area() const;
    virtual float Perimeter() const;
    virtual void Info() const;
};

#endif //POLIMORFIZM_TRIANGLE_H
