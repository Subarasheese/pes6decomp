/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0018C948(s32, s32);                        /* extern */
M2C_UNK func_0018C9D0(s32 *, s32 *, M2C_UNK *);     /* extern */
extern char D_005BFF98[];
extern char D_005BFFB0[];
extern char D_005BFFB4[];
extern char D_005BFFB8[];
extern char D_005BFFBC[];
extern char D_005BFFC0[];

void func_0016B498(void) {
    func_0018C9D0(((void *)D_005BFFB0), ((void *)D_005BFFB4), ((void *)D_005BFF98));
    (*(s32 *)D_005BFFB8) = (*(s32 *)D_005BFFB0);
    (*(s32 *)D_005BFFBC) = (*(s32 *)D_005BFFB4);
    (*(s32 *)D_005BFFC0) = func_0018C948((*(s32 *)D_005BFFB4), (*(s32 *)D_005BFFB0)) == 0;
}
