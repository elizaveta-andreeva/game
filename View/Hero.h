
#ifndef OOP_LAB1_HERO_H
#define OOP_LAB1_HERO_H


#include <SFML/Graphics.hpp>
#include "../Direction.h"

class Hero {
protected:
    int x, y, width, height;
    sf::Texture texture;
    sf::Sprite SpriteStuff;
public:
    Hero(int x, int y, int width, int height);
    ~Hero();
    void draw(sf::RenderTarget* target, int x, int y, Direction direction);
};


#endif //OOP_LAB1_HERO_H
