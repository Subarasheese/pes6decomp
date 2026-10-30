/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00163C30(s32, s32);                        /* extern */
M2C_UNK func_001748D0(s32, s32);                    /* extern */
extern char D_005C0D00[];
extern char D_005C2570[];

void func_0016D9E0(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    void *temp_s1;
    void *var_s0;

    if (M2C_FIELD(((void *)D_005C0D00), s32 *, 0) == 0) {
        temp_s1 = arg0 + 0x840;
        M2C_FIELD(((void *)D_005C0D00), s32 *, 0) = 1;
        var_s0 = temp_s1;
        if (M2C_FIELD(arg0, s32 *, 0x854) != 0) {
            if (M2C_FIELD(temp_s1, s32 *, 8) == temp_s1) {
                M2C_FIELD(((void *)D_005C0D00), s32 *, 0) = 0;
                return;
            }
            do {
                var_s0 = M2C_FIELD(var_s0, void **, 8);
                temp_a0 = M2C_FIELD(var_s0, s32 *, 0x10);
                if ((arg1 != temp_a0) && (M2C_FIELD(var_s0, s32 *, 0) != 0) && (func_00163C30(temp_a0, (*(s32 *)D_005C2570)) != 0)) {
                    func_001748D0(M2C_FIELD(var_s0, s32 *, 0x10), arg2);
                }
            } while (M2C_FIELD(var_s0, s32 *, 8) != temp_s1);
            goto block_10;
        }
block_10:
        M2C_FIELD(((void *)D_005C0D00), s32 *, 0xD00) = 0;
    }
}
