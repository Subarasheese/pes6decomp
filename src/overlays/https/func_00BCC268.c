/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 func_001C48E8(s32 *, s32, s32);
extern void func_00BCC458(s32);

M2C_UNK func_00BB48D0(s32);
M2C_UNK func_00BC0A88(s32 *);

void func_00BCC268(void *arg0) {
    s32 *temp_a0;
    s32 *temp_v0_3;
    s32 *temp_v0_4;
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x54), s32 *, 0xF8);
    if (temp_v0 != 0) {
        func_00BB48D0(temp_v0);
    }
    temp_v0_2 = M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x54), s32 *, 0xFC);
    if (temp_v0_2 != 0) {
        func_00BB48D0(temp_v0_2);
    }
    temp_v0_3 = M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x54), s32 **, 0x94);
    if (temp_v0_3 != NULL) {
        func_00BC0A88(temp_v0_3);
    }
    temp_v0_4 = M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x54), s32 **, 0xAC);
    if (temp_v0_4 != NULL) {
        func_00BC0A88(temp_v0_4);
    }
    temp_a0 = M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x54), s32 **, 0xC8);
    if (temp_a0 != NULL) {
        func_00BC0A88(temp_a0);
    }
    func_00BCC458((s32)arg0);
    func_001C48E8(M2C_FIELD(arg0, s32 **, 0x54), 0, 0x198);
    func_00BC0A88(M2C_FIELD(arg0, s32 **, 0x54));
    M2C_FIELD(arg0, s32 **, 0x54) = NULL;
}
