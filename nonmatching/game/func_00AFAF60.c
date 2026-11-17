/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

M2C_UNK func_00207390(void *, s32);                 /* extern */
M2C_UNK func_00209A00(void *, s32, s32);            /* extern */
s32 func_009B3070(s32, s32);                        /* extern */
s32 func_009B30B0(s32, s32);                        /* extern */
s32 func_00A13E50(s32, s32);                        /* extern */
s32 func_00A9B270(void *, s32);                     /* extern */
M2C_UNK func_00AA74B0(void *, s32, s32, s32, s32);  /* extern */
M2C_UNK func_00AA8B90(void *, s32, s32, s32, s32);  /* extern */
M2C_UNK func_00AF8870(void *, s32, s32, s32, s32);  /* extern */
s32 func_00AFF630(void *, s32, s32, s32);           /* extern */
extern s32 D_003E74CC;

void func_00AFAF60(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 s0;
    s32 v;
    s32 st;
    s32 a;
    s32 s5;
    s32 half;
    void *p;

    if (func_00AFF630(arg0, arg1, arg4, arg3) != 0) {
        return;
    }
    s0 = func_00A9B270(arg0, func_00A13E50(arg3, 0x1900 - (M2C_FIELD(arg0, u8 *, 0x5C) * 12)));
    v = func_009B30B0(arg2, arg1) & 0xFFFF;
    st = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
    if (st == 1) {
        if (v >= 0x60) {
            v = 0x71;
        }
        goto L238;
    }
    if (st == 0xC5 || st == 0xC4 || st == 0xC3 || st == 0xC2 || st == 0xC6 || st == 0xB6 || st == 0xBE) {
        a = v & 0xFFFF;
        if (a < 0x17 && a >= 0xE) {
            v = 0x17;
        } else if (a >= 0x51 && a < 0x59) {
            v = 0x4F;
        }
        goto L238;
    }
    if (st == 0x11 || st == 0x27 || st == 0x2A || st == 0x22A || st == 0x2B4) {
        goto L1C8;
    }
    if (st == 0x2C0) {
        half = (0x1900 - (M2C_FIELD(arg0, u8 *, 0x5C) * 12)) / 2;
        if (s0 >= half) {
            s0 -= 0x400;
        }
        goto L1C8;
    }
    if (st == 2) {
        if ((0x1100 - (M2C_FIELD(arg0, u8 *, 0x5C) * 12)) < s0) {
            func_00AA74B0(arg0, arg1, arg2, s0, arg4);
            return;
        }
        goto L238;
    }
    if (st == 0xBB || st == 0xB7 || st == 0x68 || st == 0x6E || st == 0x6D || st == 0x6A) {
        goto L134;
    }
    if (st == 0x12) {
        if ((0x1B00 - (M2C_FIELD(arg0, u8 *, 0x5C) * 12)) < M2C_FIELD(arg0, s32 *, 0x1C)) {
            goto L134;
        }
        if ((v & 0xFFFF) < 0x61) {
            goto L134;
        }
        goto L238;
    }
    goto L238;
L1C8:
    if ((v & 0xFFFF) < 0x1B) {
        v = 0x16;
    }
    goto L238;
L134:
    func_00AF8870(arg0, arg1, arg2, s0, arg4);
    return;
L238:
    if ((v & 0xFFFF) < 0x61) {
        func_00AF8870(arg0, arg1, arg2, s0, arg4);
        return;
    }
    s5 = func_009B3070(arg2, M2C_FIELD(arg0, u16 *, 0x26)) & 0xFFFF;
    if (s5 < 0x5000) {
        goto L454;
    }
    if (M2C_FIELD(arg0, s32 *, 0x1C) < 0x681) {
        goto L454;
    }
    if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), arg2) & 0xFFFF) < 0x70) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x2D) = ((((arg2 & 0xFFFF) - M2C_FIELD(arg0, u16 *, 0x26)) + 0x10000) & 0xFFFF) >= 0x8001;
    } else {
        a = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
        if (a != 0x16 && a != 0x17 && a != 0x15 && a != 0x22 && a != 0x23 && a != 0x21 && a != 0xBE && a != 0xC3 && a != 0xC2 && a != 0xC5 && a != 0xC4 && a != 0xC7 && a != 0xB6) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x2D) = ((((arg2 & 0xFFFF) - M2C_FIELD(arg0, u16 *, 0x26)) + 0x10000) & 0xFFFF) >= 0x8001;
        }
    }
    if ((func_009B30B0(arg1, M2C_FIELD(arg0, u16 *, 0x28)) & 0xFFFF) >= 0x21) {
        goto L454;
    }
    if ((0x1300 - (M2C_FIELD(arg0, u8 *, 0x5C) * 12)) < M2C_FIELD(arg0, s32 *, 0x1C)) {
        func_00209A00(M2C_FIELD(arg0, void **, 4), 0xB7, 4);
    } else {
        func_00209A00(M2C_FIELD(arg0, void **, 4), 0xBB, 4);
    }
    M2C_FIELD(arg0, s32 *, 0x20) = M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg0, s16 *, 0x38) = (s16) (s5 / (M2C_FIELD(((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30) * 4) + D_003E74CC), s32 *, 0x2FD8) - 2));
    M2C_FIELD(arg0, s16 *, 0x36) = arg2;
    M2C_FIELD(arg0, s16 *, 0x34) = arg1;
    func_00207390(M2C_FIELD(arg0, void **, 4), 4);
    return;
L454:
    func_00AA8B90(arg0, arg1, arg2, s0, arg4);
}
