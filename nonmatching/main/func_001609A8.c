/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00167190(void);
extern void func_0015E3A0(void);
extern char D_0037BA48[];

s32 func_001609A8(void) {
    if ((*(s32 *)D_0037BA48) == 0) {
        (*(s32 *)D_0037BA48) = 1;
        func_00167190();
        func_0015E3A0();
        (*(s32 *)D_0037BA48) = 0;
    }
    return 0;
}
