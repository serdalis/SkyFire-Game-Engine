#include "SkyFire.h"

SkyFire::SkyFire() {
    Surf_Display = NULL;
    Running = true;
}

int SkyFire::OnExecute() {
    if(OnInit() == false) {
        return -1;
    }

    SDL_Event Event;

    while(Running) {
        while(SDL_PollEvent(&Event)) {
            OnEvent(&Event);
        }
        OnLoop();
        OnRender();
    }

    OnCleanup();
    return 0;
}

int main(int argc, char* argv[]) {
    SkyFire theApp;

    return theApp.OnExecute();
}
