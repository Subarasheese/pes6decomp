/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001E6C50(void *);
extern void func_00153FA0(void *);
extern void *D_0052ABF0;
extern void *D_0052ABF4;
extern char D_0052ABFC[];

void func_001DC980(void *arg0) {
    u8 *temp_v1_2;
    void *temp_a0;
    void *temp_v1;

    if (arg0 != NULL) {
        temp_a0 = M2C_FIELD(arg0, void **, 0x5C);
        temp_v1 = M2C_FIELD(arg0, void **, 0x60);
        if (temp_a0 != NULL) {
            M2C_FIELD(temp_a0, void **, 0x60) = temp_v1;
        } else {
            D_0052ABF0 = temp_v1;
        }
        if (temp_v1 != NULL) {
            M2C_FIELD(temp_v1, void **, 0x5C) = temp_a0;
        } else {
            D_0052ABF4 = temp_a0;
        }
        temp_v1_2 = ((void *)D_0052ABFC) + (M2C_FIELD(arg0, s32 *, 4) - 0x6784);
        *temp_v1_2 &= 0xFE;
        func_001E6C50(M2C_FIELD(arg0, void **, 0xC));
        func_00153FA0(arg0);
    }
}
