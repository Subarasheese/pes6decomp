/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B78A0(void);
extern void func_001B77F0(s32);
M2C_UNK func_001B7ED0(s32, s32);                    /* extern */

void func_00CECCB0(s32 arg0, s32 arg1) {
    func_001B78A0();
    func_001B7ED0(arg0, arg1);
    func_001B77F0(0);
}
