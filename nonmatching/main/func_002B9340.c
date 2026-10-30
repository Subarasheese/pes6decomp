/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
extern char D_003DA360[];

void func_002B9340(void *arg0) {
    s32 *temp_a6;
    s32 temp_a4;
    s32 var_t0;
    void *temp_a5;

    M2C_FIELD(arg0, s8 *, 0) = 1;
    M2C_FIELD(arg0, s8 *, 1) = 0;
    M2C_FIELD(arg0, s8 *, 2) = 0;
    M2C_FIELD(arg0, s8 *, 3) = 0;
    M2C_FIELD(arg0, s8 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 5) = 0;
    func_001C48E8(arg0 + 6, 0, 9);
    if ((arg0 + 0xF) != NULL) {
        var_t0 = 0;
        if (0 < 2) {
            do {
                temp_a6 = ((void *)D_003DA360) + (var_t0 << 5);
                temp_a5 = arg0 + (var_t0 * 8);
                temp_a4 = M2C_FIELD(temp_a6, s32 *, 0);
                var_t0 += 1;
                M2C_FIELD(temp_a5, s8 *, 0xF) = (s8) temp_a4;
                M2C_FIELD(temp_a5, s8 *, 0x10) = (s8) M2C_FIELD(temp_a6, s32 *, 4);
                M2C_FIELD(temp_a5, s8 *, 0x11) = (s8) M2C_FIELD(temp_a6, s32 *, 8);
                M2C_FIELD(temp_a5, s8 *, 0x12) = (s8) M2C_FIELD(temp_a6, s32 *, 0xC);
                M2C_FIELD(temp_a5, s8 *, 0x13) = (s8) M2C_FIELD(temp_a6, s32 *, 0x10);
                M2C_FIELD(temp_a5, s8 *, 0x14) = (s8) M2C_FIELD(temp_a6, s32 *, 0x14);
                M2C_FIELD(temp_a5, s8 *, 0x15) = (s8) M2C_FIELD(temp_a6, s32 *, 0x18);
                M2C_FIELD(temp_a5, s8 *, 0x16) = (s8) M2C_FIELD(temp_a6, s32 *, 0x1C);
            } while (var_t0 < 2);
        }
        func_001C48E8(arg0 + 0x1F, 0, 5);
    }
}
