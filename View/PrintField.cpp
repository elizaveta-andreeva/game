#include "PrintField.h"

void PrintField::print(Field &field, sf::RenderTarget* target, Direction direction) {
    map_widget->draw(target);
    for (int i = 0; i < field.getHeight(); i++) {
        for (int j = 0; j < field.getWidth(); j++) {
            print_cell.printCell(field.getCell(i, j), field, target, direction);
        }
    }
}

PrintField::PrintField(Field *&field) {
    map_widget = new MapWidget(0, 0, field->getWidth() * 80, field->getHeight() * 80);
//    PrintCell *print_cell = new PrintCell;
}

PrintField::~PrintField() {
//    delete print_cell;
}



