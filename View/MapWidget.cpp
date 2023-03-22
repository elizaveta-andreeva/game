
#include "MapWidget.h"

MapWidget::~MapWidget() {

}

MapWidget::MapWidget(int x, int y, int width, int height): x(x), y(y), width(width), height(height), texture(){
    texture.loadFromFile("../Images/grass2.png");
}

void MapWidget::draw(sf::RenderTarget* target) {
    sf::Sprite SpriteStuff;
    SpriteStuff.setTexture(texture);
    SpriteStuff.setPosition(x, y);
    float WidgetWidth = (float) width / (float) texture.getSize().x;
    float WidgetHeight = (float) height / (float) texture.getSize().y;
    SpriteStuff.setScale(WidgetWidth, WidgetHeight);

    target->draw(SpriteStuff);
}
