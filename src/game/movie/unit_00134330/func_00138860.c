/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 *D_003E97A0;
void func_00135830(void);
void func_00137BA0(void *);

s32 func_00138860(void) {
    func_00135830();
    func_00137BA0(D_003E97A0 + 0x53CDC0);
    return 1;
}
