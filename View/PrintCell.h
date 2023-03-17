#pragma once
//#ifndef OOP_LAB1_PRINTCELL_H
//#define OOP_LAB1_PRINTCELL_H

#include "../Objects/Cell.h"
#include "../Objects/Field.h"
#include <SFML/Graphics.hpp>
#include <iostream>

class PrintCell {
public:
    PrintCell();
    void printCell(Cell cell, Field &field, sf::RenderTarget &target, int i, int j);
};


//#endif //OOP_LAB1_PRINTCELL_H
