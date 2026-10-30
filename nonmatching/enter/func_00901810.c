/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00182AE0(s32);
extern void func_00182B20(int);
extern void func_0019FBA0(void);
extern void func_00182B30(int);
M2C_UNK func_0019F4D0();                            /* extern */
M2C_UNK func_001A2330(M2C_UNK);                     /* extern */

s32 func_00901810(void) {
    func_00182B30(1);
    func_00182B20(1);
    func_00182AE0(1);
    func_001A2330(2);
    func_0019FBA0();
    func_0019F4D0();
    return 1;
}
