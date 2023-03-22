
#ifndef OOP_LAB1_TREE_H
#define OOP_LAB1_TREE_H


#include <SFML/Graphics.hpp>

class Tree {
protected:
    int x, y, width, height;
    sf::Texture texture;
    sf::Sprite SpriteStuff;
public:
    Tree(int x, int y, int width, int height);
    ~Tree();
    void draw(sf::RenderTarget* target, int x, int y);
};


#endif //OOP_LAB1_TREE_H
