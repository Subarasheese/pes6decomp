/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
extern void * func_002CA180(s32);
s32 func_002C7D80(s32);                             /* extern */
s16 *func_008472D0();                               /* extern */
M2C_UNK func_00853B50(M2C_UNK, u8, s32, M2C_UNK, s16, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_009A0270();                                /* extern */
s32 func_00C2F2A0(s32, void *);                     /* extern */
M2C_UNK func_00C305F0(s32);                         /* extern */
extern char D_00CA6FC0[];
extern char D_00CA6FC4[];

s32 func_00C2F8A0(void) {
    f32 sp58;
    f32 sp5C;
    f32 *var_s0;
    s32 temp_s3;
    s32 var_s1;
    s32 var_s2;

    var_s2 = 0;
    if (!(func_009A0270() & 0xFF)) {
        return 0;
    }
    if (func_002DCA30() != 0) {
        return 0;
    }
    var_s1 = 0;
    var_s0 = &sp58;
    do {
        temp_s3 = func_002C7D80(var_s1);
        var_s2 |= func_00C2F2A0(temp_s3, func_002CA180(var_s1));
        func_00C305F0(func_002C7D80(var_s1));
        if (func_002DCA30() != 0) {
            sp58 = (*(f32 *)D_00CA6FC0);
            sp5C = (*(f32 *)D_00CA6FC4);
            func_00853B50(1, *var_s0, ((var_s2 == 0) ? 2 : 1) & 0xFF, 0, *func_008472D0(), 0, 0, 0);
        }
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 2);
    return var_s2;
}
