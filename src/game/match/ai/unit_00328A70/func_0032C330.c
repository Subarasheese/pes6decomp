/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_0030FAC0(s32, M2C_UNK);
s32 func_00310B60(s32, s32, M2C_UNK, M2C_UNK);
s32 func_00310BA0(s32);
M2C_UNK Pes6Job_SetField4(void *, char *, char *);
M2C_UNK Pes6Job_SetDone(void *);
s32 Pes6Job_GetArg(void *, M2C_UNK);
s32 func_00340C80(f32);
extern char D_003E17B0[];
extern char func_0032A050[];

s32 func_0032C330(void *arg0) {
    s32 temp_s0;
    s32 temp_s0_2;

    temp_s0 = Pes6Job_GetArg(arg0, 0) & 0xFF;
    if (!((f32) func_00310BA0(temp_s0) <= 1638400.0f) && (func_00310B60(temp_s0, func_0030FAC0(temp_s0, 1), 0x2000, 0x190000) != 0)) {
        Pes6Job_SetField4(arg0, func_0032A050, D_003E17B0);
        goto block_7;
    }
    temp_s0_2 = M2C_FIELD(arg0, s32 *, 0x28);
    if (func_00340C80(1.5f) < temp_s0_2) {
        Pes6Job_SetDone(arg0);
block_7:
        return 1;
    }
    return 0;
}
