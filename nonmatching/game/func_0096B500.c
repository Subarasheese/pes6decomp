/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_0096B650(f32 *, void *, s32);
extern char Pes6MatchPlayers[];
extern char D_00CBBE48[];

void func_0096B500(void *arg0) {
    f32 sp[4];
    u8 *p;
    s32 i;
    s32 j;
    s32 found;
    s32 id;
    s32 idx;
    f32 x;
    f32 z;
    s32 dx;
    s32 dz;
    u8 *pl;

    for (i = 0; i < 3; i++) {
        func_0096B650(sp, arg0, i);
        found = 1;
        p = (u8 *)D_00CBBE48;
        for (j = 0; j < 3; j++, p++) {
            id = p[9];
            if (id == 0xFF) {
                continue;
            }
            idx = id % 23;
            pl = (u8 *)Pes6MatchPlayers + idx * 0x240;
            if (id == *(u8 *)arg0) {
                x = *(f32 *)((u8 *)arg0 + 0xE0);
                z = *(f32 *)((u8 *)arg0 + 0xE8);
            } else {
                z = *(f32 *)(pl + 0x78);
                x = *(f32 *)(pl + 0x74);
            }
            dx = (s32)(x - sp[0]);
            dz = (s32)(z - sp[2]);
            if ((u32)(dx * dx + dz * dz) < 0x64001U) {
                found = 0;
                break;
            }
        }
        if (found == 1) {
            break;
        }
    }
    *(s32 *)((u8 *)arg0 + 0x1E8) = i;
    *(f32 *)((u8 *)arg0 + 0x74) = sp[0];
    *(f32 *)((u8 *)arg0 + 0x6C) = sp[0];
    *(f32 *)((u8 *)arg0 + 0x78) = sp[2];
    *(f32 *)((u8 *)arg0 + 0x70) = sp[2];
}
