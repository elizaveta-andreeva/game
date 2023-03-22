
#ifndef OOP_LAB1_APPLICATION_H
#define OOP_LAB1_APPLICATION_H

#include "Readers/ConsoleCommandReader.h"
#include "Controller.h"
#include "Log/Observers/GameObserver.h"
#include "FileInputCommands.h"
#include "FieldGeneration/FieldGenerator.h"
#include "FileInputExeption.h"
#include <SFML/Graphics.hpp>

class Application {
private:
    bool game;
    IGameObserver* game_observer;
    sf::RenderWindow* window;
    sf::VideoMode videoMode;
    sf::Event ev{};
public:
    void start();
    void load();
    void exit();
    Application();
    void initWindow(int field_height, int field_width);
    ~Application();
};


#endif //OOP_LAB1_APPLICATION_H
