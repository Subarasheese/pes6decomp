/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002EDDF0(s32);
extern u8 func_002EDE60(s32);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00B94880(s32);                             /* extern */
s32 func_00B948B0(s32);                             /* extern */
M2C_UNK func_00B96050(M2C_UNK);                     /* extern */
extern char D_00CE3F10[];
extern char D_00CE3F12[];
extern char D_00CE3F18[];

void func_00B9A360(void) {
    s32 var_s1;
    s8 var_v1;
    s8 var_v1_2;

    var_s1 = 1;
    if ((*(u8 *)D_00CE3F12) != 3) {
        if ((*(u8 *)D_00CE3F12) != 2) {
            if (M2C_FIELD(((void *)D_00CE3F10), u8 *, 3) == 0) {
                var_v1 = 0x50;
                goto block_33;
            }
            if ((M2C_FIELD(((void *)D_00CE3F10), u8 *, 3) != 0) && (func_00B94880(M2C_FIELD(((void *)D_00CE3F10), s32 *, 8)) == 0)) {
                func_0026E840(0x8C008005);
                var_s1 = 0;
            } else if (!(func_002EDE60(M2C_FIELD(((void *)D_00CE3F10), s32 *, 8)) & 0xFF) && !(func_002EDDF0(M2C_FIELD(((void *)D_00CE3F10), s32 *, 8)) & 0xFF)) {
                func_0026E840(0x8C008005);
                var_s1 = 0;
            } else if (M2C_FIELD(((void *)D_00CE3F10), u8 *, 3) != 1) {
                M2C_FIELD(((void *)D_00CE3F10), s8 *, 2) = 2;
            } else if (func_002EDDF0(M2C_FIELD(((void *)D_00CE3F10), s32 *, 8)) & 0xFF) {
                M2C_FIELD(((void *)D_00CE3F10), s8 *, 0) = 0x40;
                M2C_FIELD(((void *)D_00CE3F10), s8 *, 2) = 1;
            } else {
                func_0026E840(0x8C008005);
                var_s1 = 0;
            }
        } else if (!(func_002EDE60((*(s32 *)D_00CE3F18)) & 0xFF) && !(func_002EDDF0((*(s32 *)D_00CE3F18)) & 0xFF)) {
            func_0026E840(0x8C008005);
            var_s1 = 0;
        } else {
            if ((*(s32 *)D_00CE3F18) != 1) {
                var_v1_2 = M2C_FIELD(((void *)D_00CE3F10), s8 *, 0x10);
            } else {
                var_v1_2 = M2C_FIELD(((void *)D_00CE3F10), s8 *, 0x10) + 0x32;
            }
            if (func_00B948B0(var_v1_2 + M2C_FIELD(((void *)D_00CE3F10), u8 *, 5)) != 0) {
                M2C_FIELD(((void *)D_00CE3F10), s8 *, 2) = 3;
                M2C_FIELD(((void *)D_00CE3F10), s8 *, 0x11) = 0;
                M2C_FIELD(((void *)D_00CE3F10), s32 *, 0xC) = (s32) M2C_FIELD(((void *)D_00CE3F10), s32 *, 8);
                M2C_FIELD(((void *)D_00CE3F10), s8 *, 6) = 0;
                func_00B96050(3);
            } else {
                func_0026E840(0x8C008005);
                var_s1 = 0;
            }
        }
    } else {
        var_v1 = 0x30;
block_33:
        M2C_FIELD(((void *)D_00CE3F10), s8 *, 0) = var_v1;
    }
    if (var_s1 == 1) {
        func_0026E840(0x84028400);
    }
}
