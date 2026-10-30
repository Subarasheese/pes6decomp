/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591BBF[];
extern char D_00591C09[];
extern char D_00591DCD[];

s32 func_00BCCA00(void) {
    if ((s32) (*(u8 *)D_00591DCD) < 2) {
        return 0;
    }
    if (((*(u8 *)D_00591C09) != 0xE) && ((*(u8 *)D_00591C09) != 4) && ((*(u8 *)D_00591C09) != 2) && ((*(u8 *)D_00591C09) != 1) && ((*(u8 *)D_00591C09) != 0) && ((*(u8 *)D_00591C09) != 8)) {
        return 1;
    }
    return (*(u8 *)D_00591BBF) == 1;
}
