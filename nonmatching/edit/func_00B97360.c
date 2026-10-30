/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B97850(void *);
M2C_UNK func_00B97400();                            /* extern */
M2C_UNK func_00B97660();                            /* extern */
M2C_UNK func_00B97B10();                            /* extern */
M2C_UNK func_00B97CF0(void *);                      /* extern */

void func_00B97360(void *arg0) {
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x3F);
    switch (temp_v1) {                              /* irregular */
    case 0:
        func_00B97850(arg0);
        break;
    case 1:
        func_00B97B10();
        break;
    case 2:
        func_00B97400();
        break;
    case 3:
        func_00B97660();
        break;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0x1C4) = (u8) M2C_FIELD(arg0, u8 *, 0x3F);
    func_00B97CF0(arg0);
}
