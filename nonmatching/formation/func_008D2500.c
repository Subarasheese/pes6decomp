/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B9B00(void *, void *);
extern u32 func_008C5740(void *);
M2C_UNK func_001D7A20(u32, M2C_UNK32 *, M2C_UNK);   /* extern */
M2C_UNK func_001F3D80(s32, M2C_UNK32 *, M2C_UNK);   /* extern */
M2C_UNK func_008C1430(u32, M2C_UNK32, M2C_UNK32);   /* extern */
M2C_UNK func_008D0340(void *);                      /* extern */
M2C_UNK func_008D10D0(void *);                      /* extern */
M2C_UNK func_008D15E0(void *);                      /* extern */

void func_008D2500(void *arg0) {
    M2C_UNK32 sp30;
    M2C_UNK32 sp34;
    s32 sp38;
    s32 sp3C;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 temp_v0_3;

    M2C_FIELD(arg0, s16 *, 0x2E) = 0;
    temp_v0 = func_008C5740(arg0 + 0x214);
    if (temp_v0 != 0) {
        sp30 = 0;
        sp34 = 0;
        sp38 = 0;
        sp3C = 0;
        func_001F3D80(M2C_FIELD(arg0, s32 *, 0x40), &sp30, 0);
        func_001F3D80(M2C_FIELD(arg0, s32 *, 0x44), &sp30, 0);
        func_001F3D80(M2C_FIELD(arg0, s32 *, 0x48), &sp30, 0);
        temp_v0_2 = func_008C5740(arg0 + 0x214);
        if (temp_v0_2 != 0) {
            if (M2C_FIELD(arg0, u8 *, 1) == 1) {
                func_001D7A20(temp_v0_2, &sp30, 0x97);
            } else {
                func_001D7A20(temp_v0_2, &sp30, 0x69);
            }
        }
        func_008C1430(M2C_FIELD(arg0, u32 *, 0x1E4), sp30, sp34);
        func_008C1430(M2C_FIELD(arg0, u32 *, 0x1F4), sp30, sp34);
        temp_v0_3 = func_008C5740(arg0 + 0x214);
        if (temp_v0_3 != 0) {
            if (M2C_FIELD(arg0, u8 *, 1) == 1) {
                func_001D7A20(temp_v0_3, &sp30, 0x96);
            } else {
                func_001D7A20(temp_v0_3, &sp30, 0x66);
            }
        }
        func_008C1430(M2C_FIELD(arg0, u32 *, 0x1E8), sp30, sp34);
        func_001D7A20(M2C_FIELD(arg0, u32 *, 0x1F4), &sp30, 0x71);
        func_008C1430(M2C_FIELD(arg0, u32 *, 0x1F8), sp30, sp34);
        if (M2C_FIELD(arg0, void **, 0x1E0) != NULL) {
            func_001D7A20(M2C_FIELD(arg0, u32 *, 0x1EC), &sp30, 0xBB);
            func_001B9B00(M2C_FIELD(arg0, void **, 0x1E0), &sp30);
        }
        if (M2C_FIELD(arg0, u32 *, 0x204) != 0) {
            func_001D7A20(temp_v0, &sp30, 0x6B);
            func_008C1430(M2C_FIELD(arg0, u32 *, 0x204), sp30, sp34);
            if (M2C_FIELD(arg0, u32 *, 0x1F0) != 0) {
                func_001D7A20(M2C_FIELD(arg0, u32 *, 0x204), &sp30, 0x88);
                func_008C1430(M2C_FIELD(arg0, u32 *, 0x1F0), sp30, sp34);
            }
        }
        func_008D15E0(arg0);
        func_008D10D0(arg0);
        func_008D0340(arg0);
    }
}
