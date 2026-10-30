/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00226620(void);
extern void * func_0022F150(void);
extern void func_00239F50(s32, s32, s8);
extern void * func_0022C1E0(void);
extern void func_00226670(s8);
extern u8 func_002273C0(void);
extern s32 func_0022C140(s32);
extern void func_00239FF0(void);
M2C_UNK func_00239210(u8, s32, s32, M2C_UNK, M2C_UNK); /* extern */

void func_0099BEC0(void) {
    s32 temp_a1;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_v0_2;
    s32 var_s3;
    void *temp_s0;
    void *temp_v0;

    temp_s0 = func_0022C1E0();
    temp_v0 = func_0022F150();
    if ((temp_s0 != NULL) && (temp_v0 != NULL)) {
        M2C_FIELD(temp_s0, s8 *, 1) = 0;
        temp_v0_2 = func_0022C140(0);
        if (temp_v0_2 != 0) {
            func_00226670((s8) M2C_FIELD(temp_v0_2, u8 *, 9));
            func_00239FF0();
            temp_s1 = M2C_FIELD(temp_s0, u8 *, 0x124) & 1;
            temp_s0_2 = func_002273C0() & 0xFF;
            var_s3 = 0;
            if ((func_00226620() & 0xFF) > 0) {
                do {
                    temp_a1 = var_s3 & 0xFF;
                    func_00239F50(0 & 0xFF, temp_a1, (s8) temp_a1);
                    var_s3 += 1;
                } while (var_s3 < (func_00226620() & 0xFF));
            }
            func_00239210(func_00226620(), temp_s1, temp_s0_2, 0, 1);
        }
    }
}
