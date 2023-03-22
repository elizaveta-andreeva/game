
#ifndef OOP_LAB1_MONSTER_H
#define OOP_LAB1_MONSTER_H


#include <SFML/Graphics.hpp>

class Monster {
protected:
    int x, y, width, height;
    sf::Texture texture;
    sf::Sprite SpriteStuff;
public:
    Monster(int x, int y, int width, int height);
    ~Monster();
    void draw(sf::RenderTarget* target, int x, int y);
};


#endif //OOP_LAB1_MONSTER_H
