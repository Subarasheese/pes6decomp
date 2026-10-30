/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D80(void *, s16);
extern s32 func_001D7BC0(void *);
extern s32 func_001D7980(void *);
extern void *D_00A7DF08;

s32 func_009E4BA0(void) {
    if (D_00A7DF08 != NULL) {
        if (func_001D7980(M2C_FIELD(D_00A7DF08, void **, 0x14)) & 0xFF) {
            func_001D7D80(M2C_FIELD(D_00A7DF08, void **, 0x18), (s16) ((s64) (func_001D7BC0(M2C_FIELD(D_00A7DF08, void **, 0x14)) << 0x30) >> 0x30));
        } else if (func_001D7980(M2C_FIELD(D_00A7DF08, void **, 0x18)) & 0xFF) {
            func_001D7D80(M2C_FIELD(D_00A7DF08, void **, 0x14), (s16) ((s64) (func_001D7BC0(M2C_FIELD(D_00A7DF08, void **, 0x18)) << 0x30) >> 0x30));
        }
        return 1;
    }
    return 0;
}
