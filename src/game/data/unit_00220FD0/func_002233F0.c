/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void *func_00223420(void);

s32 func_002233F0(void) {
    u16 *p;

    p = (u16 *)func_00223420();
    return p == 0 ? 0 : *p;
}
