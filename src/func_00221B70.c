/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_001F85A0(s32 *, s32 *);
s32 *func_002228B0(s32, s32, s32, s32);
extern char D_00539530[];

s32 *func_00221B70(s32 context, s32 index) {
    s32 *result;

    result = func_002228B0(context, 0, index, 1);
    if (result != NULL) {
        func_001F85A0(result, ((void *)D_00539530));
        result = ((void *)D_00539530);
    }
    return result;
}
