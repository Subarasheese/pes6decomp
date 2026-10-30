/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001F84D0(void *, void *);
M2C_UNK func_001C4730(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_00622950(void *, s32, u8);             /* extern */
M2C_UNK func_006372A0();                            /* extern */
M2C_UNK func_006374D0(M2C_UNK *);                   /* extern */
void *func_0063E160(u8, M2C_UNK);                   /* extern */
s32 func_0064E2F0(M2C_UNK);                         /* extern */
extern char D_0065C1D0[];
extern char D_0065C268[];
extern void *D_0065EF70;
extern char D_0065EF78[];

void func_00628430(void) {
    s32 temp_s0;
    void *temp_s0_2;
    void *temp_s1;

    if (M2C_FIELD(((void *)D_0065C268), u8 *, 0) == 1) {
        func_006374D0(((void *)D_0065C268));
        temp_s1 = D_0065EF70;
        func_001C4730(temp_s1 + 0x12B8, ((void *)D_0065C1D0) + 0x1C, 0x2E);
        temp_s0 = (*(s32 *)D_0065EF78);
        func_001F84D0(((void *)D_0065C1D0) + 0x1C, temp_s0 + 0x3E4);
        func_001C4730(temp_s1 + 0x198, temp_s0 + 0x3E4, 0x20);
        func_006372A0();
        func_00622950(temp_s1, 0x12F8, M2C_FIELD(temp_s1, u8 *, 0xC));
        func_00622950(temp_s0 + 0xC, func_0064E2F0(0), 0U);
        return;
    }
    func_001C4730(D_0065EF70, func_0063E160(M2C_FIELD(((void *)D_0065C268), u8 *, 1), 0), 0x1400);
    temp_s0_2 = D_0065EF70;
    func_001C4730(temp_s0_2 + 0x12B8, ((void *)D_0065C1D0) + 0x1C, 0x2E);
    func_00622950(temp_s0_2, 0x12F8, M2C_FIELD(temp_s0_2, u8 *, 0xC));
}
