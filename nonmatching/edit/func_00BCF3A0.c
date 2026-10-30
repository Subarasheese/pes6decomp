/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CE5470[];

s32 func_00BCF3A0(s32 arg0) {
    return (arg0 & (*(s32 *)D_00CE5470)) != 0;
}
