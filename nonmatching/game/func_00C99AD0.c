/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0026B580(void *, s32, s32);
extern s32 func_002F39A0(void *);
void func_00C99AD0(void *arg0, s32 arg1) {
    func_0026B580(arg0, 4, arg1);
    func_002F39A0(M2C_FIELD(arg0, void **, 0x18));
}
