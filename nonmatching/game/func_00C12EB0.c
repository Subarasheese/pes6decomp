/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CB3488[];
extern char D_00CBFAA0[];

void func_00C12EB0(void) {
    M2C_UNK *var_a0;
    s32 var_a2;
    s32 var_a3;
    s32 var_t3;
    u16 var_a1;
    u8 *var_t2;
    void *temp_a4;
    void *temp_a5;
    void *var_a0_2;

    var_a1 = 0;
    var_a2 = 0;
    if ((s32) M2C_FIELD(((void *)D_00CBFAA0), u16 *, 0xB222) > 0) {
        var_a0 = ((void *)D_00CBFAA0);
        do {
            M2C_FIELD(var_a0, u16 *, 0) = var_a1;
            var_t3 = 0;
            var_t2 = ((void *)D_00CB3488);
            temp_a4 = ((void *)D_00CBFAA0) + M2C_FIELD(var_a0, u16 *, 0);
            M2C_FIELD(var_a0, u8 *, 2) = (u8) M2C_FIELD(temp_a4, u8 *, 0x4E20);
loop_3:
            if (*var_t2 == M2C_FIELD(temp_a4, u8 *, 0x4E20)) {
                var_a3 = 1;
            } else {
                var_t3 += 1;
                var_t2 += 1;
                if (var_t3 >= 8) {
                    var_a3 = 0;
                } else {
                    goto loop_3;
                }
            }
            if (var_a3 == 0) {
                M2C_FIELD(var_a0, u8 *, 3) = (u8) M2C_FIELD((temp_a4 + 0x4E20), u8 *, 1);
            } else {
                M2C_FIELD(var_a0, u8 *, 3) = 0xFFU;
            }
            var_a2 += 1;
            temp_a5 = ((void *)D_00CBFAA0) + M2C_FIELD(var_a0, u8 *, 2);
            var_a0 += 4;
            var_a1 = (var_a1 + M2C_FIELD(temp_a5, u8 *, 0xB224)) & 0xFFFF;
        } while (var_a2 < (s32) M2C_FIELD(((void *)D_00CBFAA0), u16 *, 0xB222));
    }
    if (var_a2 < 0x1388) {
        var_a0_2 = ((void *)D_00CBFAA0) + (var_a2 * 4);
        do {
            M2C_FIELD(var_a0_2, s16 *, 0) = 0;
            var_a2 += 1;
            M2C_FIELD(var_a0_2, s8 *, 2) = 0;
            var_a0_2 += 4;
        } while (var_a2 < 0x1388);
    }
}
