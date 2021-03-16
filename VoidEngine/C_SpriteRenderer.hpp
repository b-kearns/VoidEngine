#ifndef SpriteRenderer_hpp
#define SpriteRenderer_hpp

#include "Component.hpp"
#include "ResourceAllocator.hpp"

typedef ResourceAllocator<sf::Texture>* TextureAllocatorPtr;

class C_SpriteRenderer : public Component
{
public:
	C_SpriteRenderer(GameObject* owner);

	void draw(Window& window) override;

	void load(int id);

	void setTextureAllocator(TextureAllocatorPtr allocator);

	void setTextureRect(int x, int y, int width, int height);
	void setTextureRect(const sf::IntRect& rect);

	void setScale(float x, float y);
private:
	TextureAllocatorPtr allocator;
	
	sf::Sprite sprite;

	int currentTextureID;
};

#endif // !SpriteRenderer_hpp
