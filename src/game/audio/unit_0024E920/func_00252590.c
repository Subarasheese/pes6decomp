/* compiler: mwcc-3.0.1b151 */
#include "pes6/sound_stream.h"

extern char *strcpy(char *, const char *);

s32 func_00252590(const StreamTicket *req) {
    D_005850E0[req->slot].entry = -1;
    D_005850E0[req->slot].status = -1;
    D_005850E0[req->slot].flags = 0;
    D_005850E0[req->slot].hold = req->hold;
    D_005850E0[req->slot].group = req->group;
    if (req->buffer)
        D_005850E0[req->slot].buffer = req->buffer;
    D_005850E0[req->slot].id = req->slot;
    D_005850E0[req->slot].asset = req->asset;
    if (!*req->path)
        D_005850E0[req->slot].path[0] = 0;
    else
        strcpy(D_005850E0[req->slot].path, req->path);
    D_005850E0[req->slot].channel = -1;
    D_005850E0[req->slot].length = 0;
    D_005850E0[req->slot].position = 0;
    D_005850E0[req->slot].elapsedSamples = 0;
    D_005850E0[req->slot].waitSamples = 0;
    D_005850E0[req->slot].offset = req->offset;
    D_005850E0[req->slot].advance = req->advance;
    D_005850E0[req->slot].delay = req->delay;
    D_005850E0[req->slot].volume = req->volume;
    if (D_005850E0[req->slot].operation == -1) {
        D_005850E0[req->slot].state = 3;
        D_005850E0[req->slot].operation = 1;
    } else {
        D_005850E0[req->slot].state = 1;
        D_005850E0[req->slot].operation = 1;
    }
    D_005850E0[req->slot].direct = req->direct;
    D_005850E0[req->slot].source = req->source;
    return 1;
}
