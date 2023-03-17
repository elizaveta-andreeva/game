
#ifndef OOP_LAB1_PRINTFIELD_H
#define OOP_LAB1_PRINTFIELD_H
#include "../Objects/Field.h"
#include "PrintCell.h"
#include <windows.h>
#include <SFML/Graphics.hpp>

class PrintField {
private:
    sf::RectangleShape *field_shape;
public:
    void print(Field& field, sf::RenderTarget& target);

    PrintField(Field *&field);
    void printLine(int width);
    ~PrintField();
};

#endif //OOP_LAB1_PRINTFIELD_H
