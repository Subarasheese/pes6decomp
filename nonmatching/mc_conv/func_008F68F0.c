/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_002E9370(M2C_UNK);                     /* extern */
s32 func_002EDDB0(s32, M2C_UNK);                    /* extern */
s32 func_002EDE90(s32);                             /* extern */
M2C_UNK func_002EE6A0(s32, s32, s32, M2C_UNK);      /* extern */
s32 func_002EEA90(s32);                             /* extern */
s32 func_00623FD0(s32, u8);                         /* extern */
s32 func_00623FE0(s32);                             /* extern */
extern char D_0065C340[];
extern char D_0065C349[];
extern char D_0065C354[];
extern char D_008FEA80[];
extern char D_008FEA90[];

void func_008F68F0(void) {
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_v0;
    s32 var_a0;
    s32 var_s2;

    var_s2 = (*(s32 *)D_0065C354) + (*(u8 *)D_0065C349);
    if ((*(s32 *)D_008FEA90) == 1) {
        var_s2 += 0x32;
    }
    temp_s3 = func_00623FD0(var_s2, (*(u8 *)D_0065C349));
    temp_s2 = func_00623FE0(var_s2);
    M2C_FIELD(((void *)D_0065C340), s8 *, 4) = 1;
    M2C_FIELD(((void *)D_0065C340), s8 *, 0xB) = 1;
    var_a0 = M2C_FIELD(((void *)D_0065C340), s32 *, 0x18) + M2C_FIELD(((void *)D_0065C340), u8 *, 0xA);
    M2C_FIELD(((void *)D_0065C340), s8 *, 1) = 1;
    M2C_FIELD(((void *)D_0065C340), s8 *, 5) = 1;
    M2C_FIELD(((void *)D_0065C340), s8 *, 2) = 1;
    if (M2C_FIELD(((void *)D_008FEA80), s32 *, 0x14) == 1) {
        var_a0 += 0x32;
    }
    temp_v0 = func_002EDDB0(var_a0, 1);
    if (func_002EDE90(temp_v0) == 0) {
        func_002EE6A0(temp_s2, temp_s3, func_002EEA90(M2C_FIELD(((void *)D_008FEA80), s32 *, 0x14)), 0);
    } else {
        func_002EE6A0(temp_s2, temp_s3, temp_v0, 0);
    }
    func_002E9370(0x80000);
}
