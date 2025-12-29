#include "Shape.h"

Shape::Shape(std::string color) {
    if (color != "red" && color != "green" && color != "blue") {
        throw std::invalid_argument("El color debe ser 'red', 'green' o 'blue'");
    }
    this->color = color;
}

std::string Shape::get_color() const {
    return color;
}

void Shape::set_color(std::string c) {
    if (c != "red" && c != "green" && c != "blue") {
        throw std::invalid_argument("Color no válido. Use 'red', 'green' o 'blue'");
    }
    color = c;
}
