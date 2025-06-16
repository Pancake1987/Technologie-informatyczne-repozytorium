//
// Created by student on 09.06.2025.
//
#include "triangle.h"
#include <cmath>
Triangle::Triangle(string name, float a, float b, float c) : Figure(name)
{
    m_a = a;
    m_b = b;
    m_c = c;

}

float Triangle::Area() const
{
    return (m_a + m_b + m_c)/2;
}

float Triangle::Perimeter() const
{
    return  m_a + m_b + m_c;
}

void Triangle::Info() const
{
    cout << "Triangle: " << Name() << endl;
    cout << "Dimensions: a=" << m_a << " b =" << m_b << " c = " << m_c << endl;
    cout << "Area: " << (m_a + m_b + m_c)/2 << endl;
    cout << "Perimeter: " <<  m_a + m_b + m_c << endl;
}