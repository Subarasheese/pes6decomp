/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00213A00(s32, void *, s32, s32);
M2C_UNK func_002134A0(s32, M2C_UNK, M2C_UNK);       /* extern */
void *func_0099C7E0(M2C_UNK);                       /* extern */
s32 func_009DE6C0(M2C_UNK);                         /* extern */
M2C_UNK func_009DE980(s32);                         /* extern */
M2C_UNK func_009DEA70(M2C_UNK);                     /* extern */
M2C_UNK func_009DEB80();                            /* extern */
extern char D_009FFFD0[];
extern char D_009FFFD4[];
extern void *D_00A7DEC8;

void func_009DE3A0(s32 arg0) {
    f32 sp28;
    f32 sp2C;
    M2C_UNK var_a2;
    void *temp_v0;

    if (D_00A7DEC8 == NULL) {
        temp_v0 = func_0099C7E0(0x20C);
        D_00A7DEC8 = temp_v0;
        if (temp_v0 != NULL) {
            sp28 = (*(f32 *)D_009FFFD0);
            sp2C = (*(f32 *)D_009FFFD4);
            M2C_FIELD(D_00A7DEC8, s32 *, 0) = func_009DE6C0(0);
            func_00213A00(M2C_FIELD(D_00A7DEC8, s32 *, 0), &sp28, 0, 2);
            if (M2C_FIELD(D_00A7DEC8, s8 *, 4) == 0) {
                var_a2 = 1;
            } else {
                var_a2 = 0;
            }
            func_002134A0(M2C_FIELD(D_00A7DEC8, s32 *, 0), 1, var_a2);
            func_009DEB80();
            func_009DEA70(0);
            func_009DE980(arg0);
        }
    }
}
