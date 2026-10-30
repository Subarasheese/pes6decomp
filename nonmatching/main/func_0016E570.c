/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00105D98(unsigned int, unsigned int);
extern void open(unsigned int, unsigned int);
s32 sceSifSetDma(void *, M2C_UNK);                 /* extern */
extern char D_0038592C[];
extern char D_00385938[];

void func_0016E570(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;
    u32 temp_a1;
    u32 temp_a1_2;
    u32 temp_a1_3;

    (*(s32 *)D_00385938) += 1;
    if ((M2C_FIELD(arg0, s8 *, 1) == 1) && (M2C_FIELD(arg0, s32 *, 8) < M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s32 *, 0x3C))) {
        temp_a1 = M2C_FIELD(arg0, u32 *, 0xC);
        func_00105D98(temp_a1, (temp_a1 + M2C_FIELD(arg0, s32 *, 0x10)) - 1);
        M2C_FIELD(arg0, M2C_UNK (**)(s32, u32, s32), 0x20)(M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, u32 *, 0xC), M2C_FIELD(arg0, s32 *, 0x10));
        M2C_FIELD(arg0, s8 *, 1) = 0;
        M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s32 *, 0x3C);
    }
    if (((M2C_FIELD(arg0, s32 *, 0) & 0xFFFF00) == 0x10000) && ((*(s32 *)D_0038592C) == 1)) {
        M2C_FIELD(arg0, M2C_UNK (**)(s32, u32, s32), 0x28)(M2C_FIELD(arg0, s32 *, 0x2C), M2C_FIELD(arg0, u32 *, 0xC), M2C_FIELD(arg0, s32 *, 0x10));
        temp_v1 = M2C_FIELD(arg0, s32 *, 8) + 1;
        temp_a1_2 = M2C_FIELD(arg0, u32 *, 0xC);
        M2C_FIELD(arg0, s32 *, 8) = temp_v1;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s32 *, 0x3C) = temp_v1;
        open(temp_a1_2, (temp_a1_2 + M2C_FIELD(arg0, s32 *, 0x10)) - 1);
        temp_a1_3 = M2C_FIELD(arg0, u32 *, 0xC);
        func_00105D98(temp_a1_3, temp_a1_3 + M2C_FIELD(arg0, s32 *, 0x10) + 0x3F);
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, u32 *, 0xC) & 0x0FFFFFFF);
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
        M2C_FIELD(arg0, s32 *, 0x3C) = 0;
        do {
            temp_v0 = sceSifSetDma(arg0 + 0x30, 1);
            M2C_FIELD(arg0, s32 *, 0x40) = temp_v0;
        } while (temp_v0 == 0);
        M2C_FIELD(arg0, s8 *, 1) = 1;
    }
}
