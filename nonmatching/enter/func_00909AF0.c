/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0027CB30(void);
extern void func_00297390(void);
extern void func_0017E2D0(void *, void *);
extern void *D_003EA52C;
extern char D_0092EF40[];
extern char D_0092F028[];

void func_00909AF0(void) {
    if ((*(u32 *)D_0092F028) != 0) {
        if (((u32) (*(u32 *)D_0092F028) >= 6U) && ((u32) (*(u32 *)D_0092F028) < 0x1EU)) {
            func_0017E2D0(((void *)D_0092EF40), D_003EA52C);
        }
        func_00297390();
        func_0027CB30();
    }
}
