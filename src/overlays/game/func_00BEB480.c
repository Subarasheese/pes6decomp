/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    u8 pad00[0x110];
    float pos[3];
} Transform;
typedef struct {
    u8 pad00[0x10];
    Transform *transform;
} Object;
typedef struct {
    Object *object;
    u8 pad04[0x38];
} Entry;
extern void func_00AD0A20(void), func_00B252E0(void), func_009E1CB0(s32);
extern s32 func_00152130(s32, u8), func_0029AC20(void), func_002DCA30(void), func_00C01090(s32);
extern u32 func_00BF6270(void);
extern void func_00BA92A0(u32);
extern s32 func_00BA91C0(void);
extern u8 *func_00299FE0(s32);
extern void func_00297DF0(Entry *), func_0027B6D0(Transform *, s32);
extern u8 D_00591BE4[];
extern u32 D_00591E14[];
extern Transform *volatile D_00CBD570[];
void func_00BEB480(void) {
    Entry *entry;
    int i;
    int limit;
    u32 frame;
    func_00AD0A20();
    if (*D_00591E14 < (u32)(*D_00591BE4 * 5))
        func_00152130(0, (u8)((60 / *D_00591BE4) << 5));
    if (*D_00CBD570) {
        Entry *slot = (Entry *)func_00299FE0(0);
        i = 0;
        do {
            func_00297DF0(slot);
            i++;
            slot++;
        } while (i < 4);
    }
    if (*D_00CBD570) {
        entry = (Entry *)func_00299FE0(0);
        (*D_00CBD570)->pos[0] = entry->object->transform->pos[0];
        (*D_00CBD570)->pos[1] = entry->object->transform->pos[1];
        (*D_00CBD570)->pos[2] = entry->object->transform->pos[2];
        func_0027B6D0(*D_00CBD570, 0);
    }
    if (func_0029AC20())
        return;
    func_00BA92A0(func_00BF6270());
    if (func_00BA91C0() & 0x1008)
        *D_00591E14 = 5 * *D_00591BE4 + 1;
    limit = 5;
    if (func_002DCA30())
        limit--;
    frame = ++*D_00591E14;
    if (frame <= (u32)(*D_00591BE4 * limit)) {
        if (!(frame <= 2U) && !func_00C01090(0x16) && !func_00C01090(0x1A))
            func_00B252E0();
    } else
        func_009E1CB0(3);
}
