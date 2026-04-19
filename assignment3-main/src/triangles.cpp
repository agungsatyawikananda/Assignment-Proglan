#include <iostream>
#include <string>
#include <math.h>

#include "include/triangles.hpp"

using namespace std;

const float Toleransi = 0.001f;

bool isEqual(float a, float b) {
    return fabs(a - b) < Toleransi;
}

Triangle::Triangle() 
    : _t1(Point2D()), _t2(Point2D()), _t3(Point2D()) {}  

Triangle::Triangle(Point2D t1, Point2D t2, Point2D t3)
    : _t1(t1), _t2(t2), _t3(t3) {}                      

void Triangle::SetT1(Point2D t1) { _t1 = t1; }
void Triangle::SetT2(Point2D t2) { _t2 = t2; }
void Triangle::SetT3(Point2D t3) { _t3 = t3; }

string Triangle::TriangleType() {

    float a = _t1.DistanceTo(_t2);    
    float b = _t2.DistanceTo(_t3);  
    float c = _t1.DistanceTo(_t3);   

    if (isEqual(a, b) && isEqual(b, c)) {
        return "sama sisi";
    }

    float aa = a * a;
    float bb = b * b;
    float cc = c * c;

    if (isEqual(aa + bb, cc) || isEqual(aa + cc, bb) || isEqual(bb + cc, aa)) {
        return "siku-siku";
    }
   
    if (isEqual(a, b) || isEqual(b, c) || isEqual(a, c)) {
        return "sama kaki";
    }
  
    return "sembarang";
}