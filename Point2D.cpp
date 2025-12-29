#ifndef SHAPE_H
#define SHAPE_H

#include <string>
#include "Point2D.h"

class Shape {
    protected:
        std::string color;

    public:
        Shape(std::string color = "red") : color(color) {}
        virtual ~Shape() {}

        std::string get_color() const { return color; }
        void set_color(std::string c) { color = c; }

        virtual double area() const = 0;
        virtual double perimeter() const = 0;
        virtual void translate(double dx, double dy) = 0;
        virtual void print() const = 0;
};

#endif
