/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001AAF40(void *, signed char);
extern void func_001A58E0(void *, signed char);
M2C_UNK func_001AAF50(void *, M2C_UNK);             /* extern */
M2C_UNK func_0027A600(void *, M2C_UNK);             /* extern */

void func_00C03AB0(void *arg0) {
    s32 temp_v1;
    void *temp_s0;
    void *temp_s0_2;

    temp_v1 = M2C_FIELD(arg0, s32 *, 8);
    switch (temp_v1) {                              /* irregular */
    case 1:
        temp_s0 = M2C_FIELD(arg0, void **, 0xC);
        func_001A58E0(M2C_FIELD(temp_s0, void **, 0), 1);
        func_001AAF40(M2C_FIELD(temp_s0, void **, 0), 0);
        return;
    case 0:
        temp_s0_2 = M2C_FIELD(arg0, void **, 0xC);
        M2C_FIELD(temp_s0_2, s16 *, 0x18) = 0;
        M2C_FIELD(temp_s0_2, s8 *, 0x16) = (s8) (0 & 0xFFFF);
        M2C_FIELD(temp_s0_2, s8 *, 0x50) = 0;
        M2C_FIELD(temp_s0_2, s8 *, 0x4F) = 0;
        M2C_FIELD(temp_s0_2, s8 *, 0x4E) = 0;
        M2C_FIELD(M2C_FIELD(temp_s0_2, void **, 4), s8 *, 0x2C) = 1;
        M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_s0_2, void **, 4), void **, 0), s8 *, 3) = 0;
        M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_s0_2, void **, 4), void **, 0), s8 *, 4) = 1;
        M2C_FIELD(M2C_FIELD(temp_s0_2, void **, 4), s8 *, 0x50) = 0;
        M2C_FIELD(temp_s0_2, s8 *, 0x66) = 0xFF;
        func_001A58E0(M2C_FIELD(M2C_FIELD(temp_s0_2, void **, 4), void **, 0), 1);
        func_001AAF50(M2C_FIELD(M2C_FIELD(temp_s0_2, void **, 4), void **, 0), 0);
        func_001AAF40(M2C_FIELD(M2C_FIELD(temp_s0_2, void **, 4), void **, 0), 1);
        func_0027A600(temp_s0_2, 0);
        return;
    }
}
