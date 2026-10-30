/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B6290(void);
extern void func_001B5440(void);
extern void func_00CE4D20(u32);
M2C_UNK func_001B6380(M2C_UNK);                     /* extern */
M2C_UNK func_001B6780(s32);                         /* extern */
M2C_UNK func_00CD7A00(M2C_UNK);                     /* extern */
M2C_UNK func_00CE5BE0();                            /* extern */
M2C_UNK func_00CE8F90(s32);                         /* extern */
s32 func_00CEC730(M2C_UNK, s32);                    /* extern */
M2C_UNK func_00CECCB0(M2C_UNK *, M2C_UNK);          /* extern */
extern void *D_003E7E1C;
extern void *D_003E7E28;
extern char D_00CF9C90[];

void func_00CE9710(void) {
    if (M2C_FIELD(D_003E7E28, s32 *, 0x1D4) > 0) {
        func_001B6290();
        func_001B6780(func_00CEC730(6, M2C_FIELD(D_003E7E1C, s32 *, 0x14C)));
        func_001B6380(0);
        func_00CE8F90(M2C_FIELD(D_003E7E28, s32 *, 0x1D4));
        func_00CE5BE0();
        func_00CE4D20(1U);
        func_001B5440();
        func_00CECCB0(((void *)D_00CF9C90), 2);
        func_00CD7A00(4);
        return;
    }
    M2C_FIELD(D_003E7E1C, s32 *, 0) = 2;
}
