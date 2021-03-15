#ifndef GameObject_hpp
#define GameObject_hpp

#include "Component.hpp"

#include <memory>
#include <vector>

#include <SFML/Graphics.hpp>

typedef std::vector<std::shared_ptr<Component>> ComponentList;

class GameObject : sf::Transformable
{
public:
	GameObject();

	void awake();
	void start();

	void update();
	void draw();
private:
	ComponentList components;
};
#endif // !GameObject_hpp
