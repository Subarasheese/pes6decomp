/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_008D2930(void *, u32);
M2C_UNK func_008CBFF0(void *);                      /* extern */
M2C_UNK func_008D0340(void *);                      /* extern */

void func_008CB120(void *arg0, u32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, u32 *, 0x478) = arg1;
        func_008D2930(arg0 + 0x480, arg1);
        if (M2C_FIELD(arg0, u8 *, 0x489) == 4) {
            func_008D0340(arg0 + 0x480);
        }
        if (M2C_FIELD(arg0, u8 *, 0x16) == 2) {
            func_008CBFF0(arg0);
        }
    }
}
