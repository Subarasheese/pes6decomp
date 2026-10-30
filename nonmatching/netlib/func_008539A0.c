/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008B1DE0[];
extern char D_008B1DF0[];
extern char D_008B1DF5[];
extern char D_008B1DF6[];
extern char D_008B1DF8[];

s8 func_008539A0(s8 arg0) {
    (*(s8 *)D_008B1DF5) = 0;
    (*(s8 *)D_008B1DF8) = arg0;
    (*(s32 *)D_008B1DF0) = (*(s32 *)D_008B1DE0);
    return (*(s8 *)D_008B1DF6);
}
