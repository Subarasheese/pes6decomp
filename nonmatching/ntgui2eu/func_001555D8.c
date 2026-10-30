/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001560B8(void *);
extern char D_011E0D80[];
extern char D_011E0D84[];
extern char D_011E0D88[];
extern char D_011E0DC0[];

void func_001555D8(void) {
    (*(s32 *)D_011E0D80) = 0;
    (*(s32 *)D_011E0D84) = 0;
    (*(s32 *)D_011E0D88) = 0;
    func_001560B8(((void *)D_011E0DC0));
}
