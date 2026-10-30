/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA50(void);
M2C_UNK func_001C47E0(s32, void *, M2C_UNK);        /* extern */
extern char D_008B1504[];

s32 func_00848BC0(s32 arg0) {
    if (M2C_FIELD(((void *)D_008B1504), u8 *, 0x10) == 0) {
        return -1;
    }
    if (func_002DCA50() == 0) {
        func_001C47E0(arg0, ((void *)D_008B1504) + 0x14, 0x40);
    }
    return 0;
}
