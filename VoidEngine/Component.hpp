#ifndef Component_hpp
#define Component_hpp

class GameObject;

class Component
{
public:
	Component(GameObject* owner) : owner(owner){}

	virtual void awake() {};
	virtual void start() {};

	virtual void update() {};
	virtual void render() {};

protected:
	GameObject* owner;
};
#endif // !Component_hpp
