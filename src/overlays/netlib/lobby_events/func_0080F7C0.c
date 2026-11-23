/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 p00[0x28];
    s8 pending;
    u8 p29[0x16];
    s8 status;
    u8 p40[0x18];
    s32 resource;
} EventPage;
extern EventPage *D_003EA26C;
extern u8 D_008B21C0[];
extern s16 *func_008472D0(void);
extern s32 func_008589F0(s16), func_008588C0(s32), func_00858790(s16), func_00858450(s32),
    func_00858580(s32), func_00825610(void), func_0083C4D0(void), func_008428B0(void);
extern s64 func_00154080(s32);
extern void func_001BE5B0(s32), Pes6FormationMenu_Close(void), func_00361E90(s32, s32), func_00859460(void *),
    func_00309440(s32), func_00309460(s32, s32);
s8 func_0080F7C0(void) {
    s32 a, b, c, d, e;
    a = func_008589F0(*func_008472D0());
    b = func_008588C0(-1);
    c = func_00858790(*func_008472D0());
    d = func_00858450(-1);
    e = func_00858580(-1);
    if (a && b && d && e && c) {
        func_001BE5B0(0);
        Pes6FormationMenu_Close();
        if (func_00825610() != 6) {
            s32 enabled;
            switch (func_0083C4D0()) {
            case 0:
                enabled = 1;
                break;
            default:
                enabled = 0;
            }
            func_00361E90(enabled, func_008428B0());
        }
        func_00859460(D_008B21C0);
        func_00309440(2);
        func_00309460(2, 9);
        D_003EA26C->pending = 0;
        D_003EA26C->resource = (s32)func_00154080(12);
    }
    return D_003EA26C->status;
}
