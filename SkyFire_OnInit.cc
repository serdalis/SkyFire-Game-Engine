#include "SkyFire.h"
bool SkyFire::OnInit() {
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        return false;
    }

    if((Surf_Display = SDL_SetVideoMode(WWIDTH, WHEIGHT, 32, SDL_HWSURFACE | SDL_DOUBLEBUF)) == NULL) {
        return false;
    }

    if(CArea::AreaControl.OnLoad("maps/1.area") == false) {
        return false;
    }

    if(Player.OnLoad("images/player.png", 20, 40, 1) == false) {
        return false;
    }
    CEntity::EntityList.push_back(&Player);

    SDL_EnableKeyRepeat(1, SDL_DEFAULT_REPEAT_INTERVAL / 3);

    CCamera::CameraControl.TargetMode = TARGET_MODE_CENTER;
    CCamera::CameraControl.SetTarget(&Player.X, &Player.Y);

    return true;
}

