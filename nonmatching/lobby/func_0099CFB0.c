/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F4E10(void *);
extern void *D_00A7DB20;
extern char D_00A7DB28[];

s32 func_0099CFB0(void) {
    func_002F4E10(D_00A7DB20);
    D_00A7DB20 = NULL;
    (*(s8 *)D_00A7DB28) = 0;
    return 1;
}
