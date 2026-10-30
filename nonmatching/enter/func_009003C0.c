/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0035A040(s32);
extern s32 func_00359F40(void);
M2C_UNK func_00900000();                            /* extern */
extern char D_0092F0A8[];
extern s32 *D_0092F0AC;
extern M2C_UNK func_008FFAE0;

void func_009003C0(void) {
    if ((&func_008FFAE0 == (*(s32 *)D_0092F0A8)) && (func_00359F40() == 1)) {
        func_0035A040(*D_0092F0AC);
    }
    func_00900000();
}
