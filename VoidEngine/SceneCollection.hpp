#ifndef SceneCollection_hpp
#define SceneCollection_hpp

#include "Scene.hpp"
#include "Window.hpp"

#include <unordered_map>
#include <memory>

typedef std::unordered_map<unsigned int, std::shared_ptr<Scene>>	SceneMap;
typedef std::shared_ptr<Scene>										ScenePtr;

class SceneCollection
{
public:
	SceneCollection();

	void init();

	void handleInput();
	void update(float deltaTime);
	void draw(Window& window);

private:
	SceneMap scenes;
	ScenePtr currentScene;
};

#endif // !SceneCollection_hpp
