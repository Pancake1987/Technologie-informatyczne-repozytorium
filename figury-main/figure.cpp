//
// Created by student on 09.06.2025.
//
#include "figure.h"

Figure::Figure(string name)
{
    m_name = name;
}

string Figure::Name() const
{
    return m_name;
}
