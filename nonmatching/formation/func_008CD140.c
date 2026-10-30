/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008CAD30(void *);                      /* extern */
M2C_UNK func_008CB5D0(void *, u8);                  /* extern */
M2C_UNK func_008D02E0(s32);                         /* extern */
M2C_UNK func_008D1EF0(void *, M2C_UNK);             /* extern */
M2C_UNK func_008D2500(void *);                      /* extern */

void func_008CD140(void *arg0) {
    if (arg0 != NULL) {
        func_008D02E0(arg0 + 0x480);
        func_008CB5D0(arg0, M2C_FIELD(arg0, u8 *, 7));
        func_008D1EF0(arg0 + 0x480, 0);
        func_008CAD30(arg0);
        func_008D2500(arg0 + 0x480);
    }
}
