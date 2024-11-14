#include "SFML/Graphics.hpp"
#include "iostream"
#include "string"



int main(int argc, char* argv[])
{
    sf::RenderWindow renderWindow(sf::VideoMode(100, 100), "My Window");

    while (renderWindow.isOpen())
    {
        sf::Event windowEvent;
        while (renderWindow.pollEvent(windowEvent))
        {
            if (windowEvent.type == sf::Event::EventType::Closed)
            {
                renderWindow.close();
            }
        }
    }

    std::cin.get();
}
