/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u32 func_008CC830(void);
extern void func_008CCA90(void);
extern void func_008CCD10(s32, s32);

void func_008CD080(void) {
    u32 temp_v0;
    u32 temp_v1;

    temp_v0 = func_008CC830();
    if (temp_v0 != 0) {
        temp_v1 = M2C_FIELD(temp_v0, u32 *, 0xA8);
        switch (temp_v1) {
        case 0:
            func_008CCD10(0, M2C_FIELD(temp_v0, s32 *, 0xAC));
            break;
        case 1:
            func_008CCD10(0, M2C_FIELD(temp_v0, s32 *, 0xB0));
            break;
        case 2:
            func_008CCD10(0, M2C_FIELD(temp_v0, s32 *, 0xB4));
            break;
        case 3:
            func_008CCD10(0, M2C_FIELD(temp_v0, s32 *, 0xB8));
            break;
        case 4:
            func_008CCD10(0, M2C_FIELD(temp_v0, s32 *, 0xBC));
            break;
        case 5:
            func_008CCD10(0, M2C_FIELD(temp_v0, s32 *, 0xC0));
            break;
        case 6:
            func_008CCD10(0, M2C_FIELD(temp_v0, s32 *, 0xC4));
            break;
        }
        func_008CCA90();
    }
}
