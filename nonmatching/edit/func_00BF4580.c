/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001F85A0(void *, void *);
extern char D_00CE6620[];
extern char D_00CE8E20[];

M2C_UNK *func_00BF4580(s32 arg0, s32 arg1) {
    func_001F85A0((arg1 * 0x88) + (((void *)D_00CE8E20) + (arg0 * 0x146C)), ((void *)D_00CE6620));
    return ((void *)D_00CE6620);
}
