/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BC360(void);
extern void func_0026B580(void *, s32, s32);
extern void *D_003EA6C0;

void func_008FAD70(s32 arg0) {
    func_001BC360();
    func_0026B580(D_003EA6C0, 5, arg0);
}
