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

CircleShape ball;
Vector2f vel(100, 300);

int main()
{
	window.create(VideoMode(800, 600), "SFML Example");

	Clock clock;

	ball.setRadius(16);
	ball.setOrigin(16, 16);
	ball.setFillColor(Color::Red);
	ball.setPosition(400, 300);

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
	Vector2f pos = ball.getPosition();
	pos += vel * dt;

	if (pos.y > window.getSize().y && vel.y > 0)
		vel.y = -vel.y;
	if (pos.y < 0 && vel.y < 0)
		vel.y = -vel.y;
	if (pos.x > window.getSize().x && vel.x > 0)
		vel.x = -vel.x;
	if (pos.x < 0 && vel.x < 0)
		vel.x = -vel.x;

	vel.y += 1000 * dt;

	ball.setPosition(pos);
}

void render_frame()
{
	window.clear();
	window.draw(ball);
}*/