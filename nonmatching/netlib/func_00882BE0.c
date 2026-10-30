/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BC300(void);
extern s32 func_001BC3D0(s32, s32, s32, s32);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_00883480();                                /* extern */
extern s32 D_003EA3A4;
extern u8 D_003EA3BC;
extern char D_0088A810[];
extern char D_008B24D8[];

s32 func_00882BE0(void) {
    u32 var_s0;
    void *temp_v0;

    if ((D_003EA3A4 == 0) && (func_00883480() == 0)) {
        if (D_003EA3BC != 0) {
            return 1;
        }
        func_001BC300();
        func_001C48E8(((void *)D_008B24D8), 0, 8);
        var_s0 = 0;
loop_7:
        if (var_s0 < 8U) {
            temp_v0 = ((void *)D_0088A810) + (var_s0 * 0xC);
            func_001BC3D0(0, M2C_FIELD(temp_v0, s32 *, 4), M2C_FIELD(temp_v0, s32 *, 8), M2C_FIELD(temp_v0, s32 *, 0));
            var_s0 += 1;
            goto loop_7;
        }
        D_003EA3BC = 1;
        return 1;
    }
    return 0;
}
