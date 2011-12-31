#include "SkyFire.h"

void SkyFire::OnEvent(SDL_Event* Event) {
    CEvent::OnEvent(Event);
}

void SkyFire::OnKeyDown(SDLKey sym, SDLMod mod, Uint16 unicode) {
    switch(sym) {
        case SDLK_LEFT:
            Player.MoveLeft = true;
            break;
        case SDLK_RIGHT:
            Player.MoveRight = true;
            break;
        case SDLK_SPACE:
            break;
        default:
            break;
    }
}

void SkyFire::OnKeyUp(SDLKey sym, SDLMod mod, Uint16 unicode) {
    switch(sym) {
        case SDLK_LEFT:
            Player.MoveLeft = false;
            break;
        case SDLK_RIGHT:
            Player.MoveRight = false;
            break;
        default:
            break;
    }
}


void SkyFire::OnExit() {
    Running = false;
}
