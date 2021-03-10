#ifndef GameObject_hpp
#define GameObject_hpp

#include "Component.hpp"

#include <memory>
#include <vector>

typedef std::vector<std::shared_ptr<Component>> ComponentList;

class GameObject
{
public:
	GameObject();

	void awake();
	void start();

	void update();
	void render();
private:
	ComponentList components;
};
#endif // !GameObject_hpp
