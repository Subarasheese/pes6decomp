/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_002B9420(void);
extern void func_002B9670(void);
extern void *D_005E2F60[];

void func_002B96F0(void) {
    func_002B9420();
    D_005E2F60[0] = func_002B9670;
}
