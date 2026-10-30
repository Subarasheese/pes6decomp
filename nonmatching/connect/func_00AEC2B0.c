/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001ED8B0(void *, void *);
extern void func_001EDA50(void *, void *);
void *func_001EE0D0();                              /* extern */
extern char D_003F7794[];
extern char D_003F7796[];

void *func_00AEC2B0(void) {
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp2C;
    void *temp_v0;

    temp_v0 = func_001EE0D0();
    if (temp_v0 != NULL) {
        func_001ED8B0(temp_v0, &sp20);
        sp20 = (f32) -(*(s16 *)D_003F7794) / 2.0f;
        sp24 = (f32) -(*(s16 *)D_003F7796) / 2.0f;
        func_001EDA50(temp_v0, &sp20);
    }
    return temp_v0;
}
