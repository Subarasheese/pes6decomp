/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern char D_00CCB65C[];
extern char D_00CCB65E[];

void func_00C355A0(s32 arg0, s8 arg1) {
    s32 temp_v1;

    *(u8 *)(((u8 *)D_00CCB65C) + arg0) = 9;
    *(u8 *)(((u8 *)D_00CCB65E) + arg0) = arg1;
    temp_v1 = arg0 == 0;
    *(u8 *)(((u8 *)D_00CCB65C) + temp_v1) = 0xA;
    *(u8 *)(((u8 *)D_00CCB65E) + temp_v1) = arg1;
}
