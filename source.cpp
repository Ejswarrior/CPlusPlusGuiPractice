#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1280, 720), "My First Window");
    sf::CircleShape shape(100.f);
    window.setFramerateLimit(60);
    shape.setFillColor(sf::Color::Green);
    sf::RectangleShape rectangle;
    rectangle.setSize(sf::Vector2f(100,50));
    rectangle.setFillColor(sf::Color::Red);
    sf::Vector2f rectanglePosition(400, 500);
    float yVelocity = 3;
    float xVelocity = 3;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        rectanglePosition.x += xVelocity;
        rectanglePosition.y+= yVelocity;

        rectangle.setPosition(sf::Vector2f(rectanglePosition));

        window.clear();
        window.draw(shape);
        window.draw(rectangle);

        window.display();
    }

    return 0;
}