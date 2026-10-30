/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001B8DC0();                            /* extern */
M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_001DA4B0(s32);                         /* extern */
M2C_UNK func_001DD560(M2C_UNK);                     /* extern */
M2C_UNK func_001F0210(s32);                         /* extern */
s32 func_0021DF90(M2C_UNK);                         /* extern */
M2C_UNK func_0023E0E0(M2C_UNK);                     /* extern */
M2C_UNK func_0023EA10(M2C_UNK);                     /* extern */
M2C_UNK func_0023F3A0();                            /* extern */
M2C_UNK func_008B3000(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_008B34C0();                            /* extern */
M2C_UNK func_00934210();                            /* extern */
s32 func_00934400();                                /* extern */
M2C_UNK func_009344F0();                            /* extern */
extern char D_003D8B30[];
extern s32 D_003E9A8C;
extern s32 D_003E9AB4;
extern s32 D_003E9ABC;
extern char D_00591C09[];

s32 func_00240C80(void) {
    s32 *var_s0;
    s32 temp_a0;
    s32 var_v1;

    if (D_003E9AB4 != 0) {
        switch (D_003E9ABC) {                       /* irregular */
        case 0:
            func_009344F0();
            D_003E9ABC += 1;
block_31:
        default:
            return 0;
        case 1:
            if (func_00934400() == 1) {
                func_0023F3A0();
                func_008B34C0();
                func_001B8DC0();
                func_0023EA10(0);
                func_0023E0E0(0x1F);
                if (((*(u8 *)D_00591C09) != 0) && ((*(u8 *)D_00591C09) != 0xC)) {
                    goto block_15;
                }
                if (D_003E9A8C != 9) {
                    var_v1 = 0;
                } else {
block_15:
                    var_v1 = 1;
                }
                if (var_v1 == 1) {
                    var_s0 = ((void *)D_003D8B30);
loop_18:
                    temp_a0 = *var_s0;
                    if (temp_a0 != -1) {
                        func_001DA4B0(temp_a0);
                        var_s0 += 4;
                        goto loop_18;
                    }
                }
                if (((*(u8 *)D_00591C09) == 6) || ((*(u8 *)D_00591C09) == 0) || ((*(u8 *)D_00591C09) == 5) || ((*(u8 *)D_00591C09) == 7)) {
                    func_001DD560(1);
                }
                if ((*(u8 *)D_00591C09) != 0xC) {
                    func_001D5C40(0x1003C);
                }
                if ((*(u8 *)D_00591C09) != 6) {
                    func_001F0210(func_0021DF90(0x14));
                }
                func_008B3000(0x151, 0x4FD5);
                func_008B3000(0x152, 0x4FD6);
                func_008B3000(0x152, 0x4FD7);
                func_008B3000(0x152, 0x4FD8);
                func_008B3000(0x152, 0x4FD9);
                func_008B3000(0x152, 0x4FDA);
                func_008B3000(0x152, 0x4FDB);
                func_008B3000(0x152, 0x4FDC);
                func_008B3000(0x152, 0x4FDD);
                func_008B3000(0x158, 0x4E2F);
                func_008B3000(0x158, 0x4E30);
                func_008B3000(0x158, 0x4FCB);
                func_00934210();
                D_003E9AB4 = 0;
                D_003E9ABC = 0;
                return 1;
            }
            goto block_31;
        }
    } else {
        return 1;
    }
}
