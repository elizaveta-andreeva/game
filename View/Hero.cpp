
#include "Hero.h"

Hero::Hero(int x, int y, int width, int height): x(x), y(y), width(width), height(height), texture() {
    texture.loadFromFile("../Images/main_hero.png");
    SpriteStuff.setTexture(texture);
    SpriteStuff.setTextureRect(sf::IntRect(0, 0, 200, 270));
}

Hero::~Hero() {

}

void Hero::draw(sf::RenderTarget *target, int x, int y, Direction direction) {
    SpriteStuff.setPosition(x, y);
    float WidgetWidth = (float) width * 4 / (float) texture.getSize().x;
    float WidgetHeight = (float) height * 4 / (float) texture.getSize().y;
    SpriteStuff.setScale(WidgetWidth, WidgetHeight);
    switch (direction) {
        case Direction::DOWN:
            SpriteStuff.setTextureRect(sf::IntRect(0, 0, 200, 290));
            break;
        case Direction::UP:
            SpriteStuff.setTextureRect(sf::IntRect(0, 300, 200, 270));
            break;
        case Direction::LEFT:
            SpriteStuff.setTextureRect(sf::IntRect(0, 570, 200, 270));
            break;
        case Direction::RIGHT:
            SpriteStuff.setTextureRect(sf::IntRect(0, 840, 200, 270));
            break;
        default:

            break;
    }
//    SpriteStuff.setTextureRect(sf::IntRect(0, 0, 200, 270));

    target->draw(SpriteStuff);
}
