#ifndef PES6_LOBBY_MATCH_CONTROLS_H
#define PES6_LOBBY_MATCH_CONTROLS_H

#include "types.h"

typedef struct {
    void *widgets[3];
    void *background;
    void *cursor;
    void *controls[2];
} LobbyMatchControls;

extern LobbyMatchControls *D_00A7DF08[];

#endif
