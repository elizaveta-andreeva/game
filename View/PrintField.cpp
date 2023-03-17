#include "PrintField.h"

#include <iostream>

void PrintField::printLine(int width) {
    std::cout << "+";
    while (width > 0) {
        for (int i = 0; i < 3; i++)
            std::cout << "-";
        std::cout << "+";
        width--;
    }
    std::cout << '\n';
}

void PrintField::print(Field &field, sf::RenderTarget& target) {
    PrintCell print_cell;
    target.draw(*this->field_shape);
    for (int i = 0; i < field.getHeight(); i++) {
        for (int j = 0; j < field.getWidth(); j++) {
            print_cell.printCell(field.getCell(i, j), field, target, i, j);
        }
    }
}

PrintField::PrintField(Field *&field) {
    field_shape = new sf::RectangleShape(sf::Vector2f(field->getHeight() * 50, field->getWidth() * 50));
    field_shape->setFillColor(sf::Color::Green);
}

PrintField::~PrintField() {
    delete field_shape;
}



