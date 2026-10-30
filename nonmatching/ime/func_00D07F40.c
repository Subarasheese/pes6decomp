/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002E4570(void *);
extern void func_001D7F10(void *);
s32 func_00D07F40(void *arg0) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;

    if (arg0 == NULL) {
        return 0;
    }
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s8 *, 0x3C) = 0;
        M2C_FIELD(arg0, s8 *, 0x3D) = 0;
    }
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s8 *, 0x3B) = 1;
        M2C_FIELD(arg0, s8 *, 0x39) = 0;
    }
    temp_a0 = M2C_FIELD(arg0, void **, 4);
    if (temp_a0 != NULL) {
        func_001D7F10(temp_a0);
        M2C_FIELD(arg0, void **, 4) = NULL;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    temp_a0_2 = M2C_FIELD(arg0, void **, 8);
    if (temp_a0_2 != NULL) {
        func_001D7F10(temp_a0_2);
        M2C_FIELD(arg0, void **, 8) = NULL;
    }
    temp_a0_3 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_a0_3 != NULL) {
        func_002E4570(temp_a0_3);
        M2C_FIELD(arg0, void **, 0xC) = NULL;
    }
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    return 1;
}
