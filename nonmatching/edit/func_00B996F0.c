/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002EDDB0(s32);
extern s32 func_002EDE90(s32);
M2C_UNK func_002EE6A0(s32, s32, s32, M2C_UNK);      /* extern */
s32 func_002EEA90(s32);                             /* extern */
s32 func_00B948B0(s32, s8);                         /* extern */
s32 func_00B948C0(s32);                             /* extern */
void *func_00B9C490();                              /* extern */
M2C_UNK func_00C1B380(M2C_UNK);                     /* extern */
extern char D_00CE3880[];
extern char D_00CE3F10[];
extern char D_00CE3F15[];
extern char D_00CE3F18[];
extern char D_00CE3F20[];

void func_00B996F0(void) {
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_v0;
    s32 var_a0;
    s32 var_s3;
    void *temp_s2;

    temp_s2 = func_00B9C490();
    var_s3 = (*(s8 *)D_00CE3F20) + (*(u8 *)D_00CE3F15);
    if ((*(s32 *)D_00CE3F18) == 1) {
        var_s3 += 0x32;
    }
    temp_s4 = func_00B948B0(var_s3, (*(s8 *)D_00CE3F20));
    temp_s3 = func_00B948C0(var_s3);
    M2C_FIELD(((void *)D_00CE3880), s8 *, 0xE) = 0;
    M2C_FIELD(((void *)D_00CE3F10), s8 *, 0x12) = 0;
    var_a0 = M2C_FIELD(((void *)D_00CE3F10), s8 *, 0x11) + M2C_FIELD(((void *)D_00CE3F10), u8 *, 6);
    M2C_FIELD(((void *)D_00CE3880), s8 *, 4) = 1;
    M2C_FIELD(((void *)D_00CE3880), s8 *, 0xB) = 1;
    M2C_FIELD(((void *)D_00CE3880), s8 *, 1) = 1;
    M2C_FIELD(((void *)D_00CE3880), s8 *, 5) = 1;
    M2C_FIELD(((void *)D_00CE3880), s8 *, 2) = 1;
    if (M2C_FIELD(((void *)D_00CE3F10), s32 *, 0xC) == 1) {
        var_a0 += 0x32;
    }
    temp_v0 = func_002EDDB0(var_a0);
    if (func_002EDE90(temp_v0) == 0) {
        func_002EE6A0(temp_s3, temp_s4, func_002EEA90(M2C_FIELD(((void *)D_00CE3F10), s32 *, 0xC)), 0);
    } else {
        func_002EE6A0(temp_s3, temp_s4, temp_v0, 0);
    }
    M2C_FIELD(temp_s2, s8 *, 0x38) = 1;
    func_00C1B380(0xB);
    M2C_FIELD(((void *)D_00CE3F10), s8 *, 0) = 0x20;
}
