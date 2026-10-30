/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001F22B0(void *);
void *func_008B9F20(s32, M2C_UNK, M2C_UNK);         /* extern */
s32 func_008E2E70(void *, void *, u8, s8);          /* extern */
M2C_UNK func_008E5200(u8);                          /* extern */

void func_008E54F0(void *arg0, s8 arg1) {
    s32 var_a1;
    void *temp_v0;
    void *var_a0;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, s8 *, 0x1DC) = arg1;
        func_008E5200(M2C_FIELD(arg0, u8 *, 0x1DE));
        if (M2C_FIELD(arg0, u8 *, 0x1DE) == 7) {
            func_001F22B0(M2C_FIELD(arg0, void **, 0x6CC));
            M2C_FIELD(arg0, void **, 0x6CC) = NULL;
            var_a1 = 0;
            var_a0 = arg0;
            do {
                M2C_FIELD(var_a0, s32 *, 0x6D0) = 0;
                var_a1 += 5;
                M2C_FIELD(var_a0, s32 *, 0x6D4) = 0;
                M2C_FIELD(var_a0, s32 *, 0x6D8) = 0;
                M2C_FIELD(var_a0, s32 *, 0x6DC) = 0;
                M2C_FIELD(var_a0, s32 *, 0x6E0) = 0;
                var_a0 += 0x14;
            } while (var_a1 < 6);
            M2C_FIELD(((var_a1 * 4) + arg0), s32 *, 0x6D0) = 0;
            if ((arg1 & 0xFF) < 0xC) {
                temp_v0 = func_008B9F20(M2C_FIELD(arg0, s32 *, 0x6C8), 0, 0);
                M2C_FIELD(arg0, void **, 0x6CC) = temp_v0;
                M2C_FIELD(arg0, s32 *, 0x6D0) = func_008E2E70(arg0, temp_v0, M2C_FIELD(arg0, u8 *, 0x1DA), arg1);
            }
        }
    }
}
