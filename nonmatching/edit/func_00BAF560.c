/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001B6670();                            /* extern */
M2C_UNK func_001B66C0(M2C_UNK);                     /* extern */
M2C_UNK func_001B6860();                            /* extern */
M2C_UNK func_001B7ED0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_002134A0(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_002135D0(s32, M2C_UNK);                /* extern */
M2C_UNK func_002136B0(s32, s32);                    /* extern */
M2C_UNK func_00213920(s32, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
s32 func_00214540(M2C_UNK);                         /* extern */
u8 *func_002F7F80(s32);                             /* extern */
M2C_UNK func_00B91490(M2C_UNK);                     /* extern */
s32 func_00BA3A00();                                /* extern */
M2C_UNK func_00BB14F0();                            /* extern */
M2C_UNK func_00BB1540(M2C_UNK);                     /* extern */
M2C_UNK func_00BB1550();                            /* extern */
M2C_UNK func_00BC6910(M2C_UNK);                     /* extern */
extern char D_00CB6730[];
extern char D_00CB6780[];

void func_00BAF560(void *arg0) {
    M2C_UNK var_a1;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s2;
    s32 var_s2_2;
    u8 *temp_v0_2;
    u8 *temp_v0_3;

    var_s0 = 0;
    func_001B6860();
    func_00BB14F0();
    temp_v0 = func_00214540(0);
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_v0;
    func_00213920(temp_v0, 0x29001D, -1, ((void *)D_00CB6780), 3);
    func_002135D0(M2C_FIELD(arg0, s32 *, 0x1C), 0x435C0000);
    var_s2 = 0;
loop_1:
    temp_v0_2 = func_002F7F80(var_s2);
    if ((temp_v0_2 != NULL) && (*temp_v0_2 != 0)) {
        var_s2 += 1;
        if (var_s2 >= 0x50) {

        } else {
            goto loop_1;
        }
    }
    if ((var_s2 & 0xFF) == 0x50) {
        func_002134A0(M2C_FIELD(arg0, s32 *, 0x1C), 0, 1);
        M2C_FIELD(arg0, s32 *, 0x10) = 1;
    }
    var_s2_2 = 0;
loop_8:
    temp_v0_3 = func_002F7F80(var_s2_2 & 0xFF);
    if ((temp_v0_3 != NULL) && (*temp_v0_3 != 0)) {
        var_s0 = 1;
    } else {
        var_s2_2 = (var_s2_2 + 1) & 0xFF;
        if (var_s2_2 >= 0x50) {

        } else {
            goto loop_8;
        }
    }
    if (var_s0 == 0) {
        func_002134A0(M2C_FIELD(arg0, s32 *, 0x1C), 1, 1);
        func_002134A0(M2C_FIELD(arg0, s32 *, 0x1C), 2, 1);
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
    func_002136B0(M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(arg0, s32 *, 0x10));
    func_00B91490(0x1D);
    if (M2C_FIELD(arg0, u8 *, 8) == 0) {
        func_00BB1540(0);
    } else {
        func_00BB1540(1);
        M2C_FIELD(arg0, u8 *, 8) = 0U;
    }
    func_00BB1550();
    func_00BC6910(0x200024);
    if (func_00BA3A00() == 0) {
        var_a1 = 3;
    } else {
        var_a1 = 2;
    }
    func_001B7ED0(((void *)D_00CB6730), var_a1);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x10);
    switch (temp_v1) {                              /* irregular */
    case 0:
        func_001B66C0(0xF0009C);
        return;
    case 1:
        func_001B66C0(0xF0009D);
        return;
    case 2:
        func_001B66C0(0xF0009E);
        return;
    default:
        func_001B6670();
        return;
    }
}
