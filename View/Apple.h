
#ifndef OOP_LAB1_APPLE_H
#define OOP_LAB1_APPLE_H


#include <SFML/Graphics.hpp>

class Apple {
protected:
    int x, y, width, height;
    sf::Texture texture;
    sf::Sprite SpriteStuff;
public:
    Apple(int x, int y, int width, int height);
    ~Apple();
    void draw(sf::RenderTarget* target, int x, int y);
};


#endif //OOP_LAB1_APPLE_H
