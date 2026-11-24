/* compiler: mwcc-3.0.1b210 */
#include "pes6/sound_stream.h"

extern s32 D_003E9BA0;
extern s32 D_003E9B9C;
extern s32 D_003E9BA4;
extern s32 D_00588D90[];
extern void func_002537A0(void);

void func_00253C80(void) {
    u32 i;
    for (i = 0; i < STREAM_PRELOAD_COUNT; i++) {
        StreamPreload *entry = &D_005843F0[i];
        entry->owner = -1;
        entry->resource = -1;
        entry->release = 0;
        entry->state = 0;
    }
    for (i = 0; i < 8; i++)
        D_00588D90[i] = 0;
    D_003E9BA0 = 0;
    D_003E9B9C = 0;
    D_003E9BA4 = 6;
    func_00254B10(0);
    func_00254B10(1);
    func_002537A0();
}
