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
s32 func_00BA4920(M2C_UNK);                         /* extern */
s32 func_00BA49B0(M2C_UNK);                         /* extern */
M2C_UNK func_00BB14F0();                            /* extern */
M2C_UNK func_00BB1540(M2C_UNK);                     /* extern */
M2C_UNK func_00BB1550();                            /* extern */
extern char D_00CB6710[];
extern char D_00CB6730[];

void func_00BB1290(void *arg0) {
    M2C_UNK var_a1;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;

    func_001B6860();
    func_00BB14F0();
    temp_v0 = func_00214540(0);
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_v0;
    func_00213920(temp_v0, 0x2A0030, -1, ((void *)D_00CB6710), 3);
    func_002135D0(M2C_FIELD(arg0, s32 *, 0x1C), 0x435C0000);
    if (func_00BA3A00() == 0) {
        if (func_00BA4920(1) != 0) {
            var_v0 = 1;
        } else {
            goto block_4;
        }
    } else {
block_4:
        var_v0 = 0;
    }
    if (var_v0 == 0) {
        func_002134A0(M2C_FIELD(arg0, s32 *, 0x1C), 0, 1);
        if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
            M2C_FIELD(arg0, s32 *, 0x10) = 1;
        }
    }
    if (func_00BA3A00() == 0) {
        if (func_00BA49B0(0) == 0) {
            if (func_00BA49B0(1) == 0) {
                var_v0_2 = 0;
            } else {
                goto block_19;
            }
        } else {
            goto block_19;
        }
    } else {
block_19:
        var_v0_2 = 1;
    }
    if (var_v0_2 == 0) {
        func_002134A0(M2C_FIELD(arg0, s32 *, 0x1C), 1, 1);
        if (M2C_FIELD(arg0, s32 *, 0x10) == 1) {
            M2C_FIELD(arg0, s32 *, 0x10) = 0;
        }
    }
    if (func_00BA3A00() == 0) {
        if (func_00BA49B0(0) == 0) {
            if (func_00BA49B0(1) == 0) {
                var_v0_3 = 0;
            } else {
                goto block_34;
            }
        } else {
block_34:
            var_v0_3 = 1;
        }
    } else {
        var_v0_3 = 0;
    }
    if (var_v0_3 == 0) {
        func_002134A0(M2C_FIELD(arg0, s32 *, 0x1C), 2, 1);
        if (M2C_FIELD(arg0, s32 *, 0x10) == 2) {
            M2C_FIELD(arg0, s32 *, 0x10) = 0;
        }
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
    if (func_00BA3A00() == 0) {
        var_a1 = 3;
    } else {
        var_a1 = 2;
    }
    func_001B7ED0(((void *)D_00CB6730), var_a1);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x10);
    switch (temp_v1) {                              /* irregular */
    case 0:
        func_001B66C0(0xF00098);
        return;
    case 1:
        func_001B66C0(0xF00099);
        return;
    case 2:
        func_001B66C0(0xF0009A);
        return;
    default:
        func_001B6670();
        return;
    }
}
