// Digital Differential Analyzer Alogrithm(DDA)

#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({800, 600}), "Digital Differential Analyzer Alogrithm");
    window.setFramerateLimit(60);

    float x, y, x1, y1, x2, y2, dx, dy, xinc, yinc, steplength;

    std::cout << "Input the line endpoints (x1,y2) and (x2,y2)" << std::endl;
    std::cin >> x1 >> y1 >> x2 >> y2;

    dx = x2 - x1;
    dy = y2 - y1;

    if (abs(dx) > abs(dy))
    {
        steplength = abs(dx);
    }
    else
    {
        steplength = abs(dy);
    }

    xinc = dx / steplength;
    yinc = dy / steplength;
    x = x1;
    y = y1;

    // std::cout << "(" << x << " " << y << ")"<< std::endl;
    std::vector<sf::Vertex> point;
    for (auto i = 0; i < steplength; i++)
    {
        x += xinc;
        y += yinc;
        point.push_back(sf::Vertex{{x, y}, sf::Color::White});
    }
    while (window.isOpen())
    {

        while (const auto event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
            window.clear();
            window.draw(point.data(), point.size(), sf::PrimitiveType::Points);
            window.display();
        }
    }
}
