/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B364D0(u32);
extern s32 func_00207D10(void *);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00208610(void *);                      /* extern */
M2C_UNK func_00B2ACF0();                            /* extern */
M2C_UNK func_00B89910(void *);                      /* extern */
M2C_UNK func_00BD3BE0(void *, s32);                 /* extern */
s32 func_00BD45B0(u16);                             /* extern */
extern char D_00CBCD81[];

void func_00B87440(void *arg0) {
    s32 temp_a1;
    s32 temp_a1_2;
    void *temp_a0;

    func_00B2ACF0();
    func_00B89910(arg0);
    if (func_00207D10(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4)) != 0) {
        func_00B364D0(0U);
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x50) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x52) = 0;
        temp_a0 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_a0, u16 *, 0x28) = (u16) M2C_FIELD(temp_a0, u16 *, 0x26);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x66) = 0;
        (*(s8 *)D_00CBCD81) = 0;
        temp_a1 = func_00BD45B0(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), void **, 4), u16 *, 6)) & 0xFF;
        if (temp_a1 != 7) {
            func_00BD3BE0(arg0, temp_a1);
        }
        func_00208610(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4));
        temp_a1_2 = func_00BD45B0(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), u16 *, 0x30)) & 0xFF;
        if (temp_a1_2 == 1) {
            func_00BD3BE0(arg0, temp_a1_2);
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x16;
        func_00207390(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0xC);
    }
}
