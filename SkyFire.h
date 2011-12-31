#ifndef _SKYFIRE_H_
    #define _SKYFIRE_H_

#include "SDL.h"
#include <vector>

#include "Define.h"

#include "CArea.h"
#include "CCamera.h"
#include "CEvent.h"
#include "CSurface.h"
#include "CEntity.h"
#include "CPlayer.h"

class SkyFire : public CEvent {
    private:
        CPlayer Player;
        bool            Running;
        SDL_Surface*    Surf_Display;
    public:
        SkyFire();
        int OnExecute();

    public:
        bool OnInit();
        void OnEvent(SDL_Event* Event);
        void OnLoop();
        void OnRender();
        void OnExit();
        void OnCleanup();
        void OnKeyUp(SDLKey sym, SDLMod mod, Uint16 unicode);
        void OnKeyDown(SDLKey sym, SDLMod mod, Uint16 unicode);
};

#endif
