/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_002D55B0(char *);
extern s32 func_0035A260(void);

extern s32 D_003EA5DC;
extern char D_0092F680[];

s32 func_009224C0(void) {
    s32 var_s0;

    var_s0 = 0;
    if ((func_002D55B0(((char *)D_0092F680) + (D_003EA5DC * 0x2C) + 0x18) == 1) || (func_0035A260() == 1)) {
        var_s0 = 1;
    }
    return var_s0;
}
