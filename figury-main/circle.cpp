//
// Created by student on 09.06.2025.
//
#include "circle.h"
#include <cmath>
Circle::Circle(string name, float a) : Figure(name)
{
    m_a = a;

}

float Circle::Area() const
{
    return m_a * m_a * M_PI;
}

float Circle::Perimeter() const
{
    return 2* M_PI * m_a;
}

void Circle::Info() const
{
    cout << "Circle: " << Name() << endl;
    cout << "Radius: " << m_a << endl;
    cout << "Area: " << m_a * m_a * M_PI << endl;
    cout << "Perimeter: " << 2* M_PI * m_a << endl;
}