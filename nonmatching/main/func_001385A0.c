/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00137320(s32, s64 *);                  /* extern */
extern s32 D_003E97A0;

void func_001385A0(s32 *arg0, s64 arg1, s64 arg2, s32 arg3, s32 arg4) {
    s64 sp10;
    s64 sp18;
    s32 sp20;
    s32 sp24;

    sp10 = arg1;
    sp18 = arg2;
    sp24 = arg4;
    sp20 = arg3 - *arg0;
    func_00137320(D_003E97A0 + 0x53CDC0, &sp10);
}
