/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EDA30(void *, s32);
extern void func_001EDA50(void *, void *);
extern void * func_001EDD00(void *);
extern void func_001EDAE0(void *, s8);
void *func_001EE0D0();                              /* extern */
M2C_UNK func_001EF370(void *, s32 *);               /* extern */
extern char D_00CE4160[];
extern char D_00CE4164[];
extern char D_00CE4168[];
extern char D_00CE416C[];
extern char D_00CE419C[];
extern void *D_00CE41A0;
extern void *D_00CE41A4;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14], gap at: 0x8. */
void func_00BA2870(f32 fparg0) {
    s32 sp20;
    s32 sp24;
    f32 sp28;
    f32 sp2C;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    s32 sp3C;
    void *temp_v0;
    void *temp_v0_2;

    (*(s32 *)D_00CE419C) = 2;
    temp_v0 = func_001EE0D0();
    D_00CE41A0 = temp_v0;
    func_001EDA30(temp_v0, 0);
    func_001EDAE0(D_00CE41A0, 1);
    sp3C = 0;
    sp38 = fparg0;
    sp30 = (*(f32 *)D_00CE4160);
    sp34 = (*(f32 *)D_00CE4164);
    func_001EDA50(D_00CE41A0, &sp30);
    temp_v0_2 = func_001EDD00(D_00CE41A0);
    D_00CE41A4 = temp_v0_2;
    sp20 = 0;
    sp24 = 0;
    sp28 = (*(f32 *)D_00CE4168);
    sp2C = (*(f32 *)D_00CE416C);
    func_001EF370(temp_v0_2, &sp20);
}
