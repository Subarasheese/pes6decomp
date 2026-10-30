/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001EDD00(void *);
extern void func_001EF900(void *, s8);
extern void func_001EF860(void *, void *);
M2C_UNK func_001EE790(void *, s16 *);               /* extern */
M2C_UNK func_001EEAC0(void *, s32);                 /* extern */
M2C_UNK func_001EF370(void *, s8 *);                /* extern */

void *func_00AEE120(void *arg0, void *arg1, s32 arg2, f32 fparg0, f32 fparg1) {
    s16 sp50;
    s16 sp52;
    s16 sp54;
    s16 sp56;
    s16 sp58;
    s16 sp5A;
    s16 sp5C;
    s16 sp5E;
    s8 sp60;
    f32 sp68;
    f32 sp6C;
    f32 sp70;
    f32 sp74;
    f32 *var_v1;
    f32 temp_f3;
    f32 temp_f4;
    s32 temp_f0;
    s32 temp_f0_2;
    s32 temp_f1;
    s32 temp_f1_2;
    s32 var_v0;
    s32 var_v0_2;
    s8 *var_v1_2;
    void *temp_v0;

    temp_v0 = func_001EDD00(arg1);
    if (temp_v0 != NULL) {
        var_v1 = &sp70;
        var_v0 = 0x10;
        if (var_v1 != NULL) {
            do {
                *var_v1 = 0;
                var_v0 -= 1;
                var_v1 += 1;
            } while (var_v0 != 0);
        }
        var_v1_2 = &sp60;
        var_v0_2 = 0x10;
        sp70 = fparg0;
        sp74 = fparg1;
        if (var_v1_2 != NULL) {
            do {
                *var_v1_2 = 0;
                var_v0_2 -= 1;
                var_v1_2 += 1;
            } while (var_v0_2 != 0);
        }
        sp68 = 0.8f * M2C_FIELD(arg0, f32 *, 8);
        sp6C = M2C_FIELD(arg0, f32 *, 0xC);
        func_001EEAC0(temp_v0, arg2);
        func_001EF860(temp_v0, &sp70);
        func_001EF370(temp_v0, &sp60);
        temp_f4 = M2C_FIELD(arg0, f32 *, 0);
        temp_f3 = M2C_FIELD(arg0, f32 *, 4);
        temp_f1 = (s32) temp_f4;
        temp_f0 = (s32) (temp_f4 + M2C_FIELD(arg0, f32 *, 8));
        sp50 = (s16) temp_f1;
        sp58 = (s16) temp_f1;
        sp54 = (s16) temp_f0;
        sp5C = (s16) temp_f0;
        temp_f1_2 = (s32) temp_f3;
        temp_f0_2 = (s32) (temp_f3 + M2C_FIELD(arg0, f32 *, 0xC));
        sp52 = (s16) temp_f1_2;
        sp56 = (s16) temp_f1_2;
        sp5A = (s16) temp_f0_2;
        sp5E = (s16) temp_f0_2;
        func_001EE790(temp_v0, &sp50);
        func_001EF900(temp_v0, 1);
    }
    return temp_v0;
}
