// Anything after // is a comment not actual C++ code
// Comments are important and I use them to explain things
// Why not read the comments in this code

// These "include" code from the C++ library and SFML too
//#include "stdafx.h"
#include <SFML/Graphics.hpp>

// This is the main C++ program- Duh!
// It is where our game starts from
int main()
{
    // Make a window that is 800 by 200 pixels
    // And has the title "Hello from SFML"
    sf::RenderWindow window(sf::VideoMode(800, 200), "Hello from SFML");

    // Create a "Text" object called "message". Weird but we will learn about objects soon
    sf::Text message;

    // We need to choose a font
    sf::Font font;
    font.loadFromFile("28 Days Later.ttf");

    // Set the font to our message
    message.setFont(font);

    // Assign the actual message
    message.setString("Hello world");
    message.setString("Changed!");

    // Make it really big
    message.setCharacterSize(100);

    // Choose a color
    message.setFillColor(sf::Color::White);

    // This "while" loop goes round and round- perhaps forever
    while (window.isOpen())
    {
        // The next 6 lines of code detect if the window is closed
        // And then shuts down the program
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                // Someone closed the window- bye
                window.close();
        }

        // Clear everything from the last run of the while loop
        window.clear();

        // Draw our message
        window.draw(message);

        // Draw our game scene here
        // Just a message for now

        // Show everything we just drew
        window.display();
    }// This is the end of the "while" loop

    return 0;
}