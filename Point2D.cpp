#include "Point2D.h"
#include <cmath>


	Point2D::Point2D(double x, double y){
		this-> x = x;
		this-> y = y;
	}

        double Point2D::distance(const Point2D &p1, const Point2D &p2) {
            return std::sqrt(std::pow(p1.x - p2.x, 2) + std::pow(p1.y - p2.y, 2));
        }

        bool operator==(const Point2D &p1, const Point2D &p2) {
            return p1.x == p2.x && p1.y == p2.y;
        }

        bool operator!=(const Point2D &p1, const Point2D &p2) {
            return !(p1 == p2);
        }

        std::ostream& operator<<(std::ostream &out, const Point2D &p) {
            out << "(" << p.x << "," << p.y << ")";
            return out;
        }



