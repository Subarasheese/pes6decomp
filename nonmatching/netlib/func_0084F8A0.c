/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008B142C[];
extern char D_008B142D[];

s8 func_0084F8A0(s8 arg0) {
    if ((*(s8 *)D_008B142C) != 0) {
        return (*(s8 *)D_008B142D);
    }
    (*(s8 *)D_008B142D) = arg0;
    return arg0;
}
