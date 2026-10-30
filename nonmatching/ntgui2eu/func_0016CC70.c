/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005BFFB0[];
extern char D_005BFFB4[];

void func_0016CC70(void *arg0) {
    s32 temp_a6;
    s32 temp_t0;
    s32 temp_t2;
    s32 var_a4;
    s32 var_a5;
    s32 var_a7;
    s32 var_t1;
    void *temp_a1;
    void *var_a1;

    var_t1 = 0;
    temp_a6 = M2C_FIELD(arg0, s32 *, 0x5B0);
    var_a7 = 0;
    if ((temp_a6 > 0) && (M2C_FIELD(arg0, s32 *, 0x5AC) > 0)) {
        temp_t2 = M2C_FIELD(arg0, s32 *, 0x4EC);
        var_a4 = 0;
        var_a1 = (temp_t2 * 0x20040) + arg0 + 0x950;
        if (temp_a6 > 0) {
loop_4:
            var_a5 = 0;
            if (var_a7 == 0) {
                temp_t0 = M2C_FIELD(arg0, s32 *, 0x5AC);
                if (var_a7 < temp_t0) {
loop_6:
                    var_t1 += 1;
                    M2C_FIELD(var_a1, s16 *, 0x20) = (s16) (((*(u16 *)D_005BFFB0) - var_a5) - M2C_FIELD(arg0, u16 *, 0x40C1C));
                    M2C_FIELD(var_a1, s16 *, 0x24) = (s16) ((*(u16 *)D_005BFFB4) - (M2C_FIELD(arg0, u16 *, 0x40C1C) + var_a4));
                    var_a1 += 0x40;
                    if (var_t1 >= 0x800) {
                        var_a7 = 1;
                    } else {
                        var_a5 += M2C_FIELD(arg0, s32 *, 0x40C14);
                        if ((var_a7 == 0) && (var_a5 < temp_t0)) {
                            goto loop_6;
                        }
                    }
                }
            }
            var_a4 += M2C_FIELD(arg0, s32 *, 0x40C18);
            if ((var_a7 == 0) && (var_a4 < temp_a6)) {
                goto loop_4;
            }
        }
        temp_a1 = arg0 + ((temp_t2 * 0x20040) + 0x910);
        M2C_FIELD(temp_a1, u16 *, 0x24) = (u16) (*(u16 *)D_005BFFB4);
        M2C_FIELD(temp_a1, u16 *, 0x20) = (u16) (*(u16 *)D_005BFFB0);
    }
}
