/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001DF010(void *);
extern void func_001D7D60(void *, s8);
extern void func_001DF4F0(void *, s8);
extern void func_001EDAE0(void *, s8);
extern s32 func_001D7980(void *);
s32 func_0081DF10(void *arg0, s64 arg1) {
    s32 temp_v1;
    s64 temp_s1;
    void *temp_a0;
    void *temp_s2;
    void *temp_s2_2;

    if (arg0 == NULL) {
        return 0;
    }
    temp_v1 = M2C_FIELD(arg0, s32 *, 0);
    switch (temp_v1) {                              /* irregular */
    case 2:
        temp_s2 = M2C_FIELD(arg0, void **, 0xC);
        if (temp_s2 != NULL) {
            temp_s1 = (s64) (arg1 << 0x38) >> 0x38;
            if ((temp_s1 != (func_001D7980(temp_s2) & 0xFF)) && (temp_s2 != NULL) && (temp_s1 != (func_001D7980(temp_s2) & 0xFF))) {
                func_001D7D60(temp_s2, arg1 & 0xFF);
            }
block_32:
            return 1;
        }
        return 0;
    case 1:
        temp_a0 = M2C_FIELD(arg0, void **, 0xC);
        if (temp_a0 == NULL) {
            return 0;
        }
        if ((temp_a0 != NULL) && (M2C_FIELD(temp_a0, u8 *, 0x38) != ((s64) (arg1 << 0x38) >> 0x38))) {
            func_001EDAE0(temp_a0, arg1 & 0xFF);
        }
        goto block_32;
    case 0:
        temp_s2_2 = M2C_FIELD(arg0, void **, 0xC);
        if (temp_s2_2 != NULL) {
            if (((s64) (arg1 << 0x38) >> 0x38) != (func_001DF010(temp_s2_2) & 0xFF)) {
                func_001DF4F0(temp_s2_2, arg1 & 0xFF);
            }
            goto block_32;
        }
        return 0;
    default:
        return 0;
    }
}
