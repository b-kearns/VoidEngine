#include "SceneCollection.hpp"

SceneCollection::SceneCollection()
{
}

void SceneCollection::init()
{
}

void SceneCollection::handleInput()
{
}

void SceneCollection::update(float deltaTime)
{
	currentScene->update(deltaTime);
}

void SceneCollection::draw(Window& window)
{
	currentScene->draw(window);
}
