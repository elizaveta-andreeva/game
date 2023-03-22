
#ifndef OOP_LAB1_PRINTCELL_H
#define OOP_LAB1_PRINTCELL_H

#include "../Objects/Cell.h"
#include "../Objects/Field.h"
#include "Coin.h"
#include "Apple.h"
#include "SpikeTrap.h"
#include "Door.h"
#include "Monster.h"
#include "Tree.h"
#include "Hero.h"
#include "../Direction.h"
#include <SFML/Graphics.hpp>
#include <iostream>

class PrintCell {
protected:
    Coin *coin;
    Apple *apple;
    SpikeTrap *spike_trap;
    Door *door;
    Monster *monster;
    Hero *hero;
    Tree *tree;
    int cell_size = 80;
public:
    PrintCell();
    void printCell(Cell cell, Field &field, sf::RenderTarget *target, Direction direction);
};


#endif //OOP_LAB1_PRINTCELL_H
