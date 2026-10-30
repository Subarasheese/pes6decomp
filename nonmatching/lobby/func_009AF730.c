/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0099B470(s32, s32, s32);               /* extern */
extern char D_009FF198[];
extern void *D_00A7DBF0;

void func_009AF730(s32 arg0) {
    if ((D_00A7DBF0 != NULL) && (arg0 != 0)) {
        func_0099B470(M2C_FIELD(D_00A7DBF0, s32 *, 0x10), (*(s32 *)D_009FF198), arg0);
    }
}
