#include "GameObjectCollection.hpp"

GameObjectCollection::GameObjectCollection()
{
}

void GameObjectCollection::add(ObjectPtr object)
{
}

void GameObjectCollection::add(ObjectList& objects)
{
}

void GameObjectCollection::update(float deltaTime)
{
	for (auto o : objects) { o->update(deltaTime); }
}

void GameObjectCollection::draw(Window& window)
{
	for (auto o : objects) { o->draw(window); }
}
