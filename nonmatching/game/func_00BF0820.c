/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBE38[];
extern char D_00CBBE3B[];
extern char D_00CBBE3D[];

void func_00BF0820(void) {
    if ((*(u8 *)D_00CBBE38) != 0) {
        if ((*(u8 *)D_00CBBE3B) != 0) {
            (*(u8 *)D_00CBBE38) = 0;
            if ((*(u8 *)D_00CBBE38) == 0) {
                (*(s8 *)D_00CBBE3D) = 1;
            }
        } else {
            (*(u8 *)D_00CBBE3B) = 1;
        }
    } else {
        (*(u8 *)D_00CBBE38) = 2;
        if ((*(u8 *)D_00CBBE38) == 0) {
            (*(s8 *)D_00CBBE3D) = 1;
        }
        (*(u8 *)D_00CBBE3B) = 0;
    }
}
