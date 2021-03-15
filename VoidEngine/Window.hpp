#ifndef Window_hpp
#define Window_hpp

#include <SFML/Graphics.hpp>

class Window
{
public:
	Window(const std::string& windowName);

	void update();

	void beginDraw();
	void draw(const sf::Drawable& drawable);
	void endDraw();

	bool isOpen() const;

	sf::Vector2u getCenter();

private:
	sf::RenderWindow window;
};
#endif // !Window_hpp
