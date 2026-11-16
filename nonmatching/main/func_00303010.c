/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern char D_003B4E70[];
extern M2C_UNK func_003030B0;
extern s32 func_00305C60(void *, s32, void *);
extern void func_002D4BE0(s32, s32, void *, s32);
extern void func_00305E60(void *, void *);

s32 func_00303010(void * arg0, s32 arg1, void * arg2, s32 arg3) {
    s32 temp_v0;
    void *temp_s0;
    s32 ent;

    temp_s0 = M2C_FIELD(arg0, void **, 0x18);
    temp_v0 = M2C_FIELD(temp_s0, s32 *, 0x1C);
    if (temp_v0 == 0) {
        if (func_00305C60(arg0, *(s32 *)(D_003B4E70 + (M2C_FIELD(temp_s0, s32 *, 0x24) * 4)), arg2) == 0) {
            ent = *(s32 *)(D_003B4E70 + (M2C_FIELD(temp_s0, s32 *, 0x24) * 4));
            func_002D4BE0(ent, ent, arg2, arg3);
        }
        func_00305E60(arg0, &func_003030B0);
        return 1;
    }
    M2C_FIELD(temp_s0, s32 *, 0x1C) = (s32) (temp_v0 - 1);
    return 0;
}
