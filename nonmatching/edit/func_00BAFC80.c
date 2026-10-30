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
M2C_UNK func_00B91490(M2C_UNK);                     /* extern */
s32 func_00BA3A00();                                /* extern */
s32 func_00BA5B20();                                /* extern */
M2C_UNK func_00BB14F0();                            /* extern */
M2C_UNK func_00BB1540(M2C_UNK);                     /* extern */
M2C_UNK func_00BB1550();                            /* extern */
extern char D_00CB6730[];
extern char D_00CB6778[];

void func_00BAFC80(void *arg0) {
    M2C_UNK var_a1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_v0;

    func_001B6860();
    func_00BB14F0();
    temp_v0 = func_00214540(0);
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_v0;
    func_00213920(temp_v0, 0x2A0030, -1, ((void *)D_00CB6778), 2);
    func_002135D0(M2C_FIELD(arg0, s32 *, 0x1C), 0x435C0000);
    temp_v0_2 = func_00BA5B20();
    if ((temp_v0_2 >= 0) && (temp_v0_2 < 0x73)) {
        var_v0 = 0;
    } else {
        var_v0 = 1;
    }
    if (var_v0 == 0) {
        func_002134A0(M2C_FIELD(arg0, s32 *, 0x1C), 1, 1);
        if (M2C_FIELD(arg0, s32 *, 0x10) == 1) {
            M2C_FIELD(arg0, s32 *, 0x10) = 0;
        }
    }
    func_002136B0(M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(arg0, s32 *, 0x10));
    func_00B91490(0x1D);
    if (M2C_FIELD(arg0, u8 *, 8) == 0) {
        func_00BB1540(3);
    } else {
        func_00BB1540(4);
        M2C_FIELD(arg0, u8 *, 8) = 0U;
    }
    func_00BB1550();
    if (func_00BA3A00() == 0) {
        var_a1 = 3;
    } else {
        var_a1 = 2;
    }
    func_001B7ED0(((void *)D_00CB6730), var_a1);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x10);
    switch (temp_v1) {                              /* irregular */
    case 0:
        func_001B66C0(0xF2000D);
        return;
    case 1:
        func_001B66C0(0xF00089);
        return;
    default:
        func_001B6670();
        return;
    }
}
