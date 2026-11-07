/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void * func_001D5A10(s32);
extern u32 func_00B1E100(void);
M2C_UNK func_00972040(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_009720E0(s32, M2C_UNK);                /* extern */
M2C_UNK func_00B1ED10(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00B1EF80();                            /* extern */
M2C_UNK func_00B1F0E0();                            /* extern */

typedef struct { char p0[0x2EC]; s32 f2ec; char p1[0x3C]; s32 f32c; } T;

void func_00B1F540(void) {
    T *tt;
    u32 temp_v0;
    u8 temp_s1;

    temp_v0 = func_00B1E100();
    if ((temp_v0 != 0) && (M2C_FIELD(temp_v0, void **, 0) = func_001D5A10(0x10310), func_00B1F0E0(), func_00B1EF80(), func_00B1ED10(M2C_FIELD(temp_v0, s32 *, 0x32C), 0, 0, 0xFF, 0), temp_s1 = M2C_FIELD(temp_v0, u8 *, 0x31E), tt = (T *)func_00B1E100(), (tt != 0))) {
        if (tt->f32c == 0) {
            func_009720E0(tt->f2ec, 0);
        } else {
            func_009720E0(tt->f2ec, 1);
            func_00972040(tt->f2ec, 0, temp_s1 & 0xFF);
        }
    }
}
