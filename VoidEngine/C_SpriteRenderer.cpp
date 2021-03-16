#include "C_SpriteRenderer.hpp"

C_SpriteRenderer::C_SpriteRenderer(GameObject* owner)
	:Component(owner), currentTextureID(-1), allocator(nullptr)
{
}

void C_SpriteRenderer::draw(Window& window)
{
	window.draw(sprite);
}

void C_SpriteRenderer::load(int id)
{
	if (id >= 0) 
	{
		currentTextureID = id;
		std::shared_ptr<sf::Texture> texture{ allocator->get(id) };
		sprite.setTexture(*texture);
	}
}

void C_SpriteRenderer::setTextureAllocator(TextureAllocatorPtr allocator)
{
	this->allocator = allocator;
}

void C_SpriteRenderer::setTextureRect(int x, int y, int width, int height)
{
	sprite.setTextureRect(sf::IntRect(x, y, width, height));
}

void C_SpriteRenderer::setTextureRect(const sf::IntRect& rect)
{
	sprite.setTextureRect(rect);
}

void C_SpriteRenderer::setScale(float x, float y)
{
	sprite.setScale(x, y);
}
