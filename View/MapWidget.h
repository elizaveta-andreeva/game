
#ifndef OOP_LAB1_MAPWIDGET_H
#define OOP_LAB1_MAPWIDGET_H


#include <SFML/Graphics.hpp>

class MapWidget {
protected:
    int x, y, width, height;
    sf::Texture texture;
public:
    MapWidget(int x, int y, int width, int height);
    ~MapWidget ();
    void draw(sf::RenderTarget* target);
};


#endif //OOP_LAB1_MAPWIDGET_H
