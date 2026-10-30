/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00153FE0(s32, s32);                        /* extern */
M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
s32 func_001D9F70(M2C_UNK);                         /* extern */
s32 func_001D9FF0(M2C_UNK);                         /* extern */
s32 func_001DA380(M2C_UNK);                         /* extern */
M2C_UNK func_001DA4B0(M2C_UNK);                     /* extern */
M2C_UNK func_001DD560(M2C_UNK);                     /* extern */
M2C_UNK func_001E7140(s32);                         /* extern */
M2C_UNK func_001F0210(s32);                         /* extern */
s32 func_0021DF90(M2C_UNK);                         /* extern */
s32 func_0021E000(M2C_UNK);                         /* extern */
s32 func_0026C760();                                /* extern */
M2C_UNK func_002CA9A0(M2C_UNK, s32);                /* extern */
s64 func_002CBBE0(s32);                             /* extern */
M2C_UNK func_00363BD0();                            /* extern */
M2C_UNK func_0090BA70(M2C_UNK);                     /* extern */
M2C_UNK func_00BC5BE0();                            /* extern */
extern char D_0058D7AA[];
extern char D_00591C09[];
extern char D_00921DC4[];

void func_008FF570(void) {
    M2C_UNK var_a0;
    M2C_UNK var_a0_2;
    s32 var_s0;

    func_00363BD0();
    if ((*(s8 *)D_0058D7AA) == 0) {
        var_a0 = 0x10250;
    } else {
        var_a0 = 0x1024B;
    }
    func_001D5C40(var_a0);
    func_001E7140(func_0021E000(0x8E));
    func_001F0210(func_0021DF90(0xE));
    func_001DD560(0x18);
    if ((func_0026C760() != 0) && (((*(u8 *)D_00591C09) == 0) || ((*(u8 *)D_00591C09) == 7)) && ((*(s8 *)D_0058D7AA) == 0)) {
        if ((*(s32 *)D_00921DC4) == 2) {
            var_s0 = 1;
        } else {
            func_00BC5BE0();
            var_s0 = 0xC;
        }
        if (func_001DA380(1) == 0) {
            var_a0_2 = 0xC;
        } else {
            if (var_s0 != ((s64) (func_002CBBE0(func_001D9F70(1)) << 0x38) >> 0x38)) {
                func_002CA9A0(1, func_00153FE0(var_s0, func_001D9FF0(1)));
            }
            var_a0_2 = 0xC;
        }
    } else {
        func_001DA4B0(1);
        var_a0_2 = 0;
    }
    func_0090BA70(var_a0_2);
}
