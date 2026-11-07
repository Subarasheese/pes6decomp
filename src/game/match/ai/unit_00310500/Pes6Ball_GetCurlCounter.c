/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern void *Pes6Ball_Current;

u16 Pes6Ball_GetCurlCounter(void) {
    return M2C_FIELD(Pes6Ball_Current, u16 *, 0x6A);
}
