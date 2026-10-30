/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00264790(void *, u8);
extern int func_002646D0(int);
extern void func_00182B30(int);
extern void func_002648F0(int);
extern void func_002648E0(int);
M2C_UNK func_001A1420();                            /* extern */
M2C_UNK func_002646E0(s32);                         /* extern */

s32 func_00CD4150(s32 arg0) {
    s32 temp_v1;

    func_002648F0(arg0);
    temp_v1 = func_002646D0(arg0) & 0xFF;
    if (temp_v1 != 1) {
        if (temp_v1 != 0) {
            func_00264790((void *) arg0, 0U);
        }
        func_001A1420();
        func_00182B30(0);
        func_002646E0(arg0);
    }
    func_002648E0(arg0);
    return 1;
}
