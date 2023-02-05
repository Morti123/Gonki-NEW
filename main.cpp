#include <SFML/Graphics.hpp>
#include "settings.h"
#include "Roadobj.h"
using namespace sf;

int main()
{

    RenderWindow window(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WINDOW_TITLE,Style::Close | Style::Titlebar);
    window.setPosition(Vector2i{(1920-(int)WINDOW_WIDTH)/2,0});
    window.setFramerateLimit(FPS);

    Roadobj Doroga;
    roadObjInit(Doroga, DorogaStartPos, Doroga_File_Name);
    Roadobj Trava;
    roadObjInit(Trava, TravaStartPos, Trava_File_Name);
    Roadobj Pesok;
    roadObjInit(Pesok, PesokStartPos, Pesok_File_Name);
    while (window.isOpen())
    {

        Event event;
        while (window.pollEvent(event))
        {

            if (event.type == Event::Closed)

                window.close();
        }
        RoadObjDraw(window, Trava);
       RoadObjDraw(window, Pesok);
        RoadObjDraw(window, Doroga);
        window.display();
    }

    return 0;
}
