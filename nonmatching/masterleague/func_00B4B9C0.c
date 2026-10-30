/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];

extern u32 func_00B4DFD0(void);
M2C_UNK func_001B9D90(s128 *);                      /* extern */
M2C_UNK func_0095EF70(f32 *, M2C_UNK);              /* extern */
extern char D_00B80948[];
extern char D_00B8094C[];
extern char D_00B80950[];
extern char D_00B80960[];

s32 func_00B4B9C0(void) {
    s128 sp10;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    u32 temp_v0;

    sp20 = (*(f32 *)D_00B80948);
    sp24 = (*(f32 *)D_00B8094C);
    sp28 = (*(f32 *)D_00B80950);
    sp10 = (*(s128 *)D_00B80960);
    temp_v0 = func_00B4DFD0();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x34C) == 0) {
            func_001B9D90(&sp10);
            func_0095EF70(&sp20, 3);
        }
    }
    return 0;
}
