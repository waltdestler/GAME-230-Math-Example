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

float length(Vector2f v)
{
	return sqrtf(v.x*v.x + v.y*v.y);
}

void move_towards(Vector2f & p1, Vector2f p2, float dist)
{
	if (p1 == p2)
		return;

	Vector2f v = p2 - p1;
	float len = length(v);
	Vector2f dir = v / len;
	p1 += dir * dist;
}

void update_state(float dt)
{
	if (Mouse::isButtonPressed(Mouse::Left))
	{
		Vector2i mousePosI = Mouse::getPosition(window);
		Vector2f mousePosF((float)mousePosI.x, (float)mousePosI.y);
		Vector2f circlePos = circle.getPosition();
		move_towards(circlePos, mousePosF, 100 * dt);
		circle.setPosition(circlePos.x, circlePos.y);
	}
}

void render_frame()
{
	window.clear();
	window.draw(circle);
}*/