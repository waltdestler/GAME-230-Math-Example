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

RectangleShape rect;

int main()
{
	window.create(VideoMode(800, 600), "SFML Example");

	Clock clock;

	rect.setSize(Vector2f(300, 200));
	rect.setPosition(200, 150);
	rect.setFillColor(Color::White);

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

bool contains_point(FloatRect r, Vector2f p)
{
	return p.x >= r.left &&
	       p.x < r.left + r.width &&
	       p.y >= r.top &&
	       p.y < r.top + r.height;
}

void update_state(float dt)
{
	Vector2i mousePos = Mouse::getPosition(window);
	Vector2f mousePosF((float)mousePos.x, (float)mousePos.y);
	FloatRect r;
	r.left = rect.getPosition().x;
	r.top = rect.getPosition().y;
	r.width = rect.getSize().x;
	r.height = rect.getSize().y;
	if (contains_point(r, mousePosF))
		rect.setFillColor(Color::Green);
	else
		rect.setFillColor(Color::Red);
}

void render_frame()
{
	window.clear();
	window.draw(rect);
}*/