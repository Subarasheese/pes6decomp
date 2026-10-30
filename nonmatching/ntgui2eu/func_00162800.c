/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00162E28(void);
M2C_UNK func_00162E30(s32);                         /* extern */
extern M2C_UNK (*D_005BFD70)();

void func_00162800(s32 arg0) {
    D_005BFD70();
    func_00162E28();
    func_00162E30(arg0);
}
