/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002D5630(void *, s32);
M2C_UNK func_00C6CA70();                            /* extern */
extern char D_00CCBF10[];
extern char D_00CCBF18[];

void func_00C79E60(void) {
    func_002D5630(((void *)D_00CCBF10), 1);
    if (((u64) ((s64) (*(u8 *)D_00CCBF18) << 0x3D) >> 0x3F) != 0) {
        func_00C6CA70();
    }
}
