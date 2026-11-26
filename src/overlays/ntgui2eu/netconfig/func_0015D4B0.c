/* compiler: ee-gcc-2.9-G0 */
#include "types.h"
typedef void (*NetConfigQuery)(s32 *, s32 *, s32 *, s32 *);
extern NetConfigQuery D_011E6B44;
extern s32 D_011E6B48, D_011E6B4C, D_011E6B50, D_011E6B54, D_011E6B58;
void func_0015D4B0(s32 enabled, NetConfigQuery query) {
    D_011E6B48 = 0;
    D_011E6B4C = 0;
    D_011E6B50 = 0;
    D_011E6B54 = 0;
    D_011E6B58 = enabled;
    D_011E6B44 = query;
}
