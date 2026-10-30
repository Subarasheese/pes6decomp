/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];

extern void * func_00146CF0(void *, s32, s32);
extern s64 func_00146CE0(void);
extern void * func_00144920(void *, s32, void *, s32, s32, s32, s32);
extern s32 D_003E7440;
extern s32 D_003E9810;
extern char D_004FDF60[];
extern char D_004FDFB0[];
extern char D_004FDFB1[];
extern char D_00500EC0[];

void func_00143C30(void *arg0, void *arg1) {
    u8 var_v0;
    void *temp_s1;
    void *temp_s2;

    if ((*(u8 *)D_004FDFB0) != 0) {
        var_v0 = (*(u8 *)D_004FDFB1);
    } else {
        var_v0 = M2C_FIELD(arg0, u8 *, 0x44);
    }
    temp_s1 = D_003E7440 + 0x120;
    temp_s2 = func_00146CF0(arg1, (*(s32 *)D_004FDF60), (*(s32 *)D_004FDF60));
    D_003E9810 = -1;
    M2C_FIELD(temp_s1, s64 *, 0x20) = func_00146CE0();
    M2C_FIELD(temp_s1, s128 *, 0x80) = (s128) M2C_FIELD(arg0, s128 *, 0x80);
    func_00144920(temp_s2, 0x90, temp_s1, 0x01000101, (*(s32 *)D_00500EC0) | 0x6C090000, (*(s32 *)D_00500EC0) | 0x04000000, ((s64) (((var_v0 & 0xFF) ? 0x20 : 0x1E) << 0x20) >> 0x20) | 0x14000000);
    (*(s32 *)D_00500EC0) = (s64) ((s64) (*(s32 *)D_00500EC0) ^ 0x200);
}
