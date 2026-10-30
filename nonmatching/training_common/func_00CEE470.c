/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00264790(void *, u8);
extern s32 func_0017F900(void);
extern void func_00182B30(int);
extern void func_00CE4650(void);
void func_00CEE470(void *arg0) {
    if (func_0017F900() != 0) {
        func_00182B30(1);
        func_00CE4650();
        func_00264790(arg0, 0xDU);
    }
}
