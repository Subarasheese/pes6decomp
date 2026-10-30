/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];


M2C_UNK func_00101FF0();                            /* extern */
M2C_UNK func_0011BD70(s32);                         /* extern */
M2C_UNK func_0011BFC8(s32, void *);                 /* extern */
M2C_UNK func_0011BFE0(s32, void *);                 /* extern */
M2C_UNK func_0011BFF8(s32, void *);                 /* extern */
M2C_UNK func_0011C010(s32, void *);                 /* extern */
M2C_UNK func_0011DE60(s32, f32);                    /* extern */
s32 func_0011DEC0(s32, s32, M2C_UNK, s32);          /* extern */
s32 func_0011DEF8(s32, s32, M2C_UNK);               /* extern */
M2C_UNK func_00199E48(s32, M2C_UNK);                /* extern */
M2C_UNK func_00199F50(s32, M2C_UNK);                /* extern */
M2C_UNK func_00199FA8(s32);                         /* extern */
M2C_UNK func_00199FD8(s32, s128);                   /* extern */
M2C_UNK func_00199FF0(s32);                         /* extern */
M2C_UNK func_0019A140(s32, M2C_UNK, M2C_UNK);       /* extern */
extern char D_005CCE30[];
extern s32 D_0060258C;
extern char D_011AAEA0[];

void func_001021E8(void *arg0) {
    s32 temp_a0;
    s32 temp_s1;

    temp_a0 = M2C_FIELD(arg0, s32 *, 4);
    temp_s1 = M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(((void *)D_011AAEA0), s32 *, 0x2F4) = temp_a0;
    M2C_FIELD(((void *)D_011AAEA0), f32 *, 0x2D0) = (f32) temp_a0;
    M2C_FIELD(((void *)D_011AAEA0), f32 *, 0x2D4) = (f32) ((f32) (M2C_FIELD(arg0, s32 *, 8) * 2) + 26.0f);
    M2C_FIELD(((void *)D_011AAEA0), f32 *, 0x2E0) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
    M2C_FIELD(((void *)D_011AAEA0), f32 *, 0x2E4) = (f32) M2C_FIELD(arg0, f32 *, 0x14);
    M2C_FIELD(((void *)D_011AAEA0), f32 *, 0x2E8) = (f32) M2C_FIELD(arg0, f32 *, 0x18);
    M2C_FIELD(((void *)D_011AAEA0), f32 *, 0x2EC) = (f32) M2C_FIELD(arg0, f32 *, 0x1C);
    func_0011BD70(M2C_FIELD(((void *)D_011AAEA0), s32 *, 0x240));
    func_0011BFC8(M2C_FIELD(((void *)D_011AAEA0), s32 *, 0x240), ((void *)D_011AAEA0) + 0x250);
    M2C_FIELD(((void *)D_011AAEA0), f32 *, 0x290) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
    M2C_FIELD(((void *)D_011AAEA0), f32 *, 0x2A4) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
    func_0011BFE0(M2C_FIELD(((void *)D_011AAEA0), s32 *, 0x240), ((void *)D_011AAEA0) + 0x290);
    func_0011BFF8(M2C_FIELD(((void *)D_011AAEA0), s32 *, 0x240), ((void *)D_011AAEA0) + 0x2D0);
    func_0011C010(M2C_FIELD(((void *)D_011AAEA0), s32 *, 0x240), ((void *)D_011AAEA0) + 0x2E0);
    func_0011DE60(M2C_FIELD(((void *)D_011AAEA0), s32 *, 0x240), M2C_FIELD(((void *)D_011AAEA0), f32 *, 0x2F0));
    func_00199E48(D_0060258C, 0);
    func_00199F50(D_0060258C, 0);
    func_00199FD8(D_0060258C, (*(s128 *)D_005CCE30));
    func_0019A140(D_0060258C, 0x47, 0x30000);
    func_0019A140(D_0060258C, 0x42, 0x44);
    func_00199FF0(D_0060258C);
    func_00199FA8(D_0060258C);
    if (func_0011DEC0(M2C_FIELD(((void *)D_011AAEA0), s32 *, 0x240), D_0060258C, 0x1FF, temp_s1) == 1) {
        do {
            func_00101FF0();
        } while (func_0011DEF8(M2C_FIELD(((void *)D_011AAEA0), s32 *, 0x240), D_0060258C, 0x1FF) == 1);
    }
    func_00101FF0();
}
