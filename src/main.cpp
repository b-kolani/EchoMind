#include <SFML/Graphics.hpp> 

int main() {
    // Create the main window 
    sf::RenderWindow window(sf::VideoMode(800, 600), "EchoMind window");
    while (window.isOpen()) {
        // Process events
        sf::Event event;
        // Handle events
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        // Clear screen 
        window.clear(sf::Color::Black);
        // Update the window
        window.display();
    }
    return 0;
}