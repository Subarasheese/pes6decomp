/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00153FA0(s32);                         /* extern */
M2C_UNK func_001C4730(s32, s32, u16);               /* extern */
extern char D_00520310[];
extern char D_00520314[];
extern char D_00520318[];
extern char D_0052031E[];

void func_0019ED60(void) {
    if ((*(s32 *)D_00520318) != 0) {
        func_001C4730((*(s32 *)D_00520314), (*(s32 *)D_00520318), (*(u16 *)D_0052031E));
        func_00153FA0((*(s32 *)D_00520318));
    }
    (*(s32 *)D_00520314) = 0;
    (*(s32 *)D_00520318) = 0;
    (*(s32 *)D_00520310) = 0;
}
