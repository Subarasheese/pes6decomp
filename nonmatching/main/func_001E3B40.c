/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DCCF0(void *);
M2C_UNK func_001DCC70(M2C_UNK *);                   /* extern */
extern void *D_0052AEE0;
extern char D_0052AEE8[];
extern char D_0052AF04[];
extern char D_0052AF08[];

void func_001E3B40(void *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    void *temp_a1;
    void *temp_s2;

    temp_s2 = D_0052AEE0;
    M2C_FIELD(arg0, s8 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_001DCCF0(temp_s2);
    func_001DCC70(((void *)D_0052AEE8));
    M2C_FIELD(arg0, void **, 0) = temp_s2;
    temp_a1 = temp_s2 + M2C_FIELD(((void *)D_0052AEE8), u8 *, 0xC);
    M2C_FIELD(arg0, void **, 4) = temp_a1;
    D_0052AEE0 = temp_a1;
    switch (M2C_FIELD(((void *)D_0052AEE8), s32 *, 4)) {     /* irregular */
    case 2:
        M2C_FIELD(arg0, s8 *, 0x2D) = 2;
        M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(((void *)D_0052AEE8), s8 *, 0x14);
        return;
    case 6:
        M2C_FIELD(arg0, s8 *, 0x2D) = 6;
        temp_f0 = (f32) M2C_FIELD(((void *)D_0052AEE8), s8 *, 0x16);
        M2C_FIELD(arg0, f32 *, 0x14) = temp_f0;
        (*(f32 *)D_0052AF08) = temp_f0;
        return;
    case 1:
        M2C_FIELD(arg0, s8 *, 0x2D) = 1;
        return;
    default:
        M2C_FIELD(arg0, s8 *, 0x2D) = 9;
        return;
    case 5:
        M2C_FIELD(arg0, s8 *, 0x2D) = 5;
        temp_f0_2 = (f32) M2C_FIELD(((void *)D_0052AEE8), s8 *, 0x15);
        M2C_FIELD(arg0, f32 *, 0x10) = temp_f0_2;
        (*(f32 *)D_0052AF04) = temp_f0_2;
        return;
    }
}
