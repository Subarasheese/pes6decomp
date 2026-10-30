/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00264790(void *, u8);
M2C_UNK func_00803030();                            /* extern */
M2C_UNK func_008030E0();                            /* extern */
void *func_00824160();                              /* extern */
M2C_UNK func_00825530(void *, s32, u8);             /* extern */
s32 func_00825A80();                                /* extern */
M2C_UNK func_009B5820();                            /* extern */
M2C_UNK func_00B299B0(u8);                          /* extern */
M2C_UNK func_00B29A40(s32);                         /* extern */
M2C_UNK func_00B29E80(M2C_UNK);                     /* extern */
M2C_UNK func_00B2A370(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_00C90460(M2C_UNK);                     /* extern */
M2C_UNK func_00C90750(s32);                         /* extern */
M2C_UNK func_00CD7F00();                            /* extern */
extern char D_005E3934[];

void func_00CD1E90(void *arg0) {
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = func_00824160();
    func_008030E0();
    func_00803030();
    if (M2C_FIELD(temp_s0, u8 *, 0x28) == 0) {
        func_00825530(temp_s0, M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(arg0, u8 *, 0x20));
    }
    if (M2C_FIELD(temp_s0, u8 *, 0x28) == 0) {
        func_00CD7F00();
    }
    func_00B29E80(1);
    func_00B29A40(M2C_FIELD(arg0, s32 *, 0x1C));
    func_00B299B0(M2C_FIELD(arg0, u8 *, 0x20));
    func_00B2A370(((void *)D_005E3934), 0);
    temp_v0 = func_00825A80();
    if (temp_v0 > 0) {
        func_00C90750(temp_v0);
        func_00C90460(1);
    }
    func_009B5820();
    func_00264790(arg0, 0x22U);
}
