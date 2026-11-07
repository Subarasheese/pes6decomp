/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { char p[0x14]; s32 a; s32 b; } Q;
typedef struct { void *p; Q *q; } P;
M2C_UNK func_001D7D80(s32, s64);                    /* extern */
M2C_UNK func_00B90520(s32, M2C_UNK);                /* extern */
M2C_UNK func_00B90540(s32, u16);                /* extern */
M2C_UNK func_00B90560(s32, s32, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_00B90640(s32, s32, M2C_UNK);           /* extern */
s32 func_00BE59D0();                                /* extern */
s32 func_00BF5890(s64);                             /* extern */
s32 func_00C1B460(M2C_UNK);                         /* extern */
extern s32 D_003E7DD0;

void func_00BE7A10(s32 arg0, P *arg1, s32 arg2, s32 arg3, s64 arg4, s64 arg5, s32 arg6) {
    u16 var_a1;
    s32 var_s5;
    s64 temp_s5;
    s64 var_v0;

    if (arg6 == 0) {
        var_v0 = 2;
    } else {
        var_v0 = (s64) (arg4 << 0x30) >> 0x30;
    }
    temp_s5 = (s16)var_v0;
    func_001D7D80(arg1->q->b, temp_s5);
    func_001D7D80(arg1->q->a, temp_s5);
    func_00B90640(arg0, arg1->q->b, 0);
    var_s5 = func_00BF5890(arg4) - arg2;
    if ((arg6 == 0) && (((func_00C1B460(0) & 0xFFFF) == 0x11A) || ((func_00BE59D0() & 0xFFFF) == 0x11A))) {
        var_s5 += 1;
    }
    func_00B90560(arg0, arg1->q->a, 1, 0, var_s5);
    if (D_003E7DD0 == 1) {
        func_00B90520(arg0, 0);
    } else {
        func_00B90520(arg0, 2);
    }
    var_a1 = 0;
    switch (arg3) {                                 /* irregular */
    case 1:
    case 3:
        if ((arg6 != 2) && (arg4 == arg5)) {
            var_a1 = 1;
        }
        break;
    case 2:
        if (arg5 == 0) {
            var_a1 = 1;
        }
        break;
    }
    func_00B90540(arg0, var_a1);
}
