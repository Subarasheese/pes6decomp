/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[5];
    u8 value;
} Ent;

extern Ent D_003D2D38[];
extern Ent D_00530720[];
s32 func_001FAE00(s32);
s32 func_002371A0(u16);

u8 func_001FAA00(s32 id) {
    Ent *ent;

    if (func_001FAE00(id) != 0) {
        ent = D_003D2D38;
    } else {
        ent = &D_00530720[(u16)func_002371A0(id)];
    }
    return ent->value;
}
