/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0015E370(void);
extern void func_0015E388(void);
extern int func_0015DFD0(int, int, int, int, int);
s32 func_0015DF58(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_s0;

    func_0015E370();
    temp_s0 = func_0015DFD0(arg0, arg1, arg2, arg3, arg4);
    func_0015E388();
    return temp_s0;
}
