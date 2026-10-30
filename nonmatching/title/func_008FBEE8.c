/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008FBEE8(void *arg0) {
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x40);
    temp_v0 = M2C_FIELD(temp_v1, void **, 0x1C8);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x28) = 0;
    }
    temp_v0_2 = M2C_FIELD(temp_v1, void **, 0x1D8);
    if (temp_v0_2 != NULL) {
        M2C_FIELD(temp_v0_2, s32 *, 0x28) = 0;
    }
    temp_v0_3 = M2C_FIELD(temp_v1, void **, 0x1E8);
    if (temp_v0_3 != NULL) {
        M2C_FIELD(temp_v0_3, s32 *, 0x28) = 0;
    }
    temp_v0_4 = M2C_FIELD(temp_v1, void **, 0x1CC);
    if (temp_v0_4 != NULL) {
        M2C_FIELD(temp_v0_4, s32 *, 0x28) = 0;
    }
    temp_v0_5 = M2C_FIELD(temp_v1, void **, 0x1DC);
    if (temp_v0_5 != NULL) {
        M2C_FIELD(temp_v0_5, s32 *, 0x28) = 0;
    }
    temp_v0_6 = M2C_FIELD(temp_v1, void **, 0x1EC);
    if (temp_v0_6 != NULL) {
        M2C_FIELD(temp_v0_6, s32 *, 0x28) = 0;
    }
    return 1;
}
