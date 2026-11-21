/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 func_002A6D40(u8, u8);
extern u16 func_002A8750(void);

extern char D_005E2F78[];
extern char D_005E2F9C[];
extern char D_005E328F[];

s32 func_002B9990(void) {
    u8 value;

    if ((*(u8 *)D_005E328F) != 0) {
        if (func_002A6D40(1U, 0U) != 0) {
            value = (*(u8 *)D_005E328F);
            if (value == (func_002A8750() & 0xFFFF)) {
                goto finish;
            }
        } else {
            goto finish;
        }
    } else {
    finish:
        *(((s8 *)D_005E2F9C) + (*(s32 *)D_005E2F78)) = 0;
    }
    return 0;
}
