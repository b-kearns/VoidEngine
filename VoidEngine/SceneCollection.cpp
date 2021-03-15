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
	if (!currentScene) { return; }
	currentScene->update(deltaTime);
}

void SceneCollection::draw(Window& window)
{
	if (!currentScene) { return; }
	currentScene->draw(window);
}
