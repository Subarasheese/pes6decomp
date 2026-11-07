/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00133A40(void *arg0) {
    void *p = *(void **)arg0;
    return p == 0 ? 0 : *(u16 *)((u8 *)p + 6);
}
