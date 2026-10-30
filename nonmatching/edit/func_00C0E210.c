/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EEE60(void *, void *);
extern void func_001D7D80(void *, s16);
M2C_UNK func_001EE630(void *, void *);              /* extern */
void *func_00B8F8D0(s32, M2C_UNK);                  /* extern */
M2C_UNK func_00B8F980(void *, void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_00B8FFF0(s32, s32, M2C_UNK);               /* extern */
M2C_UNK func_00B90140(void *, M2C_UNK);             /* extern */
M2C_UNK func_00C0E570();                            /* extern */
s32 func_00C13D20(s32, M2C_UNK, s8 *);              /* extern */
extern char D_00CBF8A0[];

void func_00C0E210(void *arg0, s32 arg1) {
    s8 sp58;
    s8 sp59;
    s8 sp5A;
    s8 sp5B;
    s8 sp5C;
    s8 sp5D;
    s8 sp5E;
    s8 sp5F;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    void *temp_v0;
    void *temp_v0_2;

    func_00C0E570();
    if (func_00B8FFF0(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, void **, 4) + 0xBC, 0x2F) == 1) {
        func_001D7D80(M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0xBC), 0);
    }
    func_00B8F980(M2C_FIELD(arg0, void **, 0xC) + 0x160, M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0xBC), 0x58, 1, 1);
    temp_s0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x160);
    temp_s0_2 = func_00C13D20(arg1, 5, &sp5C);
    temp_v0 = func_00B8F8D0(temp_s0, 0);
    func_00B90140(temp_v0, 0x4E96);
    func_001EE630(temp_v0, ((void *)D_00CBF8A0) + (temp_s0_2 * 8));
    if (temp_s0_2 == 2) {
        sp5C = 0xFF;
        sp5D = 0xFF;
        sp5E = 0xFF;
        sp5F = 0xFF;
    }
    func_001EEE60(temp_v0, &sp5C);
    func_00B8F980(M2C_FIELD(arg0, void **, 0xC) + 0x164, M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0xBC), 0x59, 1, 1);
    temp_s0_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x164);
    temp_s0_4 = func_00C13D20(arg1, 4, &sp58);
    temp_v0_2 = func_00B8F8D0(temp_s0_3, 0);
    func_00B90140(temp_v0_2, 0x4E96);
    func_001EE630(temp_v0_2, ((void *)D_00CBF8A0) + (temp_s0_4 * 8));
    if (temp_s0_4 == 2) {
        sp58 = 0xFF;
        sp59 = 0xFF;
        sp5A = 0xFF;
        sp5B = 0xFF;
    }
    func_001EEE60(temp_v0_2, &sp58);
}
