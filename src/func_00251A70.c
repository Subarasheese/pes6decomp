/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00255B80();                                /* extern */
extern char D_005843A0[];
extern char D_005843A8[];

s32 func_00251A70(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_00255B80();
    (*(s32 *)D_005843A0) = temp_v0;
    if (temp_v0 == 0) {
        (*(s32 *)D_005843A8) = 0;
    } else {
        (*(s32 *)D_005843A8) = arg0;
    }
    return (*(s32 *)D_005843A0);
}
