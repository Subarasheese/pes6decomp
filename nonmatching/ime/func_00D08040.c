/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
extern void func_001D7F10(void *);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_001C80F0(s32);                             /* extern */
M2C_UNK func_001C8590(void *, M2C_UNK *, M2C_UNK);  /* extern */
s32 func_001D7A20(void *, s32, M2C_UNK);            /* extern */
void *func_0081D850(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern char D_00D1ECA4[];
extern char D_00D1F680[];

s32 func_00D08040(void *arg0, s32 arg1) {
    s32 temp_s1;
    void *temp_v0;

    if (arg0 != NULL) {
        if (arg1 != 0) {
            temp_v0 = func_0081D850(arg1, 2, 0, 0, 0);
            if (temp_v0 != NULL) {
                if (func_001D7A20(temp_v0, arg0 + 0x18, 0) != 0) {
                    func_001D7F10(temp_v0);
                    M2C_FIELD(arg0, s32 *, 0) = arg1;
                    if (arg0 != NULL) {
                        M2C_FIELD(arg0, s8 *, 0x3C) = 0;
                        M2C_FIELD(arg0, s8 *, 0x3D) = 0;
                    }
                    if (arg0 != NULL) {
                        temp_s1 = func_001F08B0((*(s32 *)D_00D1ECA4));
                        M2C_FIELD(arg0, s8 *, 0x3E) = 9;
                        if (arg0 != NULL) {
                            func_001C48E8(arg0 + 0x40, 0, 0x31);
                            M2C_FIELD(arg0, s8 *, 0x3B) = 1;
                            if (temp_s1 == 0) {
                                func_001C8590(arg0 + 0x40, ((void *)D_00D1F680), 1);
                            } else if (func_001C80F0(temp_s1) != 0) {
                                func_001C8590(arg0 + 0x40, (M2C_UNK *) temp_s1, 0x30);
                            } else {
                                func_001C8590(arg0 + 0x40, ((void *)D_00D1F680), 1);
                            }
                            M2C_FIELD(arg0, s8 *, 0x70) = 0;
                        }
                        M2C_FIELD(arg0, s8 *, 0x3B) = 1;
                    }
                    if (arg0 != NULL) {
                        M2C_FIELD(arg0, s32 *, 0x30) = 0;
                        M2C_FIELD(arg0, s8 *, 0x3F) = 0;
                        M2C_FIELD(arg0, s8 *, 0x3B) = 1;
                    }
                    if (arg0 != NULL) {
                        M2C_FIELD(arg0, s8 *, 0x3B) = 1;
                        M2C_FIELD(arg0, s8 *, 0x39) = 0;
                    }
                    if (arg0 != NULL) {
                        M2C_FIELD(arg0, s32 *, 0x28) = 0;
                        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
                        M2C_FIELD(arg0, s8 *, 0x3B) = 1;
                    }
                    if (arg0 != NULL) {
                        M2C_FIELD(arg0, s8 *, 0x3C) = 0;
                        M2C_FIELD(arg0, s8 *, 0x3B) = 1;
                    }
                    return 1;
                }
                func_001D7F10(temp_v0);
                return 0;
            }
            return 0;
        }
        goto block_4;
    }
block_4:
    return 0;
}
