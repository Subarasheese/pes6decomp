/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F8660(s32, s32);
extern s32 func_001F08B0(s32);
extern u32 func_001CDA50(s32);
extern s32 func_003344D0(s32);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_001C7F58(M2C_UNK *, void *);           /* extern */
extern u16 *D_00CE57F0;
extern char D_00CE5800[];

M2C_UNK *func_00BDCFE0(s32 arg0) {
    s32 temp_s0;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;
    void *temp_s0_2;
    void *temp_v1;

    var_s0 = 0;
    var_v0 = func_003344D0(arg0);
loop_1:
    temp_v1 = D_00CE57F0 + ((var_s0 & 0xFFFF) * 8);
    if (M2C_FIELD(temp_v1, s32 *, 0x49D48) != var_v0) {
        var_s0 += 1;
        if (var_s0 < 0xE6) {
            goto loop_1;
        }
    } else {
        var_v0 = M2C_FIELD((temp_v1 + 0x49D48), s32 *, 4);
    }
    var_s1 = 0;
    if ((s32) *D_00CE57F0 > 0) {
loop_7:
        temp_s0 = (var_s1 & 0xFFFF) * 0x30;
        if (M2C_FIELD((D_00CE57F0 + temp_s0), s32 *, 0xC) != var_v0) {
            var_s1 += 1;
            if (var_s1 >= (s32) *D_00CE57F0) {
                goto block_21;
            }
            goto loop_7;
        }
        func_001C48E8(((void *)D_00CE5800), 0, 0x100);
        if (var_s1 < (s32) *D_00CE57F0) {
            temp_s0_2 = D_00CE57F0 + temp_s0 + 8;
            if (func_001CDA50(1) != 5) {
                func_001C7F58((M2C_UNK *)0xCE5800, temp_s0_2 + 8);
            } else {
                func_001F8660((s32) (temp_s0_2 + 8), (s32) ((void *)D_00CE5800));
            }
        } else {
            func_001C7F58(((void *)D_00CE5800), func_001F08B0(0x2F000B));
        }
        return ((void *)D_00CE5800);
    }
block_21:
    return func_001F08B0(0x2F000B);
}
