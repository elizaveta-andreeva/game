
#ifndef OOP_LAB1_DOOR_H
#define OOP_LAB1_DOOR_H


#include <SFML/Graphics.hpp>

class Door {
protected:
    int x, y, width, height;
    sf::Texture texture;
    sf::Sprite SpriteStuff;
public:
    Door(int x, int y, int width, int height);
    ~Door();
    void draw(sf::RenderTarget* target, int x, int y);
};


#endif //OOP_LAB1_DOOR_H
