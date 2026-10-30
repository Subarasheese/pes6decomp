/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA50(void);
M2C_UNK func_001C47E0(void *, void *, M2C_UNK);     /* extern */
extern char D_00591DC4[];
extern char D_008B1504[];

void func_00848B50(void *arg0) {
    if (func_002DCA50() == 0) {
        func_001C47E0(arg0, ((void *)D_008B1504) + 0x14, 0x40);
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) (*(s32 *)D_00591DC4);
    } else {
        func_001C47E0(((void *)D_008B1504) + 0x14, arg0, 0x40);
    }
}
