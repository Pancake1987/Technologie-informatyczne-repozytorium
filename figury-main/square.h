//
// Created by student on 09.06.2025.
//

#ifndef POLIMORFIZM_SQUARE_H
#define POLIMORFIZM_SQUARE_H

#include "figure.h"

class Square : public Figure
{
private:
    float m_a;


public:
    Square(string name = "", float a = 0);
    virtual ~Square() {}
    virtual float Area() const;
    virtual float Perimeter() const;
    virtual void Info() const;
};

#endif //POLIMORFIZM_SQUARE_H
