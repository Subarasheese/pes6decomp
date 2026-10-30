/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001ED8B0(void *, void *);
extern void func_001EDA50(void *, void *);
extern char D_003F7794[];
extern char D_003F7796[];

void func_00AEC200(void *arg0, void *arg1) {
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;

    func_001ED8B0(arg0, &sp30);
    sp30 = M2C_FIELD(arg1, f32 *, 0) + ((f32) -(*(s16 *)D_003F7794) / 2.0f);
    sp34 = M2C_FIELD(arg1, f32 *, 4) + ((f32) -(*(s16 *)D_003F7796) / 2.0f);
    func_001EDA50(arg0, &sp30);
}
