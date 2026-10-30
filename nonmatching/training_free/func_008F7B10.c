/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BC300(void);
M2C_UNK func_0026B4F0(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
extern M2C_UNK func_008F7AB0;
extern M2C_UNK func_008F7AE0;

s32 func_008F7B10(void) {
    func_0026E840(0x84028400);
    func_001BC300();
    func_0026B4F0(&func_008F7AE0, &func_008F7AB0, 0);
    return 2;
}
