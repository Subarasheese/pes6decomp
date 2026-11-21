/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    void *field_0;
    void *field_4;
    s32 field_8;
} Fields;

extern void func_001E5A10(void *, f32);
extern void func_001E59D0(void *, s8);
/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24], gap at: 0x8. */
void func_001B4CB0(Fields *arg0, f32 fparg0, f32 fparg1) {
    if (arg0 != 0) {
        func_001E5A10(arg0->field_0, fparg0);
        func_001E5A10(arg0->field_4, fparg1);
        if (arg0 != 0) {
            func_001E59D0(arg0->field_0, 1);
            func_001E59D0(arg0->field_4, 1);
            arg0->field_8 = 1;
        }
    }
}
