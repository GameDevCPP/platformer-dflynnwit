//"scene_menu.cpp"
#include "scene_menu.h"
#include "../components/cmp_text.h"
#include "../game.h"
#include <SFML/Window/Keyboard.hpp>

using namespace std;
using namespace sf;

void MenuScene::Load() {
    auto txt = makeEntity();
    auto t = txt->addComponent<TextComponent>(
            "Movement Demos\nPress 1 for Steering\nPress 2 for Pathfinding");
    setLoaded(true);
}

void MenuScene::Update(const double& dt) {
    if (sf::Keyboard::isKeyPressed(Keyboard::Num1)) {
        //todo
    } else if (sf::Keyboard::isKeyPressed(Keyboard::Num2)) {
        //todo
    }
    Scene::Update(dt);
}