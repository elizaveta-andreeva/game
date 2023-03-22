#include "PrintCell.h"
#include <SFML/Graphics.hpp>

void PrintCell::printCell(Cell cell, Field &field,  sf::RenderTarget *target, Direction direction) {
    sf::RectangleShape cell_shape(sf::Vector2f(cell_size, cell_size));
    if (cell.getActive()) {
        hero->draw(target, cell.getY() * cell_size, cell.getX() * cell_size, direction);
    } else {
        if (cell.getBarrier())
            tree->draw(target, cell.getY() * cell_size, cell.getX() * cell_size);
        else {
            if (dynamic_cast<Enemy *>(cell.getEvent()))
                monster->draw(target, cell.getY() * cell_size, cell.getX() * cell_size);
            if (dynamic_cast<Money *>(cell.getEvent()))
                coin->draw(target, cell.getY() * cell_size, cell.getX() * cell_size);
            if (dynamic_cast<Food *>(cell.getEvent()))
                apple->draw(target, cell.getY() * cell_size, cell.getX() * cell_size);
            if (dynamic_cast<Trap *>(cell.getEvent()))
                spike_trap->draw(target, cell.getY() * cell_size, cell.getX() * cell_size);
            if (dynamic_cast<Exit *>(cell.getEvent()))
                door->draw(target, cell.getY() * cell_size, cell.getX() * cell_size);
        }
    }
}

PrintCell::PrintCell() {
    coin = new Coin(0, 0, cell_size, cell_size);
    apple = new Apple(0, 0, cell_size, cell_size);
    spike_trap = new SpikeTrap(0, 0, cell_size, cell_size);
    door = new Door(0, 0, cell_size, cell_size);
    monster = new Monster(0, 0, cell_size, cell_size);
    tree = new Tree(0, 0, cell_size, cell_size);
    hero = new Hero(0, 0, cell_size, cell_size);
};
