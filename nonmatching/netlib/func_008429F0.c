/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A8388[];
extern char D_008A8389[];
extern char D_008A838A[];
extern char D_008A838B[];
extern char D_008A838C[];
extern char D_008A838D[];

s32 func_008429F0(s64 arg0) {
    (*(s8 *)D_008A8388) = (s8) arg0;
    if (((s64) (arg0 << 0x38) >> 0x38) == 1) {
        (*(s8 *)D_008A8389) = (s8) arg0;
        (*(s8 *)D_008A838A) = (s8) arg0;
        (*(s8 *)D_008A838B) = (s8) arg0;
        (*(s8 *)D_008A838C) = (s8) arg0;
        (*(s8 *)D_008A838D) = (s8) arg0;
    }
    return 1;
}
