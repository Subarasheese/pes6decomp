/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00129600(s32, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_00135080(M2C_UNK);                         /* extern */
M2C_UNK func_00136490(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_00137990(s32, s32, s32, s8, s8);       /* extern */
extern char D_011D78E0[];
extern char D_011D78E4[];
extern char D_011D7960[];
extern char D_011D7964[];
extern char D_011D7968[];
extern char D_011D9588[];
extern char D_011D95A0[];

void func_001399A8(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s8 arg3, s8 arg4) {
    M2C_UNK *var_s1;
    s32 *var_s0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a2;
    s32 var_v0;
    s8 var_a3;
    s8 var_a4;
    void *var_v1;

    var_a2 = arg2;
    var_a3 = arg3;
    var_a4 = arg4;
    if ((M2C_FIELD(((void *)D_011D95A0), s32 *, 0) >= 0) && (M2C_FIELD(((void *)D_011D95A0), s32 *, 0) < 7)) {
        var_s1 = ((void *)D_011D7964);
        var_s0 = ((void *)D_011D78E0);
        (*(s32 *)D_011D78E0) = func_00129600(func_00135080(0x121), ((void *)D_011D78E4), 3, ((void *)D_011D7960), ((void *)D_011D7964));
        (*(s32 *)D_011D9588) = 0;
        var_a2 = 0x960;
        var_a0 = 0;
        var_v0 = 0 * 0x960;
        do {
            var_v1 = var_v0 + ((void *)D_011D7968);
            var_a0_2 = 3;
loop_4:
            var_a3 = M2C_FIELD((void *)0x5FB0C8, s8 *, 0);
            var_a4 = M2C_FIELD((void *)0x5FB0C8, s8 *, 1);
            M2C_FIELD(var_v1, s8 *, 0) = var_a3;
            M2C_FIELD(var_v1, s8 *, 1) = var_a4;
            var_a0_2 -= 1;
            var_v1 += 0x258;
            if (var_a0_2 >= 0) {
                goto loop_4;
            }
            var_a0 += 1;
            var_v0 = var_a0 * 0x960;
        } while (var_a0 < 3);
        var_a0_3 = M2C_FIELD(((void *)D_011D7960), s32 *, 0x7960);
    } else {
        var_s1 = (M2C_UNK *)0x011D0000;
        var_s0 = (s32 *)0x011D0000;
        var_a0_3 = M2C_FIELD(((void *)D_011D7960), s32 *, 0);
    }
    func_00137990(var_a0_3, M2C_FIELD(var_s1, s32 *, 0x7964), var_a2, var_a3, var_a4);
    func_00136490(M2C_FIELD(var_s0, s32 *, 0x78E0), M2C_FIELD(((void *)D_011D95A0), s32 *, -0x6A60), 0x12);
}
