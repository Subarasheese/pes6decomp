/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern void func_002871C0(void *);
extern void func_00270530(u8 *, f32 *);
extern char Pes6MatchPlayers[];
extern char D_00591E00[];
extern char D_00592380[];

void func_0099FE40(void) {
    f32 v[3];
    u8 *src;
    s32 off;
    s32 i;
    f32 *dst;

    func_002871C0(D_00592380);
    src = (u8 *)Pes6MatchPlayers;
    off = 0;
    for (i = 0; i < 0x17; i++) {
        dst = (f32 *)(D_00591E00 + (off + 0xC) + 0x580);
        func_00270530(src, v);
        off += 0xC;
        src += 0x240;
        dst[0] = v[0];
        dst[1] = v[1];
        dst[2] = v[2];
    }
}
