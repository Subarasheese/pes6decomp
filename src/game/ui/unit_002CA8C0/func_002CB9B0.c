/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct { s32 a; s32 b; } Ent;
extern Ent D_005E3BA0[];
extern s32 D_005E3BA4[][2];
extern u8 D_005E3C80[];
extern void func_00154100(s32, s32, s32);
extern void func_00154090(s32);
extern void func_001540B0(s32, s32);

void func_002CB9B0(s32 a0) {
    s8 i = (s8)a0;
    if (i != -1 && i < 0x1C && D_005E3BA4[i][0] != 0) {
        Ent *e = &D_005E3BA0[i];
        func_00154100(i, e->a, e->a + e->b);
        D_005E3C80[i] = 1;
        func_00154090(i);
    }
    func_001540B0((s8)a0, 0);
}
