#pragma once
#include "cmp_physics.h"
#include <ecm.h>

class HurtComponent : public Component {
protected:
  void fire() const;
  std::weak_ptr<Entity> _player; //What does a weak pointer do? Ans: A weak pointer is a smart pointer that does not increase the reference count of the object it points to. It is used to point to an object that is managed by shared_ptr. It is used to break the reference cycle between two shared_ptr objects.

public:
  void update(double dt) override;
  void render() override {}
  explicit HurtComponent(Entity* p);
  HurtComponent() = delete;
};
