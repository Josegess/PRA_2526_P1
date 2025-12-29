#ifndef POINT2D_H
#define POINT2D_H

#include <ostream>
#include <cmath>

class Point2D {
    public:
        double x;
        double y;

        Point2D(double x = 0, double y = 0) : x(x), y(y) {}

        static double distance(const Point2D &p1, const Point2D &p2) {
            return std::sqrt(std::pow(p1.x - p2.x, 2) + std::pow(p1.y - p2.y, 2));
        }

        friend bool operator==(const Point2D &p1, const Point2D &p2) {
            return p1.x == p2.x && p1.y == p2.y;
        }

        friend bool operator!=(const Point2D &p1, const Point2D &p2) {
            return !(p1 == p2);
        }

        friend std::ostream& operator<<(std::ostream &out, const Point2D &p) {
            out << "(" << p.x << "," << p.y << ")";
            return out;
        }
};

#endif
