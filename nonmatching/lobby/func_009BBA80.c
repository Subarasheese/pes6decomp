/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00363E10(void *);
extern void func_001B9C60(void *);
extern void func_001D7F10(void *);
M2C_UNK func_002DB750(s32, s16 *);                  /* extern */
M2C_UNK func_002DC1D0(s32);                         /* extern */
M2C_UNK func_002DF960(s32);                         /* extern */

void func_009BBA80(void *arg0) {
    s16 sp40;
    s32 var_s2;
    void *var_s1;

    if (M2C_FIELD(arg0, u8 *, 0x1C) == 1) {
        func_002DB750(M2C_FIELD(arg0, s32 *, 0x120), &sp40);
        var_s2 = 0;
        var_s1 = arg0;
loop_2:
        if ((var_s2 - 1) < sp40) {
            func_001D7F10(M2C_FIELD(var_s1, void **, 0x24));
            M2C_FIELD(var_s1, void **, 0x24) = NULL;
            func_00363E10(M2C_FIELD(var_s1, void **, 0x6C));
            var_s2 += 1;
            M2C_FIELD(var_s1, void **, 0x6C) = NULL;
            var_s1 += 4;
            if (var_s2 < 9) {
                goto loop_2;
            }
        }
        func_001D7F10(M2C_FIELD(arg0, void **, 0x140));
        M2C_FIELD(arg0, void **, 0x140) = NULL;
        func_002DC1D0(M2C_FIELD(arg0, s32 *, 0x120));
        M2C_FIELD(arg0, s32 *, 0x120) = 0;
        func_001B9C60(M2C_FIELD(arg0, void **, 0x124));
        M2C_FIELD(arg0, void **, 0x124) = NULL;
        func_002DF960(M2C_FIELD(arg0, s32 *, 0x1A0));
        M2C_FIELD(arg0, s32 *, 0x1A0) = 0;
        M2C_FIELD(arg0, u8 *, 0x1C) = 0U;
    }
}
