/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void func_0017E120(int);
extern u32 func_00B45600(void);
void func_00B476C0(s8 arg0) {
    u32 temp_v0;

    temp_v0 = func_00B45600();
    if (temp_v0 != 0) {
        func_001D7D60(M2C_FIELD(temp_v0, void **, 0x7D8), arg0);
        func_001D7D60(M2C_FIELD(temp_v0, void **, 0x7DC), arg0);
        func_001D7D60(M2C_FIELD(temp_v0, void **, 0x7E0), arg0);
        func_0017E120(1);
    }
}
