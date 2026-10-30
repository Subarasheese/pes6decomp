/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001161E8(int, int, void *, int, int, void *);
extern char D_00B00C38[];
extern char D_00B00C3A[];

void func_00AE3DD0(s16 arg0, s16 arg1, void *arg2, s32 arg3, s32 arg4, void *arg5) {
    (*(s16 *)D_00B00C3A) = arg1;
    (*(s16 *)D_00B00C38) = arg0;
    func_001161E8((s32) arg0, (s32) arg1, arg2, arg3, arg4, arg5);
}
