//
// Created by BIT on 08.06.2025.
//

#ifndef KOLO_H
#define KOLO_H

#pragma once
#include <string>

class Point

{
private:
    std::string m_name;
    double m_x;
    double m_y;
public:
    Point();
    Point(const std::string& name, double x = 0, double y = 0);
    ~Point();
    void setName(const std::string& name);
    void setXY(double x, double y);
    double getX();
    double getY();
    void show() const;
    double radius(const Point& p) const;
    double obwod(const Point& p) const;
    double pole(const Point& p) const;
};
#endif //KOLO_H
