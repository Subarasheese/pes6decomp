/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001634B0(int, int);
extern void func_00162CF8(void);
extern void func_0015B4D0(void *, void *);
extern void func_00162D10(void);
M2C_UNK func_00163890(void *);                      /* extern */
s32 func_0016AC80(void *, s32, M2C_UNK);            /* extern */
M2C_UNK func_0016AFD0(s32);                         /* extern */
s32 func_0016B048(s32);                             /* extern */
M2C_UNK func_0016B0B0(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_0016B308(void *);                          /* extern */
extern char D_003C8808[];

void func_00163CB8(void *arg0) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s2;
    s32 var_v1;
    s8 temp_v1;
    s8 temp_v1_2;

    if (M2C_FIELD(arg0, s8 *, 2) == 0) {
        temp_v1 = M2C_FIELD(arg0, s8 *, 0x48);
        if (temp_v1 != 1) {

        } else {
            M2C_FIELD(arg0, s8 *, 0x48) = 0;
            if (M2C_FIELD(arg0, s8 *, 0x47) == 0) {
                M2C_FIELD(arg0, s8 *, 1) = temp_v1;
            }
        }
        if (M2C_FIELD(arg0, s8 *, 0x46) == 1) {
            temp_a0 = M2C_FIELD(arg0, s32 *, 8);
            if (temp_a0 != 0) {
                M2C_FIELD(arg0, s32 *, 8) = 0;
                func_0016AFD0(temp_a0);
            }
            M2C_FIELD(arg0, s8 *, 0x46) = 0;
            M2C_FIELD(arg0, s8 *, 0x49) = 0;
        }
        func_00162CF8();
        temp_v1_2 = M2C_FIELD(arg0, s8 *, 0x45);
        if (temp_v1_2 == 1) {
            M2C_FIELD(arg0, s8 *, 0x49) = temp_v1_2;
            func_00162D10();
            if (M2C_FIELD(arg0, s32 *, 8) == 0) {
                temp_v0 = func_0016AC80(M2C_FIELD(arg0, void **, 0x50), M2C_FIELD(arg0, s32 *, 0x54), 0);
                M2C_FIELD(arg0, s32 *, 8) = temp_v0;
                if (temp_v0 == 0) {
                    func_0015B4D0(((void *)D_003C8808), M2C_FIELD(arg0, void **, 0x50));
                    M2C_FIELD(arg0, s8 *, 1) = 4;
                    M2C_FIELD(arg0, s8 *, 0x45) = 0;
                    M2C_FIELD(arg0, s8 *, 0x49) = 0;
                    return;
                }
                func_0016B0B0(temp_v0, 0, 2);
                temp_v0_2 = func_0016B048(M2C_FIELD(arg0, s32 *, 8));
                var_s2 = temp_v0_2 << 0xB;
                if (M2C_FIELD(arg0, s32 *, 0x54) == 0) {
                    var_s2 = func_0016B308(M2C_FIELD(arg0, void **, 0x50));
                }
                func_0016B0B0(M2C_FIELD(arg0, s32 *, 8), 0, 0);
                if (M2C_FIELD(arg0, s32 *, 0x10) == 0x7FFFF800) {
                    M2C_FIELD(arg0, s32 *, 0x10) = var_s2;
                    M2C_FIELD(arg0, s32 *, 0x14) = temp_v0_2;
                }
                var_v1 = M2C_FIELD(arg0, s32 *, 0xC);
                if (temp_v0_2 < var_v1) {
                    M2C_FIELD(arg0, s32 *, 0xC) = temp_v0_2;
                    var_v1 = temp_v0_2;
                }
                if (temp_v0_2 < (M2C_FIELD(arg0, s32 *, 0x14) + var_v1)) {
                    temp_v0_3 = temp_v0_2 - var_v1;
                    M2C_FIELD(arg0, s32 *, 0x14) = temp_v0_3;
                    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (temp_v0_3 << 0xB);
                }
                func_001634B0((s32) arg0, 0);
                M2C_FIELD(arg0, s8 *, 0x45) = 0;
                goto block_26;
            }
            goto block_26;
        }
        func_00162D10();
block_26:
        if (M2C_FIELD(arg0, s8 *, 0x47) == 1) {
            M2C_FIELD(arg0, s8 *, 0x47) = 0;
        }
        goto block_28;
    }
block_28:
    if ((M2C_FIELD(arg0, s8 *, 1) == 2) && (M2C_FIELD(arg0, s8 *, 0x49) == 1)) {
        func_00163890(arg0);
    }
}
