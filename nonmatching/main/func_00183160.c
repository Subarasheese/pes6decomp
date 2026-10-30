/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00145590(s32);                         /* extern */
extern char D_0051FF90[];
extern char D_0051FF94[];
extern char D_0051FF98[];

void func_00183160(void) {
    if ((*(s32 *)D_0051FF90) != 0) {
        func_00145590((*(s32 *)D_0051FF90));
    }
    if ((*(s32 *)D_0051FF94) != 0) {
        func_00145590((*(s32 *)D_0051FF94));
    }
    if ((*(s32 *)D_0051FF98) != 0) {
        func_00145590((*(s32 *)D_0051FF98));
    }
}
