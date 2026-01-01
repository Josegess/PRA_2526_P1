#include "Drawing.h"
#include "Circle.h"
#include "Square.h"
#include <iostream>

Drawing::Drawing() {
    // Se instancia la lista dinámica para almacenar punteros a Shape
    shapes = new ListArray<Shape*>();
}

Drawing::~Drawing() {
    // Libera la memoria dinámica reservada para el contenedor de la lista
    delete shapes;
}

void Drawing::add_front(Shape* shape) {
    // Inserta la figura al frente del dibujo (índice 0)
    shapes->insert(0, shape);
}

void Drawing::add_back(Shape* shape) {
    // Añade la figura al fondo del dibujo
    shapes->append(shape);
}

void Drawing::print_all() {
    // Recorre la lista y muestra la información de cada figura
    for (int i = 0; i < shapes->size(); i++) {
        shapes->get(i)->print();
    }
}

double Drawing::get_area_all_circles() {
    double total_area = 0;
    for (int i = 0; i < shapes->size(); i++) {
        Shape* s = shapes->get(i);
        // Comprobación de tipo dinámica para sumar solo áreas de círculos
        if (dynamic_cast<Circle*>(s)) {
            total_area += s->area();
        }
    }
    return total_area;
}

void Drawing::move_squares(double incX, double incY) {
    for (int i = 0; i < shapes->size(); i++) {
        Shape* s = shapes->get(i);
        // Identifica si la figura es un Square para aplicar la traslación
        if (dynamic_cast<Square*>(s)) {
            s->translate(incX, incY);
        }
    }
}
