/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00146CF0(void *, s32, s32);
extern s64 func_00146CE0(void);
extern void * func_00144920(void *, s32, void *, s32, s32, s32, s32);
extern s32 D_003E7440;
extern s32 D_003E9808;
extern s32 D_003E9810;
extern char D_004FDF10[];
extern char D_004FDFB0[];
extern char D_004FDFB1[];
extern char D_00500EC0[];

void func_00143D30(void *arg0, void *arg1) {
    u8 var_v0;
    void *temp_s1;
    void *temp_s2;

    M2C_FIELD(arg1, s32 *, 0) = 0x30000003;
    M2C_FIELD(arg1, s32 *, 4) = (s32) (D_003E9808 + 0x500);
    M2C_FIELD(arg1, s32 *, 8) = 0x01000101;
    M2C_FIELD(arg1, s32 *, 0xC) = (s32) ((*(s32 *)D_00500EC0) | 0x6C030000);
    M2C_FIELD(arg1, s64 *, 0x10) = 0x10000000;
    M2C_FIELD(arg1, s32 *, 0x18) = (s32) ((*(s32 *)D_00500EC0) | 0x04000000);
    M2C_FIELD(arg1, s32 *, 0x1C) = 0x14000014;
    (*(s32 *)D_00500EC0) = (s64) ((s64) (*(s32 *)D_00500EC0) ^ 0x200);
    if ((*(u8 *)D_004FDFB0) != 0) {
        var_v0 = (*(u8 *)D_004FDFB1);
    } else {
        var_v0 = M2C_FIELD(arg0, u8 *, 0x44);
    }
    temp_s1 = D_003E7440 + 0x90;
    temp_s2 = func_00146CF0(arg1 + 0x10 + 0x10, (*(s32 *)D_004FDF10), (*(s32 *)D_004FDF10));
    D_003E9810 = -1;
    M2C_FIELD(temp_s1, s64 *, 0x20) = func_00146CE0();
    M2C_FIELD(temp_s1, f32 *, 0x7C) = (f32) M2C_FIELD(arg0, f32 *, 0x58);
    func_00144920(temp_s2, 0x90, temp_s1, 0, (*(s32 *)D_00500EC0) | 0x6C090000, (*(s32 *)D_00500EC0) | 0x04000000, ((s64) (((var_v0 & 0xFF) ? 0x20 : 0x1E) << 0x20) >> 0x20) | 0x14000000);
    (*(s32 *)D_00500EC0) = (s64) ((s64) (*(s32 *)D_00500EC0) ^ 0x200);
}
