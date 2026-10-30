/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s16 func_008440F0(void);
extern s32 func_00853B50(s8, s8, s8, s8, s16, s32, s32, s32);
s64 func_00844050(s16);                             /* extern */
s16 *func_008472D0();                               /* extern */
M2C_UNK func_008594A0(M2C_UNK *);                   /* extern */
extern char D_008B21C0[];

s32 func_00858CD0(void *arg0) {
    s16 temp_v0;
    s64 temp_s1;
    s64 temp_v0_2;
    void *temp_s2;
    void *var_s0;

    temp_s2 = arg0 + 4;
    if (M2C_FIELD(arg0, s8 *, 0x101) == 0) {
        return -1;
    }
    temp_s1 = (s64) (func_008440F0() << 0x30) >> 0x30;
    M2C_FIELD(((void *)D_008B21C0), s8 *, 8) = (s8) M2C_FIELD(temp_s2, s8 *, 8);
    M2C_FIELD(((void *)D_008B21C0), u8 *, 0xA) = (u8) M2C_FIELD(temp_s2, u8 *, 0xA);
    M2C_FIELD(((void *)D_008B21C0), u8 *, 0xB) = (u8) M2C_FIELD(temp_s2, u8 *, 0xB);
    M2C_FIELD(((void *)D_008B21C0), s8 *, 0x24) = (s8) M2C_FIELD(temp_s2, s8 *, 0x24);
    M2C_FIELD(((void *)D_008B21C0), u8 *, 0x26) = (u8) M2C_FIELD(temp_s2, u8 *, 0x26);
    M2C_FIELD(((void *)D_008B21C0), u8 *, 0x27) = (u8) M2C_FIELD(temp_s2, u8 *, 0x27);
    M2C_FIELD(((void *)D_008B21C0), s8 *, 0x40) = (s8) M2C_FIELD(temp_s2, s8 *, 0x40);
    M2C_FIELD(((void *)D_008B21C0), u8 *, 0x42) = (u8) M2C_FIELD(temp_s2, u8 *, 0x42);
    M2C_FIELD(((void *)D_008B21C0), u8 *, 0x43) = (u8) M2C_FIELD(temp_s2, u8 *, 0x43);
    M2C_FIELD(((void *)D_008B21C0), s8 *, 0x5C) = (s8) M2C_FIELD(temp_s2, s8 *, 0x5C);
    M2C_FIELD(((void *)D_008B21C0), u8 *, 0x5E) = (u8) M2C_FIELD(temp_s2, u8 *, 0x5E);
    M2C_FIELD(((void *)D_008B21C0), u8 *, 0x5F) = (u8) M2C_FIELD(temp_s2, u8 *, 0x5F);
    M2C_FIELD(((void *)D_008B21C0), s8 *, 0x78) = (s8) M2C_FIELD(temp_s2, s8 *, 0x78);
    M2C_FIELD(((void *)D_008B21C0), u8 *, 0x7A) = (u8) M2C_FIELD(temp_s2, u8 *, 0x7A);
    M2C_FIELD(((void *)D_008B21C0), u8 *, 0x7B) = (u8) M2C_FIELD(temp_s2, u8 *, 0x7B);
    M2C_FIELD(((void *)D_008B21C0), s8 *, 0x94) = (s8) M2C_FIELD(temp_s2, s8 *, 0x94);
    M2C_FIELD(((void *)D_008B21C0), u8 *, 0x96) = (u8) M2C_FIELD(temp_s2, u8 *, 0x96);
    M2C_FIELD(((void *)D_008B21C0), u8 *, 0x97) = (u8) M2C_FIELD(temp_s2, u8 *, 0x97);
    M2C_FIELD(((void *)D_008B21C0), s8 *, 0xB0) = (s8) M2C_FIELD(temp_s2, s8 *, 0xB0);
    M2C_FIELD(((void *)D_008B21C0), u8 *, 0xB2) = (u8) M2C_FIELD(temp_s2, u8 *, 0xB2);
    M2C_FIELD(((void *)D_008B21C0), u8 *, 0xB3) = (u8) M2C_FIELD(temp_s2, u8 *, 0xB3);
    M2C_FIELD(((void *)D_008B21C0), s8 *, 0xCC) = (s8) M2C_FIELD(temp_s2, s8 *, 0xCC);
    M2C_FIELD(((void *)D_008B21C0), u8 *, 0xCE) = (u8) M2C_FIELD(temp_s2, u8 *, 0xCE);
    M2C_FIELD(((void *)D_008B21C0), u8 *, 0xCF) = (u8) M2C_FIELD(temp_s2, u8 *, 0xCF);
    M2C_FIELD(((void *)D_008B21C0), s16 *, 0xF0) = (s16) M2C_FIELD(temp_s2, s16 *, 0xF0);
    M2C_FIELD(((void *)D_008B21C0), s16 *, 0xF2) = (s16) M2C_FIELD(temp_s2, s16 *, 0xF2);
    func_008594A0(((void *)D_008B21C0));
    M2C_FIELD(((void *)D_008B21C0), s16 *, 0xF4) = (s16) M2C_FIELD(temp_s2, s16 *, 0xF4);
    M2C_FIELD(((void *)D_008B21C0), s16 *, 0xF6) = (s16) M2C_FIELD(temp_s2, s16 *, 0xF6);
    M2C_FIELD(((void *)D_008B21C0), s8 *, 0xFB) = (s8) M2C_FIELD(temp_s2, s8 *, 0xFB);
    M2C_FIELD(((void *)D_008B21C0), s8 *, 0xFC) = (s8) M2C_FIELD(temp_s2, s8 *, 0xFB);
    temp_v0 = *func_008472D0();
    if (((void *)D_008B21C0) != NULL) {
        temp_v0_2 = (s64) ((s64) temp_v0 << 0x30) >> 0x30;
        if ((temp_v0_2 > 0) && (temp_v0_2 < 9)) {
            var_s0 = ((void *)D_008B21C0) + ((temp_v0_2 - 1) * 0x1C);
        } else {
            var_s0 = NULL;
        }
    } else {
        var_s0 = NULL;
    }
    if ((M2C_FIELD(var_s0, s8 *, 8) == 3) && (((s64) (func_00844050(M2C_FIELD(temp_s2, s16 *, 0xF4)) << 0x30) >> 0x30) != ((s64) (temp_s1 << 0x30) >> 0x30))) {
        func_00853B50(1, 0x12, 1, 0, *func_008472D0(), -4, 0, 0);
    }
    M2C_FIELD(var_s0, s8 *, 0xC) = 1;
    func_00853B50(1, 0x14, 1, 0, *func_008472D0(), 0, 0, 0);
    return 0;
}
