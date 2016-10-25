/*#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/OpenGL.hpp>
#include <SFML/Main.hpp>

using namespace sf;

void update_state(float dt);
void render_frame();

RenderWindow window;

CircleShape circle;

int main()
{
	window.create(VideoMode(800, 600), "SFML Example");

	circle.setRadius(16);
	circle.setFillColor(Color::Red);
	circle.setOrigin(16, 16);

	Clock clock;

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		float dt = clock.restart().asSeconds();

		update_state(dt);
		render_frame();
		window.display();
	}

	return 0;
}

void update_state(float dt)
{
	if (Mouse::isButtonPressed(Mouse::Left))
	{
		Vector2i mousePos = Mouse::getPosition(window);
		Vector2f circlePos = circle.getPosition();
		Vector2f mousePosF((float)mousePos.x, (float)mousePos.y);
		Vector2f v = mousePosF - circlePos;
		float len = sqrtf(v.x*v.x + v.y*v.y);
		v /= len;
		circlePos += v * 100.0f * dt;

		circle.setPosition((float)circlePos.x, (float)circlePos.y);
	}
}

void render_frame()
{
	window.clear();
	window.draw(circle);
}*/