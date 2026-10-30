/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001990B8(void *, void *);
extern char D_011F6C78[];

void func_0018C7A8(s32 arg0, void *arg1, void *arg2, void *arg3) {
    void **temp_s0;

    temp_s0 = (arg0 * 4) + ((void *)D_011F6C78);
    func_001990B8(*temp_s0, arg1);
    func_001990B8(*temp_s0 + 0x40, arg2);
    func_001990B8(*temp_s0 + 0x80, arg3);
}
