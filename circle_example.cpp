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
CircleShape mouseCircle;

int main()
{
	window.create(VideoMode(800, 600), "SFML Example");

	Clock clock;

	circle.setRadius(200);
	circle.setOrigin(200, 200);
	circle.setPosition(400, 300);
	circle.setFillColor(Color::Red);

	mouseCircle.setRadius(32);
	mouseCircle.setOrigin(32, 32);
	mouseCircle.setFillColor(Color::White);

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

bool test_overlap(const CircleShape& c1, const CircleShape& c2)
{
	float d = length(c1.getPosition() - c2.getPosition());
	float sum = c1.getRadius() + c2.getRadius();
	return d < sum;
}

void update_state(float dt)
{
	Vector2i mousePos = Mouse::getPosition(window);
	mouseCircle.setPosition((float)mousePos.x, (float)mousePos.y);

	if (test_overlap(mouseCircle, circle))
		mouseCircle.setFillColor(Color::Green);
	else
		mouseCircle.setFillColor(Color::Red);
}

void render_frame()
{
	window.clear();
	window.draw(circle);
	window.draw(mouseCircle);
}*/