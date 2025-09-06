#include <iostream>
#include "shape.h"
#include "triangle.h"
#include "trianglerect.h"
#include "triangleisos.h"
#include "triangleequal.h"
#include "quadrangle.h"
#include "parallelogram.h"
#include "rectangle.h"
#include "square.h"
#include "romb.h"

int main(){
    Shape sh;
    Triangle tr(10, 20, 30, 50, 60, 70);
    TriangleRect trR(10,20,30,50,60);
    TriangleIsos trI(10,20,50,60);
    TriangleEqual trEq(30);
    Quadrangle q(10,20,30,40,50,60,70,80);
    Rectangle re(10,20);
    Square s(20);
    Parallelogram p(20,30,30,40);
    Romb romb(30,30,40);
    sh.print_info(&tr);
    sh.print_info(&trR);
    sh.print_info(&trI);
    sh.print_info(&trEq);
    sh.print_info(&q);
    sh.print_info(&re);
    sh.print_info(&s);
    sh.print_info(&p);
    sh.print_info(&romb);

}
