/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 *Pes6Job_GetManager();

int func_00341910(int arg0, ...) {
    char *args;
    s32 mgr;
    s32 v;

    args = (char *)__builtin_next_arg(arg0) -
           (__builtin_args_info(2) >= 8 ? 0 : (8 - __builtin_args_info(2)) * 8);
    mgr = *Pes6Job_GetManager();
    for (;;) {
        v = *(s32 *)args;
        args += 8;
        if (v == 0xA) {
            return arg0 == 0;
        }
        if (v == mgr) {
            return arg0;
        }
    }
}
