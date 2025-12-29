#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <cmath>
#include "Shape.h"
#include "Point2D.h"

class Circle : public Shape {
    private:
        Point2D center;
        double radius;

    public:
        Circle() : Shape(), center(0, 0), radius(1) {}

        Circle(std::string color, Point2D center, double radius) : 
            Shape(color), center(center), radius(radius) {}

        Point2D get_center() const { return center; }
        void set_center(Point2D p) { center = p; }

        double get_radius() const { return radius; }
        void set_radius(double r) { radius = r; }

        double area() const override {
            return M_PI * std::pow(radius, 2); 
        }

        double perimeter() const override {
            return 2 * M_PI * radius;
        }

        void translate(double incX, double incY) override {
            center.x += incX;
            center.y += incY;
        }

        void print() override {
            std::cout << *this << std::endl;
        }

        friend std::ostream& operator<<(std::ostream &out, const Circle &c) {
            out << "[Circle: color=" << c.color 
                << "; center=" << c.center 
                << "; radius=" << c.radius << "]";
            return out;
        }
};

#endif
