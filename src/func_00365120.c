/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 list[0x20];
} Locals;

s32 func_00311840(u8);
s32 func_00311890(s32);
s32 func_00311920(s32);
void Pes6BitSet_Initialize(void *, s32, void *);
void Pes6BitSet_Write(void *, s32, s32);
s32 func_00326790(s32, u8, s32);
s32 func_00333440(s32, void *, s32);

s32 func_00365120(u8 *arg0) {
    Locals L;
    s32 var_s0;
    s32 temp_s1;
    s32 var_v0;

    Pes6BitSet_Initialize(L.list, 5, &L.list[0x1C]);
    Pes6BitSet_Write(L.list, 0, func_00311840(arg0[0xE]));
    Pes6BitSet_Write(L.list, 2, func_00326790(M2C_FIELD(arg0, s32 *, 0x14), arg0[0xE], 0x100));
    temp_s1 = arg0[0xE];
    var_s0 = 1;
    var_s0 = var_s0 & func_00311920(temp_s1);
    Pes6BitSet_Write(L.list, 4, var_s0 & func_00311890(temp_s1));
    if (func_00333440(0x84, L.list, 2) != 0) {
        var_v0 = 3;
    } else {
        var_v0 = 1;
    }
    return var_v0;
}
