#include <iostream>
#include <cmath>

#include "Vector2.h"

int main() {
    Vector2 a(1, 1);
    Vector2 b(2, 3);
    Vector2 c = a + b;
    /* std::cout << c.getLen() << std::endl;
     std::cout << c.getPhi() << std::endl;
     std::cout << c.getPhiDeg() << std::endl;*/
     //
    Vector2 d(6, 7);
    Vector2 d1 = d - a;
    d -= a;
    Vector2 a1 = a.polar();
    std::cout << a.x << " " << a.y << std::endl;
    std::cout << a1.x << " " << a1.y << std::endl;
    /*std::cout << d.x << " " << d.y << std::endl;
    std::cout << d1.x << " " << d1.y << std::endl;*/
    return 0;
}