/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

u16 func_00225680(s32);                             /* extern */
s32 func_00225820();                                /* extern */
s8 func_00225940(s32);                              /* extern */
s32 func_00229010(s32);                             /* extern */
s32 func_00233EF0(s32, s8);                         /* extern */
s32 func_00234870(s8, s32, M2C_UNK, s32);           /* extern */
s32 func_00236E90(s32, s8);                         /* extern */
M2C_UNK func_00B19B50(void *);                      /* extern */
M2C_UNK func_00B19C20(void *);                      /* extern */
M2C_UNK func_00B19D80(void *);                      /* extern */
M2C_UNK func_00B19DF0(void *);                      /* extern */
M2C_UNK func_00B19EC0(void *);                      /* extern */

void func_00B1A7E0(void *arg0, s8 arg1, s32 arg2, s32 arg3) {
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s2;
    u16 var_v0;

    temp_s0 = func_00225820() & 0xFF;
    temp_s2 = func_00234870(arg1, arg3, 0, arg2) & 0xFF;
    temp_s1 = func_00234870(arg1, arg3, 1, arg2) & 0xFF;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (func_00236E90(temp_s2, arg1) & 0xFF);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (func_00236E90(temp_s1, arg1) & 0xFF);
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, u16 *, 0) = func_00225680(func_00229010(temp_s2));
    M2C_FIELD(arg0, u16 *, 2) = func_00225680(func_00229010(temp_s1));
    temp_s0_2 = temp_s0 & 0xFF;
    if (temp_s0_2 != (func_00229010(temp_s1) & 0xFF)) {
        if (temp_s0_2 == (func_00229010(temp_s2) & 0xFF)) {
            var_v0 = M2C_FIELD(arg0, u16 *, 2);
            goto block_6;
        }
    } else {
        var_v0 = M2C_FIELD(arg0, u16 *, 0);
block_6:
        M2C_FIELD(arg0, u16 *, 4) = var_v0;
    }
    if ((func_00233EF0(temp_s2, arg1) == 1) && (func_00233EF0(temp_s1, arg1) == 1)) {
        M2C_FIELD(arg0, s32 *, 8) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    M2C_FIELD(arg0, s8 *, 0x44) = func_00225940(func_00229010(temp_s2));
    M2C_FIELD(arg0, s8 *, 0x45) = func_00225940(func_00229010(temp_s1));
    M2C_FIELD(arg0, s8 *, 0x34) = arg1;
    M2C_FIELD(arg0, s8 *, 0x35) = (s8) ((arg1 & 0xFF) + 1);
    if (arg0 != NULL) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x38);
        switch (temp_a0) {                          /* irregular */
        case 3:
            func_00B19C20(arg0);
            break;
        case 2:
            func_00B19D80(arg0);
            break;
        case 1:
            func_00B19DF0(arg0);
            break;
        case 4:
        case 0:
            func_00B19EC0(arg0);
            break;
        }
        func_00B19B50(arg0);
    }
}
