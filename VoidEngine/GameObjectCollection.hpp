#ifndef GameObjectCollection_hpp
#define GameObjectCollection_hpp

#include "GameObject.hpp"

#include <memory>
#include <vector>

typedef std::vector<std::shared_ptr<GameObject>>	ObjectList;
typedef std::shared_ptr<GameObject>					ObjectPtr;

class GameObjectCollection
{
public:
	GameObjectCollection();

	void add(ObjectPtr object);
	void add(ObjectList& objects);

	void update();
	void draw();
private:
	ObjectList objects;
	ObjectList newObjectBuffer;
};

#endif // !GameObjectCollection_hpp
