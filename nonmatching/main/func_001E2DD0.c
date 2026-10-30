/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00153FA0(s32);                         /* extern */
extern char D_0052AED4[];
extern char D_0052AEDC[];

void func_001E2DD0(void) {
    if ((*(s32 *)D_0052AED4) != 0) {
        func_00153FA0((*(s32 *)D_0052AED4));
        (*(s32 *)D_0052AED4) = 0;
    }
    if ((*(s32 *)D_0052AEDC) != 0) {
        func_00153FA0((*(s32 *)D_0052AEDC));
        (*(s32 *)D_0052AEDC) = 0;
    }
}
