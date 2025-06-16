//
// Created by BIT on 08.06.2025.
//
#include <iostream>
#include "kolo.h"
#include <cmath>
Point::Point() {
    //std::cout << "Wywolano konstruktor domyslny\n";
    m_name = "bez nazwy";
    m_x = 0;
    m_y = 0;
}

Point::Point(const std::string& name, double x, double y) {
    //std::cout << "Wywolano konstruktor z argumentem " << name << std::endl;
    m_name = name;
    m_x = x;
    m_y = y;
}

Point::~Point() {
    //std::cout << "Likwiduje " << m_name << std::endl;
}

void Point::setName(const std::string& name) {
    m_name = name;
}

void Point::setXY(double x, double y) {
    m_x = x;
    m_y = y;

}

double Point::getX() {
    return m_x;
}

double Point::getY() {
    return m_y;
}

void Point::show() const {
    std::cout << "Point: " << m_name << "(" << m_x << ", " << m_y << ")" << std::endl;
}

double Point::radius(const Point& p) const {
    return sqrt( (p.m_x - m_x) * (p.m_x - m_x) + (p.m_y - m_y) * (p.m_y - m_y) );
}

double Point::obwod(const Point& p) const {
    double r = radius(p);
    return 2 * M_PI * r;
}

double Point::pole(const Point& p) const {
    double r = radius(p);
    return r * r * 3.1415926535;
}
