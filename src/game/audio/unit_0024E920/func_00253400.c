/* compiler: mwcc-3.0.1b151 */
#include "pes6/sound_stream.h"

extern char *strcpy(char *, const char *);

s32 func_00253400(s32 buffer, s32 asset, s32 owner, const char *path) {
    s32 result = -1;
    s32 i;
    StreamPreload *entry;
    for (i = 0; i < STREAM_PRELOAD_COUNT; i++) {
        entry = &D_005843F0[i];
        if (!entry->state) {
            D_005843F0[i].resource = asset;
            D_005843F0[i].owner = owner;
            D_005843F0[i].buffer = buffer;
            D_005843F0[i].state = 1;
            if (!*path)
                D_005843F0[i].path[0] = 0;
            else
                strcpy(D_005843F0[i].path, path);
            result = i;
            break;
        }
    }
    return result;
}
