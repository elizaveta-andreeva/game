#include "PrintCell.h"
#include <typeinfo>
#include <SFML/Graphics.hpp>

void PrintCell::printCell(Cell cell, Field &field,  sf::RenderTarget& target, int i, int j) {
    float cell_size = 40;
    sf::RectangleShape cell_shape(sf::Vector2f(cell_size, cell_size));
    if (cell.getActive()) {
        cell_shape.setFillColor(sf::Color::Black);
    } else {
        if (cell.getBarrier())
            cell_shape.setFillColor(sf::Color::Cyan);
        else {
            if (!(cell.getEvent()))
                cell_shape.setFillColor(sf::Color::Green);
            if (dynamic_cast<Enemy *>(cell.getEvent()))
                cell_shape.setFillColor(sf::Color::Red);
            if (dynamic_cast<Money *>(cell.getEvent()))
                cell_shape.setFillColor(sf::Color::Yellow);
            if (dynamic_cast<Food *>(cell.getEvent()))
                cell_shape.setFillColor(sf::Color::White);
            if (dynamic_cast<Trap *>(cell.getEvent()))
                cell_shape.setFillColor(sf::Color::Blue);
            if (dynamic_cast<Exit *>(cell.getEvent()))
                cell_shape.setFillColor(sf::Color::Magenta);
        }
    }
    cell_shape.setPosition(sf::Vector2f(cell_size * j + 10, cell_size * i + 10));
    target.draw(cell_shape);
}

PrintCell::PrintCell() = default;
