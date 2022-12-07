#include "cmp_hurt_player.h"
#include <engine.h>

using namespace std;
using namespace sf;

void HurtComponent::update(double dt) {
  if (auto pl = _player.lock()) { // Is the player still alive? // see https://en.cppreference.com/w/cpp/memory/weak_ptr/lock
    if (length(pl->getPosition() - _parent->getPosition()) < 25.0) {
      pl->setForDelete();
      _parent->setForDelete();
    }
  }
}

HurtComponent::HurtComponent(Entity* p)
    : Component(p), _player(_parent->scene->ents.find("player")[0]) {}
