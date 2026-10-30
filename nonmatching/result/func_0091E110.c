/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F4E10(void *);
M2C_UNK func_002F2ED0(void *);                      /* extern */
s32 func_002F3850(void *);                          /* extern */
extern char D_00921D44[];
extern void *D_00923FC8;

s32 func_0091E110(void) {
    func_002F2ED0(M2C_FIELD(D_00923FC8, void **, 0x110));
    if (func_002F3850(M2C_FIELD(D_00923FC8, void **, 0x110)) != 4) {
        return 0;
    }
    func_002F4E10(M2C_FIELD(D_00923FC8, void **, 0x110));
    M2C_FIELD(D_00923FC8, void **, 0x110) = NULL;
    (*(s32 *)D_00921D44) = 1;
    return 1;
}
