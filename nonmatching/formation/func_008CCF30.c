/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008CAD30(void *);                      /* extern */
M2C_UNK func_008D02E0(s32);                         /* extern */
M2C_UNK func_008D0430(void *, u8);                  /* extern */
M2C_UNK func_008D07E0(s32);                         /* extern */

void func_008CCF30(void *arg0) {
    if (arg0 != NULL) {
        func_008D07E0(arg0 + 0x480);
        func_008D02E0(arg0 + 0x480);
        func_008D0430(arg0 + 0x480, M2C_FIELD(arg0, u8 *, 3));
        func_008CAD30(arg0);
    }
}
