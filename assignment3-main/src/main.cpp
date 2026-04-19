#include <iostream>
#include <string>
#include <vector>
#include <math.h>

#include "include/point2d.hpp"
#include "include/triangles.hpp"

using namespace std;

int main(int argc, char ** argv)
{
    vector<Triangle> triangles;

    int n;
    cout << "Masukkan jumlah segitiga: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        float x1, y1, z1;
        float x2, y2, z2;
        float x3, y3, z3;

        cout << "\n--- Segitiga " << (i + 1) << " ---" << endl;
        cout << "Titik 1 (x y z): "; cin >> x1 >> y1 >> z1;
        cout << "Titik 2 (x y z): "; cin >> x2 >> y2 >> z2;
        cout << "Titik 3 (x y z): "; cin >> x3 >> y3 >> z3;

        Point2D t1(x1, y1, z1);
        Point2D t2(x2, y2, z2);
        Point2D t3(x3, y3, z3);

        Triangle triangle(t1, t2, t3);
        triangles.push_back(triangle);
    }

    cout << "\n=== HASIL ===" << endl;
    for (size_t i = 0; i < triangles.size(); i++) {
        cout << "Segitiga " << (i + 1) << ": " << triangles[i].TriangleType() << endl;
    }

    return 0;
}