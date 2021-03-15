#include "GameObjectCollection.hpp"

GameObjectCollection::GameObjectCollection()
{
}

void GameObjectCollection::add(ObjectPtr object)
{
	newObjectBuffer.push_back(object);
}

void GameObjectCollection::add(ObjectList& objects)
{
	newObjectBuffer.insert(newObjectBuffer.end(), objects.begin(), objects.end());
}

void GameObjectCollection::update(float deltaTime)
{
	if (objects.size() == 0) { return; }
	for (auto& o : objects) { o->update(deltaTime); }
}

void GameObjectCollection::draw(Window& window)
{
	if (objects.size() == 0) { return; }
	for (auto& o : objects) { o->draw(window); }
}

void GameObjectCollection::processNewObjects()
{
	if (newObjectBuffer.size() > 0) 
	{
		for (const auto& o : newObjectBuffer)
		{
			o->awake();
		}

		for (const auto& o : newObjectBuffer)
		{
			o->start();
		}

		objects.insert(objects.end(), newObjectBuffer.begin(), newObjectBuffer.end());

		newObjectBuffer.clear();
	}
}

void GameObjectCollection::processRemovals()
{
	auto objIterator{ objects.begin() };
	while (objIterator != objects.end()) 
	{
		auto obj = **objIterator;

		if (obj.isQueuedForRemoval()) 
		{
			objIterator = objects.erase(objIterator);
		}
		else
		{
			++objIterator;
		}
	}
}
