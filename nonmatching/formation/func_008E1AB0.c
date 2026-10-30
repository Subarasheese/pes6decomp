/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern f32 func_001D79A0(void *, u16);
M2C_UNK func_001D7A20(void *, M2C_UNK32 *, u16);    /* extern */
s32 func_008B9B70(s32, M2C_UNK32 *, M2C_UNK);       /* extern */
s32 func_008B9F90(s32, M2C_UNK32 *, f32);           /* extern */
void *func_008C1490(M2C_UNK, M2C_UNK32 *);          /* extern */
extern char D_008EC510[];

void func_008E1AB0(void *arg0) {
    M2C_UNK32 sp30;
    M2C_UNK32 sp34;
    s32 sp38;
    M2C_UNK32 sp40;
    M2C_UNK32 sp44;
    s32 sp48;
    s32 sp4C;
    f32 temp_f0;
    s32 temp_s1;
    void *temp_v0;

    if (M2C_FIELD(arg0, void **, 0x3C) == NULL) {
        if (M2C_FIELD(arg0, s32 *, 0x30) == 0) {
            return;
        }
        if (M2C_FIELD(arg0, s32 *, 0x34) == 0) {
            temp_f0 = func_001D79A0(M2C_FIELD(arg0, void **, 0x38), (*(u16 *)D_008EC510));
            sp40 = 0;
            sp44 = 0;
            sp48 = 0;
            sp4C = 0;
            temp_s1 = func_008B9F90(M2C_FIELD(arg0, s32 *, 0x30), &sp40, temp_f0);
            func_001D7A20(M2C_FIELD(arg0, void **, 0x38), &sp40, (*(u16 *)D_008EC510));
            sp38 = 0;
            sp30 = sp40;
            sp34 = sp44;
            temp_v0 = func_008C1490(0x28, &sp30);
            M2C_FIELD(arg0, void **, 0x3C) = temp_v0;
            func_001D7A20(temp_v0, &sp40, 0xE0U);
            M2C_FIELD(arg0, s32 *, 0x34) = func_008B9B70(temp_s1, &sp40, 0);
        }
    }
}
