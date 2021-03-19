#include "SceneCollection.hpp"

SceneCollection::SceneCollection()
	: scenes(0), currentScene(0), insertedSceneID(0)
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

void SceneCollection::switchTo(unsigned int id)
{
	auto it{scenes.find(id)};

	if (it != scenes.end()) 
	{
		if (currentScene) 
		{
			currentScene->onDeactivate();
		}

		currentScene = it->second;

		currentScene->onActivate();
	}
}

/// <summary>
/// Add takes the given scene, creates a pair of type (uint, scene) and calls the scenes onCreate method.
/// The ID of the inserted scene is returned and insertedSceneID is then incremented.
/// </summary>
/// <param name="scene"></param>
/// <returns></returns>
unsigned int SceneCollection::add(ScenePtr scene)
{
	auto inserted{scenes.insert(std::make_pair(insertedSceneID, scene))};

	inserted.first->second->onCreate();

	return insertedSceneID++;
}

/// <summary>
/// Remove searches for the given ID, removes it if found, and calls the scenes onDestroy method.
/// </summary>
/// <param name="id"></param>
void SceneCollection::remove(unsigned int id)
{
	auto it{scenes.find(id)};

	if (it != scenes.end()) 
	{
		if (currentScene == it->second) 
		{
			//If removing our current scene, we must set currentScene to a nullptr
			currentScene = nullptr;
		}

		it->second->onDestroy();

		scenes.erase(it);
	}
}
