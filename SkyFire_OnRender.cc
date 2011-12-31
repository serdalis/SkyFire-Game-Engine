#include "SkyFire.h"

void SkyFire::OnRender() {
    CArea::AreaControl.OnRender(Surf_Display, -CCamera::CameraControl.GetX(), -CCamera::CameraControl.GetY());
    for(int i = 0;i < CEntity::EntityList.size();i++) {
        if(!CEntity::EntityList[i]) continue;
        CEntity::EntityList[i]->OnRender(Surf_Display);
    }
    SDL_Flip(Surf_Display); // refresh buffer and write surface to screen
}
