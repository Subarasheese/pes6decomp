/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001D7D80(s32, s64);                    /* extern */
M2C_UNK func_00B90520(s32, M2C_UNK);                /* extern */
M2C_UNK func_00B90540(s32, M2C_UNK);                /* extern */
M2C_UNK func_00B90560(s32, s32, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_00B90640(s32, s32, M2C_UNK);           /* extern */
s32 func_00BE59D0();                                /* extern */
s32 func_00BF5890(s64);                             /* extern */
s32 func_00C1B460(M2C_UNK);                         /* extern */
extern s32 D_003E7DD0;

void func_00BE7A10(s32 arg0, void *arg1, s32 arg2, s32 arg3, s64 arg4, s32 arg5, s32 arg6) {
    M2C_UNK var_a1;
    s32 var_s5;
    s64 temp_s5;
    s64 var_v0;

    if (arg6 == 0) {
        var_v0 = 2;
    } else {
        var_v0 = (s64) (arg4 << 0x30) >> 0x30;
    }
    temp_s5 = (s64) (var_v0 << 0x30) >> 0x30;
    func_001D7D80(M2C_FIELD(M2C_FIELD(arg1, void **, 4), s32 *, 0x18), temp_s5);
    func_001D7D80(M2C_FIELD(M2C_FIELD(arg1, void **, 4), s32 *, 0x14), temp_s5);
    func_00B90640(arg0, M2C_FIELD(M2C_FIELD(arg1, void **, 4), s32 *, 0x18), 0);
    var_s5 = func_00BF5890(arg4) - arg2;
    if ((arg6 == 0) && (((func_00C1B460(0) & 0xFFFF) == 0x11A) || ((func_00BE59D0() & 0xFFFF) == 0x11A))) {
        var_s5 += 1;
    }
    func_00B90560(arg0, M2C_FIELD(M2C_FIELD(arg1, void **, 4), s32 *, 0x14), 1, 0, var_s5);
    if (D_003E7DD0 != 1) {
        func_00B90520(arg0, 2);
    } else {
        func_00B90520(arg0, 0);
    }
    var_a1 = 0;
    switch (arg3) {                                 /* irregular */
    case 3:
    case 1:
        if ((arg6 != 2) && (arg4 == arg5)) {
block_20:
            var_a1 = 1;
        }
        break;
    case 2:
        if (arg5 == 0) {
            goto block_20;
        }
        break;
    }
    func_00B90540(arg0, var_a1);
}
