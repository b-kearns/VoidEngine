#include "Game.hpp"

Game::Game()
    :window("AlphaVoid")
{
    this->init();
}

void Game::init()
{
}

void Game::handleInput()
{
}

void Game::update()
{
    window.update();

    sceneCollection.update(deltaTime);
}

void Game::draw()
{
    window.beginDraw();

    sceneCollection.draw(window);

    window.endDraw();
}

bool Game::isRunning() const
{
    return window.isOpen();
}

void Game::calculateDeltaTime()
{
    deltaTime = clock.restart().asSeconds();
}
