/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002631D0(void);
extern void func_00CF49E0(void);
M2C_UNK func_002F2ED0(s32);                         /* extern */
s32 func_002F3850(s32);                             /* extern */
M2C_UNK func_002F50D0(s32);                         /* extern */
M2C_UNK func_00802D50();                            /* extern */
extern void *D_003E7E1C;
extern s32 D_003EB33C;

void func_00CF4BC0(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    void *temp_s0;
    void *temp_s0_2;

    if (func_002631D0() != 6) {
        temp_s0 = D_003E7E1C + 0x190;
        if (temp_s0 != NULL) {
            if ((D_003EB33C == 0) && (func_002F3850(M2C_FIELD(D_003E7E1C, s32 *, 0x190)) == 2)) {
                func_00CF49E0();
            }
            func_002F2ED0(M2C_FIELD(D_003E7E1C, s32 *, 0x190));
            temp_a0 = M2C_FIELD(temp_s0, s32 *, 0x128);
            if (temp_a0 != 0) {
                func_002F50D0(temp_a0);
            }
        }
    } else {
        func_00802D50();
        temp_s0_2 = D_003E7E1C + 0x190;
        if (temp_s0_2 != NULL) {
            if ((D_003EB33C == 0) && (func_002F3850(M2C_FIELD(D_003E7E1C, s32 *, 0x190)) == 2)) {
                func_00CF49E0();
            }
            func_002F2ED0(M2C_FIELD(D_003E7E1C, s32 *, 0x190));
            temp_a0_2 = M2C_FIELD(temp_s0_2, s32 *, 0x128);
            if (temp_a0_2 != 0) {
                func_002F50D0(temp_a0_2);
            }
        }
    }
}
