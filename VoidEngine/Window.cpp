#include "Window.hpp"

Window::Window(const std::string& windowName)
    :window(sf::VideoMode(800, 600), windowName, sf::Style::Close)
{
    window.setVerticalSyncEnabled(true);
}

void Window::update()
{
    sf::Event event;
    if (window.pollEvent(event) && event.type == sf::Event::Closed) { window.close(); }
}

void Window::beginDraw()
{
    window.clear(sf::Color::White);
}

void Window::draw(const sf::Drawable& drawable)
{
    window.draw(drawable);
}

void Window::endDraw()
{
    window.display();
}

bool Window::isOpen() const
{
    return window.isOpen();
}

sf::Vector2u Window::getCenter()
{
    return sf::Vector2u(window.getSize().x / 2, window.getSize().y / 2);
}
