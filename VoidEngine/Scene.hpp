#ifndef Scene_hpp
#define Scene_hpp

#include "GameObjectCollection.hpp"
#include "Window.hpp"

class Scene
{
public:
	Scene();

	virtual void onCreate() = 0;
	virtual void onDestroy() = 0;

	virtual void onActivate();
	virtual void onDeactivate();

	virtual void handleInput();
	virtual void update(float deltaTime);
	virtual void draw(Window& window);
protected:
	GameObjectCollection objectCollection;
};

#endif // !Scene_hpp
