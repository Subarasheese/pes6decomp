/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D78E0(void *, void *);
extern void func_001DEFD0(void *, void *);
extern void func_001DF460(void *, void *);
extern void func_001ED990(void *, s32);
s32 func_0081DDE0(void *arg0, void *arg1) {
    u8 sp3C;
    u8 sp3D;
    u8 sp3E;
    u8 sp3F;
    s32 temp_v1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_s0;

    sp3C = 0;
    sp3D = 0;
    sp3E = 0;
    sp3F = 0;
    if (arg0 == NULL) {
        return 0;
    }
    temp_v1 = M2C_FIELD(arg0, s32 *, 0);
    switch (temp_v1) {                              /* irregular */
    case 2:
        temp_a0 = M2C_FIELD(arg0, void **, 0xC);
        if (temp_a0 == NULL) {
            return 0;
        }
        func_001D78E0(temp_a0, arg1);
block_28:
        return 1;
    case 1:
        temp_a0_2 = M2C_FIELD(arg0, void **, 0xC);
        if (temp_a0_2 == NULL) {
            return 0;
        }
        func_001ED990(temp_a0_2, (s32) arg1);
        goto block_28;
    case 0:
        temp_s0 = M2C_FIELD(arg0, void **, 0xC);
        if (temp_s0 != NULL) {
            func_001DEFD0(temp_s0, &sp3C);
            if ((sp3C != M2C_FIELD(arg1, u8 *, 0)) || (sp3D != M2C_FIELD(arg1, u8 *, 1)) || (sp3E != M2C_FIELD(arg1, u8 *, 2)) || (sp3F != M2C_FIELD(arg1, u8 *, 3))) {
                func_001DF460(temp_s0, arg1);
            }
            goto block_28;
        }
        return 0;
    default:
        return 0;
    }
}
