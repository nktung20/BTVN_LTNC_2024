#include <iostream>
#include "SDL.h"
#include "SDL_image.h"
#include "mainFunc.h"

using namespace std;

const int SCREEN_WIDTH = 960;
const int SCREEN_HEIGHT = 720;
const char* WINDOW_TITLE = "Hello World!";

int main(int argc, char *argv[])
{
    SDL_Window* window = initSDL(SCREEN_WIDTH, SCREEN_HEIGHT, WINDOW_TITLE);
    SDL_Renderer* renderer = createRenderer(window);

    SDL_Texture* background = loadTexture("background.png", renderer);
    SDL_RenderCopy( renderer, background, NULL, NULL);

    SDL_Texture* logo = loadTexture("Logo_UET.png", renderer);
    renderTexture(logo, 325,218, renderer);

    SDL_RenderPresent( renderer );
    waitUntilKeyPressed();

    SDL_RenderPresent( renderer );
    waitUntilKeyPressed();

    SDL_DestroyTexture( logo );
    logo = NULL;
    SDL_DestroyTexture( background );
    background = NULL;

    quitSDL(window, renderer);
    return 0;
}
