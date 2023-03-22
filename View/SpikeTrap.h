
#ifndef OOP_LAB1_SPIKETRAP_H
#define OOP_LAB1_SPIKETRAP_H


#include <SFML/Graphics.hpp>

class SpikeTrap {
protected:
    int x, y, width, height;
    sf::Texture texture;
    sf::Sprite SpriteStuff;
public:
    SpikeTrap(int x, int y, int width, int height);
    ~SpikeTrap();
    void draw(sf::RenderTarget* target, int x, int y);
};


#endif //OOP_LAB1_SPIKETRAP_H
