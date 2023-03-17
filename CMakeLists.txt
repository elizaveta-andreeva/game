cmake_minimum_required(VERSION 3.24)
project(OOP_lab1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXE_LINKER_FLAGS "-static -static-libgcc")
set(SFML_STATIC_LIBRARIES TRUE)


add_executable(OOP_lab1 main.cpp Objects/Player.cpp Objects/Player.h Objects/Cell.cpp Objects/Cell.h Objects/Field.cpp Objects/Field.h View/PrintField.cpp View/PrintField.h Events/Event.h View/PrintCell.cpp View/PrintCell.h Events/GoodEvents.cpp Events/GoodEvents.h Events/BadEvents.cpp Events/BadEvents.h Events/Enemy.cpp Events/Enemy.h Events/Trap.cpp Events/Trap.h Events/Food.cpp Events/Food.h Events/Money.cpp Events/Money.h Factory/Factory.h Factory/EnemyFactory.cpp Factory/EnemyFactory.h Factory/MoneyFactory.cpp Factory/MoneyFactory.h Factory/FoodFactory.cpp Factory/FoodFactory.h Factory/TrapFactory.cpp Factory/TrapFactory.h Events/Exit.cpp Events/Exit.h Factory/ExitFactory.cpp Factory/ExitFactory.h Readers/ConsoleCommandReader.cpp Readers/ConsoleCommandReader.h Controller.cpp Controller.h Application.cpp Application.h Direction.h Log/Observers/FieldObserver.cpp Log/Observers/FieldObserver.h Log/Observers/EventObserver.cpp Log/Observers/EventObserver.h Log/Observers/PlayerObserver.cpp Log/Observers/PlayerObserver.h Log/Log.cpp Log/Log.h Log/ILogger.h Log/FileLogger.cpp Log/FileLogger.h Log/ConsoleLogger.cpp Log/ConsoleLogger.h Log/Message.cpp Log/Message.h Log/Level.h Log/Observers/GameObserver.cpp Log/Observers/GameObserver.h Log/Observers/IGameObserver.h Log/Observers/IFieldObserver.h Log/Observers/IEventObserver.h Log/Observers/IPlayerObserver.h InputCommands.h FileInputCommands.cpp FileInputCommands.h Readers/IReader.h Log/Observers/IFileInputObserver.h Log/Observers/FileInputObserver.cpp Log/Observers/FileInputObserver.h Readers/ConsoleCommandReader.cpp FieldGeneration/FieldGenerator.cpp FieldGeneration/FieldGenerator.h FieldGeneration/MoneyRule.cpp FieldGeneration/MoneyRule.h FieldGeneration/EnemyRule.cpp FieldGeneration/EnemyRule.h FieldGeneration/TrapRule.cpp FieldGeneration/TrapRule.h FieldGeneration/FoodRule.cpp FieldGeneration/FoodRule.h FieldGeneration/BarrierRule.cpp FieldGeneration/BarrierRule.h FieldGeneration/GameDifficulty.h FieldGeneration/ExitPositionRule.cpp FieldGeneration/ExitPositionRule.h FileInputExeption.cpp FileInputExeption.h InputDataExeption.cpp InputDataExeption.h)

set(SFML_DIR "C:\\sfml\\SFML-2.5.1\\lib\\cmake\\SFML")

target_link_libraries(OOP_lab1 sfml-graphics)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML 2.5 REQUIRED graphics network audio window system)