/* compiler: mwcc-3.0.1b210 */
#include "types.h"
u16 *func_002228B0(unsigned int id, int set, int arg, int source);
u16 func_00222320(unsigned int id, int arg) {
    u16 result = 0xFFFF;
    u16 *p;
    if (arg == 4)
        arg = 0;
    p = func_002228B0(id, 2, arg, 0);
    if (p != 0)
        result = *p;
    return result;
}
