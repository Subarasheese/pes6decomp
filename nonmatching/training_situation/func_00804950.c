/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002631D0(void);
extern void func_001D7D60(void *, s8);
M2C_UNK func_00C93DB0(M2C_UNK);                     /* extern */
void *func_00CE3CD0(s32, M2C_UNK);                  /* extern */
extern s32 D_003E7E1C;
extern char D_008168E0[];
extern void *D_008168E4;

void func_00804950(void) {
    if ((*(s32 *)D_008168E0) != 0) {
        func_001D7D60(D_008168E4, 1);
        func_001D7D60(func_00CE3CD0(D_003E7E1C, 0), 1);
    }
    if (func_002631D0() != 2) {
        func_00C93DB0(0);
    }
}
