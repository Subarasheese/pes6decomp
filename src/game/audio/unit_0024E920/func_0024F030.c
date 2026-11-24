/* compiler: mwcc-3.0.1b151 */
#include "pes6/sound_adx.h"

extern s32 func_00251B40(void);
extern s32 func_00180550(void);
extern void func_00155A10(void);
extern void func_00155A00(void);
extern void func_0017E690(u32, char *);
extern void *memset(void *, s32, u32);

static inline void startBuffer(s32 channel, void *buffer) {
    if (audioUnavailable() || channel >= SOUND_ADX_TRACKS || !buffer)
        return;
    func_00155A10();
    func_00168638(D_00583330[channel], buffer);
    func_00155A00();
}

static inline void startFile(s32 channel, char *path) {
    if (audioUnavailable() || channel >= SOUND_ADX_TRACKS)
        return;
    func_00155A10();
    func_001685D8(D_00583330[channel], path);
    func_00155A00();
}

static inline void startArchive(s32 channel, s32 archive, s32 index) {
    if (audioUnavailable())
        return;
    if ((func_00251B40() == 2 || func_00251B40() == 3 || func_00251B40() == 5 ||
         func_00251B40() == 7) &&
        func_00180550())
        archive += 128;
    func_00155A10();
    ADXT_StartAfs(D_00583330[channel], archive, index);
    func_00155A00();
}

void func_0024F030(s32 channel, u32 asset, void *buffer) {
    if (audioUnavailable())
        return;
    if (buffer) {
        startBuffer(channel, buffer);
    } else if (func_00251B40() == 1) {
        char path[128];
        memset(path, 0, sizeof(path));
        func_0017E690(asset, path);
        startFile(channel, path);
    } else {
        startArchive(channel, (asset >> 16) & 7, asset & 0xffff);
    }
}
