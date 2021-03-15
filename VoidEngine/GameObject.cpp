#include "GameObject.hpp"
#include "Window.hpp"

GameObject::GameObject()
	:queuedForRemoval(false)
{
}

void GameObject::awake()
{
	for (auto c : components) { c->awake(); }
}

void GameObject::start()
{
	for (auto c : components) { c->start(); }
}

void GameObject::update(float deltaTime)
{
	for (auto c : components) { c->update(deltaTime); }
}

void GameObject::draw(Window& window)
{
	for (auto c : components) { c->draw(window); }
}

bool GameObject::isQueuedForRemoval()
{
	return queuedForRemoval;
}
