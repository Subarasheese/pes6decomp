/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001D6E70(s32, s32, s32);
extern void func_001D7D80(void *, s16);
extern void func_001D7960(void *, s8);
void *func_0081D850(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_0081E060(void *, M2C_UNK);                 /* extern */
s32 func_0099B690(void *, M2C_UNK, s32);            /* extern */
extern char D_00A02B68[];

s32 func_009BD020(void *arg0, s32 arg1, s32 arg2) {
    s8 sp4C;
    s32 var_v0;
    s8 *var_v1;
    void *temp_v0;
    void *temp_v0_2;

    var_v0 = 4;
    var_v1 = &sp4C;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    if (arg0 != NULL) {
        if (arg1 != 0) {
            temp_v0 = func_0081D850(arg1, 1, 1, 0, 0);
            M2C_FIELD(arg0, void **, 4) = temp_v0;
            if (temp_v0 == NULL) {
                goto block_17;
            }
            temp_v0_2 = func_0081D850(arg1, 3, 1, 0, 0);
            M2C_FIELD(arg0, void **, 8) = temp_v0_2;
            if (temp_v0_2 == NULL) {
                goto block_17;
            }
            func_001D7960(M2C_FIELD(arg0, void **, 4), 0);
            func_001D7960(M2C_FIELD(arg0, void **, 8), 0);
            func_001D7D80(M2C_FIELD(arg0, void **, 4), 0);
            func_001D7D80(M2C_FIELD(arg0, void **, 8), 0);
            M2C_FIELD(arg0, s32 *, 0xC) = func_001D6E70((s32) M2C_FIELD(arg0, void **, 4), 0, (s32) ((void *)D_00A02B68));
            M2C_FIELD(arg0, s32 *, 0x14) = func_001D6E70((s32) M2C_FIELD(arg0, void **, 4), 1, (s32) ((void *)D_00A02B68));
            M2C_FIELD(arg0, s32 *, 0x10) = func_0099B690(M2C_FIELD(arg0, void **, 4), 3, arg2);
            M2C_FIELD(arg0, s32 *, 0x18) = func_0081E060(M2C_FIELD(arg0, void **, 4), 2);
            if ((M2C_FIELD(arg0, s32 *, 0xC) != 0) && (M2C_FIELD(arg0, s32 *, 0x14) != 0) && (M2C_FIELD(arg0, s32 *, 0x10) != 0)) {
                if (M2C_FIELD(arg0, s32 *, 0x18) != 0) {
                    return 0;
                }
                goto block_17;
            }
            goto block_17;
        }
        return 1;
    }
block_17:
    return 1;
}
