/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00309420(void);
extern s32 D_003E77AC;
extern void *D_003E77B0;
extern char D_00591C09[];

s32 func_00230290(void) {
    s64 var_a1;
    void *var_s0;

    if ((func_00309420() != 0) == 1) {
        var_s0 = NULL;
    } else {
        var_s0 = D_003E77AC + 0xC;
    }
    if (var_s0 == NULL) {
        goto block_15;
    }
    var_a1 = 1;
    if ((func_00309420() != 0) == 1) {
        var_a1 = 0;
    } else {
        switch ((*(u8 *)D_00591C09)) {                       /* irregular */
        case 4:
            break;
        case 5:
            var_a1 = (s64) ((M2C_FIELD(D_003E77B0, u32 *, 0x20) & 0x20000) << 0x20) >> 0x20;
            break;
        }
    }
    if ((var_a1 == 1) && (((u64) ((s64) M2C_FIELD(var_s0, u8 *, 0xE) << 0x3B) >> 0x3F) != 0)) {
        return 1;
    }
block_15:
    return 0;
}
