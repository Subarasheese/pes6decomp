/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002D9D28(void);
extern void func_002DAC08(s32);
extern int sceSifCallRpc(void *, int, unsigned int, void *, int, void *, int, void *, void *);
extern char D_005E5F00[];
extern char D_005E5F40[];

s32 func_002D9E30(s32 arg0) {
    s32 temp_v0;

    func_002DAC08(arg0);
    func_002D9D28();
    temp_v0 = sceSifCallRpc(((void *)D_005E5F00), 0xF, 0U, ((void *)D_005E5F40), 0x1000, ((void *)D_005E5F40), 0x1000, NULL, NULL);
    return (temp_v0 > -1) ? 0 : temp_v0;
}
