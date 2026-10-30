/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008B1584[];
extern char D_008B1585[];
extern char D_008B1594[];

void func_00850540(s8 arg0) {
    if (arg0 == 0) {
        (*(s8 *)D_008B1585) = 0;
    }
    (*(s8 *)D_008B1584) = arg0;
    (*(s32 *)D_008B1594) = 0;
}
