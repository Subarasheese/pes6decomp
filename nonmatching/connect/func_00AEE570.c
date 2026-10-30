/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF750(void *, f32, f32);
extern char D_003F7794[];

void func_00AEE570(void *arg0, f32 fparg0, f32 fparg1) {
    func_001DF750(arg0, fparg0 + ((f32) -(*(s16 *)D_003F7794) / 2.0f), fparg1);
}
