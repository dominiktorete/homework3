#include <iostream>
#include "shape.h"
#include "triangle.h"
#include "triangllerect.h"
#include "triangleisos.h"
#include "triangleequal.h"
#include "quadrangle.h"
#include "parallelogram.h"
#include "rectangle.h"
#include "square.h"
#include "romb.h"
#include "exceptfigure.h"
int main(){
    try{
        Triangle tr(3, 10, 20, 30, 50, 60, 70);
        tr.get_value();
    }
    catch(ExceptFigure& ex){
        std::cout << ex.what() << std::endl;
    }

    try
    {
        TriangleRect trR(3, 10, 20, 30, 50, 60, 70);
        trR.get_value();
    }
    catch(ExceptFigure& ex){
        std::cout << ex.what() << std::endl;
    }

    try
    {
        TriangleRect trR2(3, 10, 20, 30, 40, 50, 90);
        trR2.get_value();
    }
    catch(ExceptFigure& ex){
        std::cout << ex.what() << std::endl;
    }

    try
    {
        TriangleIsos trI(3, 10, 20, 10, 50, 60, 50);
        trI.get_value();
    }
    catch(ExceptFigure& ex){
        std::cout << ex.what() << std::endl;
    }

    try
    {
        TriangleEqual trEq(3, 30, 30, 30, 60, 60, 60);
        trEq.get_value();
    }
    catch(ExceptFigure& ex){
        std::cout << ex.what() << std::endl;
    }

    try
    {
        Quadrangle q(4, 10,20,30,40,50,60,70,80);
        q.get_value();
    }
    catch(ExceptFigure& ex){
        std::cout << ex.what() << std::endl;
    }

    try
    {
        Rectangle re(4, 10,20, 10, 20, 90, 90, 90, 90);
        re.get_value();
    }
    catch(ExceptFigure& ex){
        std::cout << ex.what() << std::endl;
    }
    try
    {
        Square s(4, 20, 20, 20, 20, 90, 90, 90, 90);
        s.get_value();
    }
    catch(ExceptFigure& ex){
        std::cout << ex.what() << std::endl;
    }

    try
    {
        Parallelogram p(4, 20, 30, 20, 30, 30, 40, 30, 40);
        p.get_value();
    }
    catch(ExceptFigure& ex){
        std::cout << ex.what() << std::endl;
    }

    try
    {
        Romb romb(4, 30, 30, 30, 30, 30, 40, 30, 40);
        romb.get_value();
    }
    catch(ExceptFigure& ex){
        std::cout << ex.what() << std::endl;
    }
    try
    {
        Romb romb(4, 20, 30, 30, 30, 120, 60, 120, 60);
        romb.get_value();
    }
    catch(ExceptFigure& ex){
        std::cout << ex.what() << std::endl;
    }


}
