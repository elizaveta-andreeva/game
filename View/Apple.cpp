
#include "Apple.h"

Apple::Apple(int x, int y, int width, int height): x(x), y(y), width(width), height(height), texture() {
    texture.loadFromFile("../Images/apple.png");
    SpriteStuff.setTexture(texture);
}

Apple::~Apple() {

}

void Apple::draw(sf::RenderTarget *target, int x, int y) {
    SpriteStuff.setPosition(x, y);
    float WidgetWidth = (float) width / (float) texture.getSize().x;
    float WidgetHeight = (float) height / (float) texture.getSize().y;
    SpriteStuff.setScale(WidgetWidth, WidgetHeight);

    target->draw(SpriteStuff);
}
