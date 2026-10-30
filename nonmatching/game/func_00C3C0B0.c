/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CCB970[];

s32 func_00C3C0B0(s32 arg0) {
    return ((*(u16 *)D_00CCB970) & ((1 << arg0) & 0xFFFF)) != 0;
}
