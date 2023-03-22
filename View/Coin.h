
#ifndef OOP_LAB1_COIN_H
#define OOP_LAB1_COIN_H


#include <SFML/Graphics.hpp>

class Coin {
protected:
    int x, y, width, height;
    sf::Texture texture;
    sf::Sprite SpriteStuff;
public:
    Coin(int x, int y, int width, int height);
    ~Coin();
    void draw(sf::RenderTarget* target, int x, int y);
};


#endif //OOP_LAB1_COIN_H
