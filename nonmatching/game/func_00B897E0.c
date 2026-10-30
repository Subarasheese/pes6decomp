/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00BD3BE0(void *, s32);                 /* extern */
s32 func_00BD45B0(u16, void *);                     /* extern */
extern char D_00CBCD81[];

void func_00B897E0(void *arg0) {
    s32 temp_a1_2;
    void *temp_a1;

    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x50) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x52) = 0;
    temp_a1 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(temp_a1, u16 *, 0x28) = (u16) M2C_FIELD(temp_a1, u16 *, 0x26);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x66) = 0;
    (*(s8 *)D_00CBCD81) = 0;
    temp_a1_2 = func_00BD45B0(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), void **, 4), u16 *, 6), temp_a1) & 0xFF;
    if (temp_a1_2 != 7) {
        func_00BD3BE0(arg0, temp_a1_2);
    }
}
