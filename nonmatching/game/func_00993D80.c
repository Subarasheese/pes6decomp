/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591BE4[];
extern char D_005926FF[];
extern char D_00CBBE44[];
extern char D_00CBCC6C[];

u8 func_00993D80(void) {
    switch ((*(u8 *)D_005926FF)) {                           /* irregular */
    case 4:
        return (*(u8 *)D_00CBBE44);
    case 1:
        if ((*(s32 *)D_00CBCC6C) < (s32) (*(u8 *)D_00591BE4)) {
            return 1U;
        }
    default:
        return 0U;
    }
}
