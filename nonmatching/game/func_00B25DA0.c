/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBED8[];
extern char D_00CBBEDA[];
extern char D_00CBBEDC[];
extern char D_00CBBEDD[];

void func_00B25DA0(s32 *arg0, s32 *arg1, u8 *arg2, u8 *arg3) {
    *arg0 = (s32) (*(s16 *)D_00CBBED8);
    *arg1 = (s32) (*(s16 *)D_00CBBEDA);
    *arg2 = (*(u8 *)D_00CBBEDC);
    *arg3 = (*(u8 *)D_00CBBEDD);
}
