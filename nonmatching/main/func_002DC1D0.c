/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001F1EA0(void *);
extern void Pes6Process_Unlink(s32);
M2C_UNK Pes6Process_Destroy(s32);                         /* extern */

void func_002DC1D0(void *arg0) {
    if (arg0 != NULL) {
        func_001F1EA0(M2C_FIELD(arg0, void **, 0x34));
        Pes6Process_Unlink(M2C_FIELD(arg0, s32 *, 0x40));
        Pes6Process_Destroy(M2C_FIELD(arg0, s32 *, 0x40));
    }
}
