/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001EDD00(void *);
extern int func_0020C4E0(int);
extern void func_001EF900(void *, s8);
M2C_UNK func_001EE890(void *, s32);                 /* extern */
M2C_UNK func_001EEAC0(void *, s32);                 /* extern */
M2C_UNK func_001EF370(void *, s32 *);               /* extern */
s32 func_0020C570(s32, s32, s32 *, M2C_UNK, u16 *, u16 *); /* extern */

void *func_0020DA30(void *arg0, s32 arg1, s32 arg2) {
    s32 sp40;
    s32 sp44;
    f32 sp48;
    f32 sp4C;
    s32 sp58;
    u16 sp5C;
    u16 sp5E;
    f32 var_f0;
    f32 var_f0_2;
    s32 temp_v0_2;
    void *temp_v0;

    temp_v0 = func_001EDD00(arg0);
    if ((temp_v0 != NULL) && (arg1 != 0) && (arg2 < func_0020C4E0(arg1))) {
        temp_v0_2 = func_0020C570(arg1, arg2, &sp58, 0, &sp5E, &sp5C);
        sp40 = 0;
        sp44 = 0;
        if ((s32) sp5E >= 0) {
            var_f0 = (f32) sp5E;
        } else {
            var_f0 = 2.0f * (f32) ((sp5E >> 1) | (sp5E & 1));
        }
        sp48 = var_f0;
        if ((s32) sp5C >= 0) {
            var_f0_2 = (f32) sp5C;
        } else {
            var_f0_2 = 2.0f * (f32) ((sp5C >> 1) | (sp5C & 1));
        }
        sp4C = var_f0_2;
        func_001EEAC0(temp_v0, temp_v0_2);
        func_001EF370(temp_v0, &sp40);
        func_001EE890(temp_v0, sp58);
        func_001EF900(temp_v0, 0);
    }
    return temp_v0;
}
