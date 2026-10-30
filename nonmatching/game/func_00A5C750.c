/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00B044D0(s32, s32);
extern s32 func_009B30B0(s32, s32);
s32 func_00AA3540(void *);                          /* extern */
extern void *Pes6Ball_Current;
extern char D_0059225C[];
extern char D_0059226E[];

s32 func_00A5C750(void *arg0, s32 arg1, s16 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s16 var_s2;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_s6;
    s32 var_s3;

    if ((arg6 == 0) && ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x10C), (s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) >= 0x60) && ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x28), arg4) & 0xFFFF) >= 0x60) && ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x10C), arg4) & 0xFFFF) < 0x21)) {
        (*(s16 *)D_0059226E) = arg2;
        (*(s32 *)D_0059225C) = arg5;
        return arg1 & 0xFFFF;
    }
    if ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x26), arg3) & 0xFFFF) < 0x28) {
        temp_s6 = func_009B30B0(arg3, arg4) & 0xFFFF;
        if (temp_s6 >= 0x38) {
            if ((func_00AA3540(arg0) >= 0x19000) && (M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) < (0x1900 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)))) {
                (*(s16 *)D_0059226E) = arg2;
                (*(s32 *)D_0059225C) = arg5;
                return arg1 & 0xFFFF;
            }
            goto block_12;
        }
block_12:
        if (temp_s6 < 0x54) {
            temp_s2 = arg3 & 0xFFFF;
            temp_s0 = ((((arg4 & 0xFFFF) - temp_s2) + 0x10000) & 0xFFFF) < 0x8001;
            if (temp_s6 < 0x31) {
                goto block_14;
            }
            if ((func_009B30B0(arg4, (s32) M2C_FIELD(arg0, u16 *, 0x10C)) & 0xFFFF) < 0x41) {
                var_s3 = 0x23F;
                var_s2 = (temp_s2 - ((func_00B044D0(0x23F, 0x5A) & 0xFFFF) * ((temp_s0 != 0) ? -1 : 1))) & 0xFFFF;
            } else {
block_14:
                if (temp_s6 >= 0x11) {
                    var_s3 = 0x23E;
                    var_s2 = (temp_s2 - ((func_00B044D0(0x23E, 0x2D) & 0xFFFF) * ((temp_s0 != 0) ? -1 : 1))) & 0xFFFF;
                } else {
                    var_s2 = arg3 & 0xFFFF;
                    var_s3 = 0x23D;
                }
            }
            (*(s16 *)D_0059226E) = var_s2;
            (*(s32 *)D_0059225C) = temp_s0;
            return var_s3 & 0xFFFF;
        }
        (*(s16 *)D_0059226E) = arg2;
        (*(s32 *)D_0059225C) = arg5;
        return arg1 & 0xFFFF;
    }
    (*(s16 *)D_0059226E) = arg2;
    (*(s32 *)D_0059225C) = arg5;
    return arg1 & 0xFFFF;
}
