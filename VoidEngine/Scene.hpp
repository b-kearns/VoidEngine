#ifndef Scene_hpp
#define Scene_hpp

#include "GameObjectCollection.hpp"

class Scene
{
public:
	Scene();

	virtual void onCreate();
	virtual void onDestroy();

	virtual void onActivate();
	virtual void onDeactivate();

	virtual void handleInput();
	virtual void update();
	virtual void draw();
private:
	GameObjectCollection objectCollection;
};

#endif // !Scene_hpp
