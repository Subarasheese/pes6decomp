/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern float func_001A3830(void);
extern float func_001A3840(void);
M2C_UNK func_0019E670(f32, f32);                    /* extern */
extern char D_005200F0[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14], gap at: 0x8. */
void func_00189A50(void) {
    f32 temp_f20;

    if ((*(s32 *)D_005200F0) != 1) {
        temp_f20 = fabsf(func_001A3840());
        func_0019E670(temp_f20, fabsf(func_001A3830()));
        (*(s32 *)D_005200F0) = 1;
    }
}
