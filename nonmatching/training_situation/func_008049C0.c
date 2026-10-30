/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
void *func_00CE3CD0(s32, M2C_UNK);                  /* extern */
extern s32 D_003E7E1C;
extern char D_008168E0[];
extern void *D_008168E4;

void func_008049C0(void) {
    if ((*(s32 *)D_008168E0) != 0) {
        func_001D7D60(D_008168E4, 0);
        func_001D7D60(func_00CE3CD0(D_003E7E1C, 0), 0);
    }
}
