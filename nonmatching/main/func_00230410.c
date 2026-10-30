/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00309420(void);
extern void *D_003E77B0;
extern char D_00591C09[];

s64 func_00230410(void) {
    s64 var_v0;

    var_v0 = 1;
    if ((func_00309420() != 0) == 1) {
        var_v0 = 0;
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return var_v0;
    }
    switch ((*(u8 *)D_00591C09)) {                           /* irregular */
    case 5:
        return (s64) ((M2C_FIELD(D_003E77B0, u32 *, 0x20) & 0x20000) << 0x20) >> 0x20;
    case 4:
        return var_v0;
    }
}
