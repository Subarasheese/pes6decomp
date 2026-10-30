/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00115FF8(int, int, void *, void *, void *);
extern char D_00B00C38[];
extern char D_00B00C3A[];

void func_00AE3E10(s16 arg0, s16 arg1, void *arg2, void *arg3, void *arg4) {
    (*(s16 *)D_00B00C3A) = arg1;
    (*(s16 *)D_00B00C38) = arg0;
    func_00115FF8((s32) arg0, (s32) arg1, arg2, arg3, arg4);
}
