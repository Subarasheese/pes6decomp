/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00137570(void *);
extern void func_00137E50(void *, s32);
s32 func_001344D0(s32, s32, s32, s32, u8 *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00137EB0(s32 *, s32 *, s32 *, s32 *, u8, u8); /* extern */
extern u8 D_003E741C;
extern u8 D_003E741D;
extern u8 D_003E741E;
extern u8 D_003E741F;
extern s32 D_003E97A0;

s32 func_001384B0(void *arg0) {
    s32 sp2C;
    s32 sp30;
    u8 sp34;
    u8 sp35;
    u8 sp36;
    u8 sp37;
    s32 sp38;
    s32 sp3C;

    sp34 = D_003E741C;
    sp35 = D_003E741D;
    sp36 = D_003E741E;
    sp37 = D_003E741F;
    func_00137EB0(&sp3C, &sp30, &sp38, &sp2C, D_003E741D, D_003E741C);
    if ((sp30 + sp2C) >= 4) {
        func_00137E50(D_003E97A0 + 0x53CDC0, func_001344D0(((u64) ((s64) sp3C << 0x24) >> 0x24) | 0x20000000, sp30, ((u64) ((s64) sp38 << 0x24) >> 0x24) | 0x20000000, sp2C, &sp34, 4, 0, 0));
        func_00137570(arg0);
        if (M2C_FIELD(arg0, s32 *, 0x60) == 0) {
            M2C_FIELD(arg0, s32 *, 0x60) = 2;
        }
        return 1;
    }
    return 0;
}
