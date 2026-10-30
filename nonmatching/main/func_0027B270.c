/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001AC500(s32, s32);
extern void func_00153FA0(void *);
M2C_UNK func_001514D0(void *);                      /* extern */
M2C_UNK func_001A5A20(void *);                      /* extern */
extern void *D_003E9CC0;

void func_0027B270(void *arg0, s32 arg1) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0xC);
    switch (temp_v1) {                              /* irregular */
    case 2:
        break;
    case 3:
        if (D_003E9CC0 != NULL) {
            func_001514D0(D_003E9CC0);
            func_00153FA0(D_003E9CC0);
            D_003E9CC0 = NULL;
        }
        break;
    default:
        func_001AC500(arg1, 1);
        break;
    }
    func_001A5A20(arg0);
}
