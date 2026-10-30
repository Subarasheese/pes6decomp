/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00176E78(void *, int);
extern char D_003CC2D0[];
extern char D_003CC300[];
extern char D_003CC320[];
extern char D_003CC330[];

void func_001771E8(void *arg0) {
    if (arg0 == NULL) {
        func_00176E78(((void *)D_003CC320), (s32) ((void *)D_003CC2D0));
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        M2C_FIELD(arg0, s32 *, 0x34) = 0;
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
        return;
    }
    func_00176E78(((void *)D_003CC330), (s32) ((void *)D_003CC300));
}
