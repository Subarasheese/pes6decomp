/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002E9370(int);
extern s32 func_001E6B70(s32);
M2C_UNK func_001C4730(s32, void *, M2C_UNK);        /* extern */
s32 func_00623F50(s32, s32, void *, s32, s32, void *); /* extern */
M2C_UNK func_008F83E0(s32, s32);                    /* extern */
extern s32 D_003EA6D0;
extern char D_0065C640[];
extern char D_0065C649[];
extern char D_0065C64A[];
extern char D_0065C654[];
extern char D_0065C658[];
extern void *D_0065EF88;

s32 func_008F81F0(void) {
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_a4;
    s32 temp_s4;
    s32 temp_v1;
    s32 var_s3;
    void *temp_a2;
    void *temp_s1;
    void *temp_s2;

    temp_a4 = M2C_FIELD(D_0065EF88, s32 *, 0x184);
    temp_a3 = (*(s32 *)D_0065C654) + (*(u8 *)D_0065C649);
    temp_a1 = M2C_FIELD(D_0065EF88, s32 *, 0x178);
    temp_a2 = D_0065EF88 + temp_a4;
    temp_v1 = temp_a3 * 0x260;
    temp_s2 = temp_a2 + temp_v1;
    temp_s1 = D_0065EF88 + temp_a1 + temp_v1;
    temp_s4 = func_00623F50((*(s32 *)D_0065C658) + (*(u8 *)D_0065C64A), temp_a1, temp_a2, temp_a3, temp_a4, D_0065EF88);
    var_s3 = 0;
    if (D_003EA6D0 != 2) {
        M2C_FIELD(((void *)D_0065C640), s8 *, 6) = 4;
        M2C_FIELD(((void *)D_0065C640), s8 *, 4) = 1;
        M2C_FIELD(((void *)D_0065C640), s8 *, 0xB) = 1;
        M2C_FIELD(((void *)D_0065C640), s8 *, 1) = 1;
        M2C_FIELD(((void *)D_0065C640), s8 *, 5) = 1;
        M2C_FIELD(((void *)D_0065C640), s8 *, 2) = 1;
        switch (M2C_FIELD(((void *)D_0065C640), s32 *, 0x10)) { /* irregular */
        case 2:
            func_001C4730(temp_s4, temp_s1, 0x260);
            func_001C4730(temp_s4 + 0x20, temp_s1 + 0x20, 0x40);
            func_001C4730(temp_s4 + 0x60, temp_s1 + 0x60, 0x200);
            break;
        case 1:
            func_001C4730(temp_s4, temp_s2, 0x260);
            func_001C4730(temp_s4, temp_s2, 0x260);
            func_001C4730(temp_s4, temp_s2, 0x260);
            break;
        case 3:
            func_001C4730(temp_s4, temp_s2, 0x260);
            func_001C4730(temp_s4 + 0x20, temp_s2 + 0x20, 0x40);
            func_001C4730(temp_s4 + 0x60, temp_s2 + 0x60, 0x200);
            break;
        }
        func_008F83E0(temp_s4 + 0x60, temp_s4 + 0x20);
        func_002E9370(0x800000);
        D_003EA6D0 = 2;
        func_001E6B70(M2C_FIELD(((void *)D_0065C640), s32 *, 0x18) + M2C_FIELD(((void *)D_0065C640), u8 *, 0xA) + 0x7396);
    } else {
        var_s3 = 1;
        D_003EA6D0 = 0;
        M2C_FIELD(((void *)D_0065C640), s8 *, 4) = 1;
        M2C_FIELD(((void *)D_0065C640), s8 *, 0xB) = 1;
        M2C_FIELD(((void *)D_0065C640), s8 *, 1) = 1;
        M2C_FIELD(((void *)D_0065C640), s8 *, 5) = 1;
    }
    return var_s3;
}
