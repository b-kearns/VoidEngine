#include "Scene.hpp"

Scene::Scene()
{
}

void Scene::onCreate()
{
}

void Scene::onDestroy()
{
}

void Scene::onActivate()
{
}

void Scene::onDeactivate()
{
}

void Scene::handleInput()
{
}

void Scene::update(float deltaTime)
{
	objectCollection.update(deltaTime);
}

void Scene::draw(Window& window)
{
	objectCollection.draw(window);
}
