/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002133E0(s32);                         /* extern */
extern void *D_003E7E1C;
extern s32 D_003EB330;
extern char D_00CFFED0[];
extern char D_00CFFED4[];

void func_00CF1DD0(void) {
    func_002133E0(D_003EB330);
    D_003EB330 = 0;
    (*(s32 *)D_00CFFED0) = M2C_FIELD(D_003E7E1C, s32 *, 0x14C);
    (*(s32 *)D_00CFFED4) = 0;
}
