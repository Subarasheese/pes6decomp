/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00D07200(void *);
extern s32 func_00D072A0(s32, void *);
s32 func_00D13860(void *arg0) {
    void *temp_a1;

    if (arg0 == NULL) {
        return 1;
    }
    if (arg0 != NULL) {
loop_5:
        temp_a1 = M2C_FIELD(arg0, void **, 0x164);
        if ((temp_a1 != NULL) && (temp_a1 != (arg0 + 0x168)) && (temp_a1 != (arg0 + 0x10)) && (M2C_FIELD(arg0, s32 *, 0) > 0)) {
            func_00D072A0(M2C_FIELD(arg0, s32 *, 0xC), temp_a1);
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) - 1);
            goto loop_5;
        }
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_00D07200(arg0 + 0x10);
    func_00D07200(arg0 + 0x168);
    M2C_FIELD(arg0, void **, 0x164) = (void *) (arg0 + 0x168);
    M2C_FIELD(arg0, s32 *, 0x160) = 0;
    M2C_FIELD(arg0, void **, 0x2B8) = (void *) (arg0 + 0x10);
    M2C_FIELD(arg0, s32 *, 0x2BC) = 0;
    return 0;
}
