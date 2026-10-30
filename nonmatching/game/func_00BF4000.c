/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBE38[];
extern char D_00CBBE3D[];

void func_00BF4000(u8 arg0) {
    (*(u8 *)D_00CBBE38) = arg0;
    if ((*(u8 *)D_00CBBE38) == 0) {
        (*(s8 *)D_00CBBE3D) = 1;
    }
}
