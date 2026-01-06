#ifndef POINT2D_H
#define POINT2D_H

#include <ostream>
#include <cmath>

class Point2D {
    public:
        double x;
        double y;

        Point2D(double x = 0, double y = 0);

        static double distance(const Point2D &p1, const Point2D &p2);

        friend bool operator==(const Point2D &p1, const Point2D &p2);

        friend bool operator!=(const Point2D &p1, const Point2D &p2);

        friend std::ostream& operator<<(std::ostream &out, const Point2D &p);
};

#endif
