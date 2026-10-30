/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001F85A0(void *, void *);
M2C_UNK func_001C4730(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
s32 func_0063E160(s32, M2C_UNK);                    /* extern */
extern char D_00657250[];
extern char D_0065C1D0[];
extern char D_0065C268[];

void func_006287C0(s8 arg0) {
    s32 temp_s3;
    s32 temp_s4;

    temp_s4 = arg0 & 0xFF;
    temp_s3 = func_0063E160(temp_s4, 0);
    func_001C4730(((void *)D_0065C1D0), ((void *)D_00657250), 0x80);
    if (temp_s4 != 0x23) {
        func_001C4730(((void *)D_0065C1D0) + 0x1C, temp_s3 + 0x12B8, 0x2E);
        func_001C4730(((void *)D_0065C1D0) + 0x4A, ((void *)D_0065C1D0) + 0x1C, 0x2E);
        M2C_FIELD(((void *)D_0065C268), s8 *, 0) = 0;
    } else {
        func_001F85A0(temp_s3 + 0x198, ((void *)D_0065C1D0) + 0x1C);
        func_001C4730(((void *)D_0065C1D0) + 0x4A, ((void *)D_0065C1D0) + 0x1C, 0x2E);
        M2C_FIELD(((void *)D_0065C1D0), s32 *, 0x10) = 0x2D;
        M2C_FIELD(((void *)D_0065C1D0), s32 *, 0x14) = 0xF;
        M2C_FIELD(((void *)D_0065C1D0), s32 *, 0x18) = 0x80;
        M2C_FIELD(((void *)D_0065C268), s8 *, 0) = 1;
    }
    M2C_FIELD(((void *)D_0065C268), s8 *, 1) = arg0;
}
