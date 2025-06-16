#include <iostream>
#include "kolo.h"
using namespace std;

int main()
{

    Point p1("P1", 0, 0);
    Point p2("P2", 0, 0);

    double x, y;

    cout << "Podaj wspolrzedne x i y dla P1: " << endl;
    cin >> x >> y;
    p1.setXY(x, y);

    cout << "Podaj wspolrzedne x i y dla P2: " << endl;
    cin >> x >> y;
    p2.setXY(x, y);


    p1.show();
    p2.show();

    cout << "Promien tego okregu wynosi " << p1.radius(p2) << endl;
    cout << "Obwod tego kola wynosi " << p1.obwod(p2) << endl;
    cout << "Pole tego kola wynois " << p1.pole(p2) << endl;


}// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.
