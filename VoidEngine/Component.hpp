#ifndef Component_hpp
#define Component_hpp

#include "Window.hpp"

class GameObject;

class Component
{
public:
	Component(GameObject* owner) : owner(owner){}

	virtual void awake() {};
	virtual void start() {};

	virtual void update(float deltaTime) {};
	virtual void draw(Window& window) {};

protected:
	GameObject* owner;
};
#endif // !Component_hpp
