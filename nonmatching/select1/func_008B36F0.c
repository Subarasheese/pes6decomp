/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001BBC50(s32);                         /* extern */
s32 func_001BBEC0(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
s32 func_001BC3D0(s32, s32, s32, s32);              /* extern */
extern s32 D_003EA3F8;
extern s32 D_003EA3FC;
extern char D_008CEC00[];
extern char D_008DA680[];
extern char D_008DBF50[];
extern M2C_UNK func_008B3620;

void func_008B36F0(void) {
    s32 sp60;
    s32 *var_a1;
    s32 *var_a2;
    s32 *var_s0;
    s32 *var_s1;
    s32 *var_s2;
    s32 temp_v0;
    s32 var_a0;
    s32 var_s3;
    s32 var_s4;

    var_a2 = ((void *)D_008CEC00);
    var_a1 = &sp60;
    var_a0 = 0x45;
    do {
        var_a0 -= 1;
        *var_a1 = *var_a2;
        var_a2 += 4;
        var_a1 += 4;
    } while (var_a0 > 0);
    if (D_003EA3F8 == 0) {
        var_s4 = 0;
        var_s2 = ((void *)D_008DBF50);
        do {
            var_s3 = 0;
            var_s1 = &sp60;
            var_s0 = var_s2;
loop_5:
            *var_s0 = func_001BC3D0(var_s4, M2C_FIELD(var_s1, s32 *, 0), M2C_FIELD(var_s1, s32 *, 4), M2C_FIELD(var_s1, s32 *, 8));
            var_s3 += 1;
            var_s1 += 0xC;
            var_s0 += 4;
            if (var_s3 < 0x17) {
                goto loop_5;
            }
            var_s4 += 1;
            var_s2 += 0x5C;
        } while (var_s4 < 8);
        temp_v0 = func_001BBEC0(0, &func_008B3620, 0, 0, 0, ((void *)D_008DA680));
        D_003EA3FC = temp_v0;
        func_001BBC50(temp_v0);
        D_003EA3F8 = 1;
    }
}
