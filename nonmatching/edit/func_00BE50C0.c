/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00BEC980(u32);
extern void func_00C1B4B0(u32);
extern void func_00BEC970(u32);
extern void func_00BE6F70(u32);
u32 func_00BF3E60();                                /* extern */
u32 func_00BF3E70();                                /* extern */

void func_00BE50C0(void) {
    func_00BEC980(func_00BF3E70());
    func_00BEC970(func_00BF3E60());
    func_00C1B4B0(0U);
    func_00BE6F70(0U);
}
