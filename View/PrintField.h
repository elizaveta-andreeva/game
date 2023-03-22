
#ifndef OOP_LAB1_PRINTFIELD_H
#define OOP_LAB1_PRINTFIELD_H

#include "../Objects/Field.h"
#include "PrintCell.h"
#include "MapWidget.h"
#include "../Direction.h"
#include <windows.h>
#include <SFML/Graphics.hpp>

class PrintField {
private:
    MapWidget *map_widget;
    PrintCell print_cell;
public:
    void print(Field &field, sf::RenderTarget *target, Direction direction);
    PrintField(Field *&field);
    ~PrintField();
};

#endif //OOP_LAB1_PRINTFIELD_H
