/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00921C50[];

s32 func_008F8470(s32 arg0) {
    return *(((u8 *)D_00921C50) + ((arg0 & 0xFF) * 4));
}
