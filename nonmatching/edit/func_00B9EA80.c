/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00B9C490();                              /* extern */
s32 func_00B9EBC0();                                /* extern */
extern char D_00CE3680[];
extern char D_00CE3683[];
extern char D_00CE38DE[];
extern char D_00CE38DF[];
extern char D_00CE391E[];
extern char D_00CE391F[];

s32 func_00B9EA80(void) {
    s32 temp_v0;
    s32 var_s1;
    s32 var_v1;
    void *temp_v0_2;
    void *var_v0;

    var_s1 = 0;
    temp_v0 = func_00B9EBC0();
    if (temp_v0 != 2) {
        if (temp_v0 != 1) {
            temp_v0_2 = func_00B9C490();
            if (((*(u8 *)D_00CE3683) != M2C_FIELD(temp_v0_2, s32 *, 0x34)) || (M2C_FIELD(((void *)D_00CE3680), u8 *, 1) != M2C_FIELD(temp_v0_2, s32 *, 0x40)) || (M2C_FIELD(((void *)D_00CE3680), u8 *, 0x35) != M2C_FIELD(temp_v0_2, s32 *, 0x44)) || (M2C_FIELD(((void *)D_00CE3680), u8 *, 0x34) != M2C_FIELD(temp_v0_2, s32 *, 0x48))) {
                M2C_FIELD(((void *)D_00CE3680), s8 *, 0) = 1;
                M2C_FIELD(((void *)D_00CE3680), s8 *, 3) = (s8) M2C_FIELD(temp_v0_2, s32 *, 0x34);
                M2C_FIELD(((void *)D_00CE3680), u8 *, 1) = (u8) M2C_FIELD(temp_v0_2, s32 *, 0x40);
                M2C_FIELD(((void *)D_00CE3680), u8 *, 0x35) = (u8) M2C_FIELD(temp_v0_2, s32 *, 0x44);
                M2C_FIELD(((void *)D_00CE3680), u8 *, 0x34) = (u8) M2C_FIELD(temp_v0_2, s32 *, 0x48);
                (*(u8 *)D_00CE391E) = M2C_FIELD(((void *)D_00CE3680), u8 *, 0x35);
                (*(u8 *)D_00CE38DE) = M2C_FIELD(((void *)D_00CE3680), u8 *, 0x35);
                (*(u8 *)D_00CE391F) = M2C_FIELD(((void *)D_00CE3680), u8 *, 0x34);
                (*(u8 *)D_00CE38DF) = M2C_FIELD(((void *)D_00CE3680), u8 *, 0x34);
            }
        } else {
            var_v0 = func_00B9C490();
            var_v1 = 0x10;
            var_s1 = 1;
            M2C_FIELD(var_v0, s32 *, 0x1C) = (s32) M2C_FIELD(var_v0, s32 *, 0x34);
            M2C_FIELD(var_v0, s32 *, 8) = 5;
            goto block_9;
        }
    } else {
        var_v0 = func_00B9C490();
        var_v1 = 0x71;
        var_s1 = 1;
        M2C_FIELD(var_v0, s32 *, 0x1C) = (s32) M2C_FIELD(var_v0, s32 *, 0x34);
        M2C_FIELD(var_v0, s32 *, 8) = 3;
block_9:
        M2C_FIELD(var_v0, s32 *, 0x28) = var_v1;
    }
    return var_s1;
}
