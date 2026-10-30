/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7960(void *, s8);
extern s32 func_001D6E70(s32, s32, s32);
void *func_0081D850(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_0081E060(void *, M2C_UNK);                 /* extern */
extern char D_00A02668[];

s32 func_009A01E0(void *arg0, s32 arg1) {
    s8 sp30;
    s32 var_v0;
    s8 *var_v1;
    void *temp_a0;

    var_v0 = 0x10;
    var_v1 = &sp30;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    if (arg0 != NULL) {
        if (arg1 != 0) {
            M2C_FIELD(arg0, void **, 4) = func_0081D850(arg1, 4, 0, 0, 0);
            M2C_FIELD(arg0, void **, 8) = func_0081D850(arg1, 2, 0, 0, 0);
            temp_a0 = M2C_FIELD(arg0, void **, 4);
            if (temp_a0 != NULL) {
                if (M2C_FIELD(arg0, void **, 8) != NULL) {
                    func_001D7960(temp_a0, 0);
                    func_001D7960(M2C_FIELD(arg0, void **, 8), 0);
                    M2C_FIELD(arg0, s32 *, 0xC) = func_001D6E70((s32) M2C_FIELD(arg0, void **, 4), 4, (s32) ((void *)D_00A02668));
                    M2C_FIELD(arg0, s32 *, 0x28) = func_0081E060(M2C_FIELD(arg0, void **, 4), 6);
                    M2C_FIELD(arg0, s32 *, 0x18) = func_0081E060(M2C_FIELD(arg0, void **, 4), 7);
                    M2C_FIELD(arg0, s32 *, 0x20) = func_0081E060(M2C_FIELD(arg0, void **, 4), 8);
                    M2C_FIELD(arg0, s32 *, 0x30) = func_0081E060(M2C_FIELD(arg0, void **, 4), 9);
                    M2C_FIELD(arg0, s32 *, 0x10) = func_0081E060(M2C_FIELD(arg0, void **, 4), 0xA);
                    M2C_FIELD(arg0, s32 *, 0x2C) = func_0081E060(M2C_FIELD(arg0, void **, 4), 0xB);
                    M2C_FIELD(arg0, s32 *, 0x1C) = func_0081E060(M2C_FIELD(arg0, void **, 4), 0xC);
                    M2C_FIELD(arg0, s32 *, 0x24) = func_0081E060(M2C_FIELD(arg0, void **, 4), 0xD);
                    M2C_FIELD(arg0, s32 *, 0x34) = func_0081E060(M2C_FIELD(arg0, void **, 4), 0xE);
                    M2C_FIELD(arg0, s32 *, 0x14) = func_001D6E70((s32) M2C_FIELD(arg0, void **, 4), 0xF, (s32) ((void *)D_00A02668));
                    M2C_FIELD(arg0, s32 *, 0x38) = func_001D6E70((s32) M2C_FIELD(arg0, void **, 4), 5, (s32) ((void *)D_00A02668));
                    if ((M2C_FIELD(arg0, s32 *, 0xC) != 0) && (M2C_FIELD(arg0, s32 *, 0x10) != 0) && (M2C_FIELD(arg0, s32 *, 0x18) != 0) && (M2C_FIELD(arg0, s32 *, 0x28) != 0) && (M2C_FIELD(arg0, s32 *, 0x20) != 0) && (M2C_FIELD(arg0, s32 *, 0x30) != 0) && (M2C_FIELD(arg0, s32 *, 0x14) != 0) && (M2C_FIELD(arg0, s32 *, 0x1C) != 0) && (M2C_FIELD(arg0, s32 *, 0x2C) != 0) && (M2C_FIELD(arg0, s32 *, 0x24) != 0) && (M2C_FIELD(arg0, s32 *, 0x34) != 0)) {
                        if (M2C_FIELD(arg0, s32 *, 0x38) != 0) {
                            return 0;
                        }
                        goto block_26;
                    }
                    goto block_26;
                }
                return 1;
            }
            goto block_26;
        }
        return 1;
    }
block_26:
    return 1;
}
