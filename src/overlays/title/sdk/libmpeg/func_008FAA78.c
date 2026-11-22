/* compiler: ee-gcc-2.9-G0 */
/* MPEG decoder source adapted from OpenRAC/rac-deadlocked-decomp, src/core/00141148.c.
 * See THIRD_PARTY.md for provenance and terms. */
/* C adapted from rac3-decomp func_00134C08 (NTSC-U func_00134C08, commit 403f30a9) */
#include "types.h"

typedef struct {
    u8 pad0[0x160];
    s32 f160;
    u8 pad164[0x838 - 0x164];
    long f838;
    long f840;
    u8 pad848[0x868 - 0x848];
    s32 f868;
    u8 pad86C[0x878 - 0x86C];
    s32 f878;
} Type1;

typedef struct {
    s32 f0;
    s32 pad4;
    long f8;
    long f10;
} Type2;

extern void func_008FABD8();
extern void func_008FAA70();
extern s32 func_008F87E0();
extern u32 func_008F86F8();
extern void func_008F9F80();
extern void func_008FA230();
extern void func_008FA2D0();
extern s32 func_008FBDB0(s32, s32 *);

s32 func_008FAA78(Type1 *p) {
    Type2 cb;

    for (;;) {
        if (p->f878 != 0) {
            return -1;
        }
        func_008FABD8(p);
        while (func_008F87E0(p, 0x18) != 1 && p->f878 == 0) {
            func_008FAA70(p, 8);
        }
        switch (func_008F86F8(p, 0x20)) {
        case 0x1B3:
            func_008F9F80(p);
            break;
        case 0x1B7:
            return 0;
        case 0x1B8:
            func_008FA230(p);
            break;
        case 0x100:
            func_008FA2D0(p);
            cb.f0 = 5;
            cb.f8 = -1;
            cb.f10 = -1;
            func_008FBDB0(p->f868, (s32 *)&cb);
            p->f838 = cb.f8;
            p->f840 = cb.f10;
            return p->f160;
        }
    }
}
