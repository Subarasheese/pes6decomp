/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];


M2C_UNK func_00103E38(void *, s32);                 /* extern */
M2C_UNK func_001044A0(void *, s32, M2C_UNK, s128, s128, s128, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern char D_00375B30[];
extern char D_00375B40[];
extern char D_00375B50[];
extern char D_00375B60[];
extern char D_00511050[];
extern char D_00511250[];

void func_0017CC80(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_a0;
    void *temp_v0;

    temp_v0 = (arg1 << 5) + (((void *)D_00511250) + (arg0 * 0x1E0));
    func_00103E38(temp_v0 + 0x160 + 0x10, arg2);
    temp_a0 = (arg1 << 6) + (((void *)D_00511050) + (arg0 << 8));
    M2C_FIELD(temp_v0, s32 *, 0x160) = arg3;
    M2C_FIELD(temp_a0, s128 *, 0) = (s128) (*(s128 *)D_00375B30);
    M2C_FIELD(temp_a0, s128 *, 0x10) = (s128) (*(s128 *)D_00375B40);
    M2C_FIELD(temp_a0, s128 *, 0x20) = (s128) (*(s128 *)D_00375B50);
    M2C_FIELD(temp_a0, s128 *, 0x30) = (s128) (*(s128 *)D_00375B60);
    func_001044A0(temp_a0, arg2, 0, (*(s128 *)D_00375B50), (*(s128 *)D_00375B40), (*(s128 *)D_00375B30), 0, 0x4479F99A, 0);
}
