/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019B3A0(M2C_UNK);                     /* extern */
M2C_UNK func_001A6C78(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
s32 func_001A6CC0(s32);                             /* extern */
M2C_UNK func_001A6CD0(s32, s32);                    /* extern */
extern char D_005CBBC0[];
extern char D_005CBF38[];
extern char D_005CBF40[];

void func_001A6CE0(void) {
    s32 *var_s1;
    s32 temp_a0;
    s32 var_a0;
    u32 var_s2;

    var_s2 = 3;
    var_s1 = ((void *)D_005CBF40) + 0x18;
    func_001A6CD0(M2C_FIELD(((void *)D_005CBF40), s32 *, 0), M2C_FIELD(((void *)D_005CBF40), s32 *, 4));
    func_001A6C78(0x80075000, ((void *)D_005CBBC0), 0x330);
    func_0019B3A0(0);
    func_0019B3A0(2);
    func_001A6CD0(M2C_FIELD(((void *)D_005CBF40), s32 *, 8), M2C_FIELD(((void *)D_005CBF40), s32 *, 0xC));
    func_001A6CD0(M2C_FIELD(((void *)D_005CBF40), s32 *, 0x10), M2C_FIELD(((void *)D_005CBF40), s32 *, 0x14));
    var_a0 = M2C_FIELD(((void *)D_005CBF40), s32 *, 0x18);
loop_1:
    var_s2 += 1;
    temp_a0 = *var_s1;
    var_s1 += 8;
    func_001A6CD0(temp_a0, func_001A6CC0(var_a0));
    if (var_s2 < 8U) {
        var_a0 = *var_s1;
        goto loop_1;
    }
    (*(s32 *)D_005CBF38) = func_001A6CC0(3);
}
