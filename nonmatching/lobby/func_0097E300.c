/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00213800(void *);
extern void func_00213A00(s32, void *, s32, s32);
M2C_UNK func_002136B0(s32, u8);                     /* extern */
s32 func_00214540(M2C_UNK);                         /* extern */
M2C_UNK func_0099C6D0(M2C_UNK);                     /* extern */
M2C_UNK func_0099C7C0(void *);                      /* extern */
void *func_0099C7E0(M2C_UNK);                       /* extern */
u8 *func_00D0BAF0(void *);                          /* extern */
extern char D_009FE560[];
extern char D_009FE564[];
extern char D_009FE568[];
extern char D_009FE56C[];
extern char D_009FE570[];
extern char D_009FE574[];
extern char D_009FE578[];
extern void *D_00A68FF8;

void func_0097E300(void) {
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp2C;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    s32 var_s0;
    void *temp_v0;

    if ((D_00A68FF8 == NULL) && (temp_v0 = func_0099C7E0(0xC), D_00A68FF8 = temp_v0, (temp_v0 != NULL))) {
        M2C_FIELD(temp_v0, s8 *, 1) = 1;
        M2C_FIELD(D_00A68FF8, s32 *, 8) = func_00214540(0);
        if (M2C_FIELD(D_00A68FF8, s32 *, 8) == 0) {
            func_0099C7C0(D_00A68FF8);
            D_00A68FF8 = NULL;
            return;
        }
        var_s0 = 7;
        sp20 = (*(f32 *)D_009FE560);
        sp24 = (*(f32 *)D_009FE564);
        sp28 = (*(f32 *)D_009FE568);
        sp2C = (*(f32 *)D_009FE56C);
        sp30 = (*(f32 *)D_009FE570);
        sp34 = (*(f32 *)D_009FE574);
        sp38 = (*(f32 *)D_009FE578);
        if (*func_00D0BAF0(D_00A68FF8) == 0) {
            var_s0 = 6;
        }
        func_00213A00(M2C_FIELD(D_00A68FF8, s32 *, 8), &sp20, 0, var_s0);
        func_002136B0(M2C_FIELD(D_00A68FF8, s32 *, 8), M2C_FIELD(D_00A68FF8, u8 *, 3));
        func_00213800((void *) M2C_FIELD(D_00A68FF8, s32 *, 8));
        func_0099C6D0(1);
    }
}
