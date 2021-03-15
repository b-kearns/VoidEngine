#ifndef TitleScreen_hpp
#define TitleScreen_hpp

#include "Scene.hpp"
#include "Window.hpp"

class S_TitleScreen : public Scene
{
public:
	S_TitleScreen();

	void onCreate() override;
	void onDestroy() override;

	void onActivate() override;
	void onDeactivate() override;

	void handleInput() override;
	void update(float deltaTime) override;
	void draw(Window& window) override;
private:
};
#endif // !TitleScreen_hpp