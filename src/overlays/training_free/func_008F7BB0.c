/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 SD_call(s32);
extern s32 func_008F79E0(void);
s32 func_008FB320(s32);
s32 func_009A3650(s32);
extern u32 func_009A6D40(void);
s32 func_00B2A3E0(s32);
extern char D_00591DB4[];

s32 func_008F7BB0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 value;

    value = func_008F79E0();
    if (value != 0) {
        value &= func_009A3650(func_009A6D40() + 8);
    }
    if (value == 0) {
        SD_call(0x8C008005);
        return 0;
    }
    SD_call(0x84028400);
    func_00B2A3E0(1);
    func_008FB320(arg3);
    (*(s8 *)D_00591DB4) = 0;
    return 2;
}
