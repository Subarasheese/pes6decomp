/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F3AA0(s32);
extern s32 func_002F3A00(void *);
extern void func_002F4CE0(void *, s8);
extern s32 func_002F38E0(void *, s32);
extern void func_002F4D80(s32);
extern void func_002F3AE0(void *, void *);
extern s32 func_002F39A0(void *);
M2C_UNK func_002F2ED0(void *);                      /* extern */
s32 func_002F3850(void *);                          /* extern */
M2C_UNK func_002F4980(void *, void *);              /* extern */
extern char D_00CDF8F0[];
extern char D_00CDF9E4[];

void func_00B909D0(void) {
    if (M2C_FIELD(((void *)D_00CDF8F0), void **, 0) != NULL) {
        if (((u32) (*(u32 *)D_00CDF9E4) >> 1) & 1) {
            func_002F4980(M2C_FIELD(((void *)D_00CDF8F0), void **, 0), ((void *)D_00CDF8F0) + 4);
            func_002F3A00(M2C_FIELD(((void *)D_00CDF8F0), void **, 0));
            func_002F4D80((s32) M2C_FIELD(((void *)D_00CDF8F0), void **, 0));
            (*(u32 *)D_00CDF9E4) &= ~2;
        }
        if (((u32) (*(u32 *)D_00CDF9E4) >> 2) & 1) {
            func_002F38E0(M2C_FIELD(((void *)D_00CDF8F0), void **, 0), (s32) (((void *)D_00CDF8F0) + 4));
            (*(u32 *)D_00CDF9E4) &= ~4;
        }
        if (((u32) (*(u32 *)D_00CDF9E4) >> 3) & 1) {
            func_002F3AA0((s32) M2C_FIELD(((void *)D_00CDF8F0), void **, 0));
            func_002F3AE0(M2C_FIELD(((void *)D_00CDF8F0), void **, 0), ((void *)D_00CDF8F0) + 0xF8);
            (*(u32 *)D_00CDF9E4) &= ~8;
        }
        if (((u32) (*(u32 *)D_00CDF9E4) >> 4) & 1) {
            func_002F4CE0(M2C_FIELD(((void *)D_00CDF8F0), void **, 0), (s8) M2C_FIELD(((void *)D_00CDF8F0), u8 *, 0x108));
            (*(u32 *)D_00CDF9E4) &= ~0x10;
        }
        if (((u32) (*(u32 *)D_00CDF9E4) >> 5) & 1) {
            func_002F39A0(M2C_FIELD(((void *)D_00CDF8F0), void **, 0));
            (*(u32 *)D_00CDF9E4) = ((*(u32 *)D_00CDF9E4) & ~0x20) | 0x40;
        }
        if ((((u32) (*(u32 *)D_00CDF9E4) >> 6) & 1) && (func_002F3850(M2C_FIELD(((void *)D_00CDF8F0), void **, 0)) == 4)) {
            (*(u32 *)D_00CDF9E4) &= ~0x40;
        }
        func_002F2ED0(M2C_FIELD(((void *)D_00CDF8F0), void **, 0));
    }
}
