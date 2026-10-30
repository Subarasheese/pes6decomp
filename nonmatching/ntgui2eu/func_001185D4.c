/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_001144A0(void *, void *);
s32 func_001183B0(void *, void *);                  /* extern */
M2C_UNK func_001AD620(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_005F8CE8[];
extern char D_005F8D08[];

void func_001185D4(void *arg0, void *arg1) {
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a0;
    u32 temp_s0;

    if (arg0 == NULL) {
        func_001AD620(((void *)D_005F8CE8), 0x56C, ((void *)D_005F8D08));
    }
    temp_s0 = func_001144A0(arg0, arg1);
    temp_a2 = func_001183B0(arg0, arg1);
    if (temp_s0 == -1U) {
        if (temp_a2 == temp_s0) {
            M2C_FIELD(arg0, s32 *, 0x4C) = 0;
            return;
        }
        goto block_6;
    }
block_6:
    if (M2C_FIELD((void *)0x456FD0, s32 *, 4) & 1) {
        if (M2C_FIELD((void *)0x456FD0, u32 *, 8) != temp_s0) {
            var_a0 = temp_a2 + 0xF;
            if (temp_s0 != -1U) {
                M2C_FIELD(arg0, s32 *, 0x4C) = 0;
                M2C_FIELD((void *)0x456FD0, u32 *, 8) = -1U;
                return;
            }
            goto block_18;
        }
        var_a0 = temp_a2 + 0xF;
block_18:
        temp_a0 = (s32) ((temp_a2 < 0) ? var_a0 : temp_a2) >> 4;
        if ((M2C_FIELD((void *)0x456FD0, s32 *, 0x14) != (temp_a2 - (temp_a0 * 0x10))) || (M2C_FIELD((void *)0x456FD0, s32 *, 0x18) != (temp_a0 + M2C_FIELD(arg0, s32 *, 0xF0)))) {
            M2C_FIELD(arg0, s32 *, 0x4C) = 0;
            M2C_FIELD((void *)0x456FD0, s32 *, 0x18) = -1;
            M2C_FIELD((void *)0x456FD0, s32 *, 0x14) = -1;
        }
    } else {
        if (temp_s0 != -1U) {
            M2C_FIELD(arg0, u32 *, 0x48) = temp_s0;
            M2C_FIELD(arg0, s32 *, 0x4C) = 1;
            M2C_FIELD((void *)0x456FD0, u32 *, 8) = temp_s0;
            goto block_13;
        }
        if (temp_a2 != temp_s0) {
            temp_v1 = (s32) ((temp_a2 < 0) ? (temp_a2 + 0xF) : temp_a2) >> 4;
            temp_v0 = temp_a2 - (temp_v1 * 0x10);
            M2C_FIELD((void *)0x456FD0, s32 *, 0x14) = temp_v0;
            M2C_FIELD(arg0, s32 *, 0xF4) = temp_v0;
            M2C_FIELD((void *)0x456FD0, s32 *, 0x18) = (s32) (temp_v1 + M2C_FIELD(arg0, s32 *, 0xF0));
            M2C_FIELD(arg0, s32 *, 0x4C) = 1;
            M2C_FIELD(arg0, s32 *, 0xF8) = (s32) (temp_v1 + M2C_FIELD(arg0, s32 *, 0xF0));
block_13:
            M2C_FIELD((void *)0x456FD0, s32 *, 4) = (s32) (M2C_FIELD((void *)0x456FD0, s32 *, 4) | 1);
        }
    }
}
