#include <iostream>
#include "figure.h"
#include "rectangle.h"
#include "square.h"
#include "circle.h"
#include "triangle.h"

int main()
{
    Rectangle R1("R1", 2.0, 3.0);
    Rectangle R2("R2", 3.0, 4.0);
    Rectangle R3;
    Square S1("S1", 5.0);
    Circle C1("C1", 7.0);
    Triangle T1( "T1", 8.0, 7.0, 10.0);

    R1.Info();
    std::cout << std::endl;
    R2.Info();
    std::cout << std::endl;
    R3.Info();
    std::cout << std::endl;
    S1.Info();
    std::cout << std::endl;
    C1.Info();
    std::cout << std::endl;
    T1.Info();

    std::cout << "Wykorzystanie wskaźnika" << std::endl;
    Figure* pointers[] = {&S1, &R1, &C1, &T1, &R2};
    for(int i =0; i < 5; i++){
        std::cout << std::endl;
        pointers[i]->Info();

    }

    /*std::cout << "Wykorzystanie referencji" << std::endl;
    Figure& ref_s = S1;
    Figure& ref_r = R1;
    Figure& ref_c = C1;
    Figure& ref_t = T1;
    std::cout << std::endl;
    ref_s.Info();
    std::cout << std::endl;
    ref_r.Info();
    std::cout << std::endl;
    ref_c.Info();
    std::cout << std::endl;
    ref_t.Info(); */

}
