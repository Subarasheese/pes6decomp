/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00147F00(void);
extern char D_0051FF68[];

void func_00182B80(void) {
    if ((*(s32 *)D_0051FF68) != 0) {
        func_00147F00();
    }
}
