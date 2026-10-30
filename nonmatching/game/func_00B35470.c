/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00207360(int);
extern void func_0027A770(void);
extern void func_001AFD70(int);
void func_00B35470(void **arg0) {
    func_00207360(M2C_FIELD(*arg0, s32 *, 4));
    func_001AFD70(*M2C_FIELD(*arg0, s32 **, 4));
    func_0027A770();
}
