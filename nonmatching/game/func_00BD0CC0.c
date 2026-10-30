/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00154490(s32, s32);
extern u32 func_009B4620(void);
extern void func_009B4610(u32);
s32 func_009B4700();                                /* extern */
M2C_UNK func_00B26170(u8);                          /* extern */
M2C_UNK func_00B26280(s32);                         /* extern */
s32 func_00B26420();                                /* extern */
M2C_UNK func_00B26490(u32);                         /* extern */
extern char D_00CBAA08[];

void func_00BD0CC0(void) {
    s32 temp_s0;

    temp_s0 = func_009B4700();
    if ((func_009B4620() != 0) && (func_00B26420() == 0)) {
        func_00B26490(func_009B4620());
    }
    func_00B26280(temp_s0);
    if (func_00B26420() == 1) {
        func_00B26170((*(u8 *)D_00CBAA08));
    }
    if (func_00154490(temp_s0, 1) != 0) {
        if (func_009B4620() == 0) {
            func_009B4610(1U);
        } else {
            func_009B4610(0U);
        }
        func_00B26490(func_009B4620());
    }
}
