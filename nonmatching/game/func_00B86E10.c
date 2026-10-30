/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D10(void *);
M2C_UNK func_00208610(void *, M2C_UNK, void *, M2C_UNK); /* extern */
M2C_UNK func_00B2ACF0();                            /* extern */
M2C_UNK func_00B89910(void *);                      /* extern */
M2C_UNK func_00BD3BA0(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00BD4040(void *, s32);                 /* extern */
s32 func_00BD45B0(u16);                             /* extern */
extern char D_00CBCAD3[];
extern char D_00CBCD8D[];

void func_00B86E10(void *arg0) {
    s32 temp_a1;
    void *temp_a2;

    func_00B2ACF0();
    func_00B89910(arg0);
    if (func_00207D10(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4)) != 0) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x50) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x52) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x51) = 0xFF;
        temp_a2 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_a2, s8 *, 0x66) = 0;
        (*(s8 *)D_00CBCAD3) = 1;
        (*(u8 *)D_00CBCD8D) -= 1;
        func_00208610(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 1, temp_a2, 0xFF);
        temp_a1 = func_00BD45B0(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), u16 *, 0x30)) & 0xFF;
        if (temp_a1 == 7) {
            func_00BD4040(arg0, 1);
        } else {
            func_00BD4040(arg0, temp_a1);
        }
        func_00BD3BA0(arg0, 5, 1);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0xC;
    }
}
