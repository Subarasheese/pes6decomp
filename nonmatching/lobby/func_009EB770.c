/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void * func_001D5A10(s32);
s32 func_009EEF00(void *, void *, M2C_UNK *);       /* extern */
M2C_UNK func_009EF160(void *, void *, void *, void *, void *, M2C_UNK *, s32, s32); /* extern */
M2C_UNK func_009EF730(s32 *, void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_009EF7B0(void *);                      /* extern */
M2C_UNK func_009EF810(void *, void *, void *, M2C_UNK *, s32 *); /* extern */
M2C_UNK func_009EF9B0(void *, void *, void *, void *, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_009EFAE0(void *, s32);                 /* extern */
M2C_UNK func_009EFB90(void *, void *, void *, void *, void *, void *, M2C_UNK *, s32, s64); /* extern */
M2C_UNK func_009EFEF0(void *);                      /* extern */
M2C_UNK func_009F0150(void *, void *, void *, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_009F0480(void *, void *, void *, void *, M2C_UNK *); /* extern */
s32 func_009F49B0();                                /* extern */
s32 func_009F77C0(s32);                             /* extern */
extern char D_00A005A0[];
extern char D_00A005B0[];
extern char D_00A00690[];
extern char D_00A006A0[];
extern char D_00A00760[];
extern char D_00A00780[];
extern char D_00A03450[];
extern M2C_UNK func_009EC720;
extern M2C_UNK func_009EC740;

void func_009EB770(void *arg0) {
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    M2C_UNK *var_a5;
    s32 *var_a1;
    s32 temp_a2;
    s32 temp_a4;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1_2;
    s32 var_a7;
    s32 var_v0;
    void *temp_a0;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_s1_3;
    void *temp_s1_4;
    void *temp_s2;
    void *temp_s3;
    void *temp_t0;
    void *temp_t1;
    void *temp_t2;
    void *temp_t3;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;
    void *var_a0;
    void *var_a6;

    temp_v0 = func_001D5A10(0x103CF);
    temp_s1 = arg0 + 0x38;
    M2C_FIELD(arg0, void **, 0x1B4) = temp_v0;
    func_009F0480(temp_s1, temp_v0, arg0 + 0x1B8, arg0 + 0x1F4, ((void *)D_00A005A0));
    M2C_FIELD(temp_s1, s32 *, 0x10) = -1;
    M2C_FIELD(temp_s1, s32 *, 0x14) = -1;
    if (func_009F77C0(func_009F49B0()) != 0) {
        M2C_FIELD(temp_s1, s8 *, 0x18) = 1;
        func_001D7D60(M2C_FIELD(arg0, void **, 0x1B8), 0);
    }
    temp_s1_2 = arg0 + 0x54;
    func_009F0150(temp_s1_2, M2C_FIELD(arg0, void **, 0x1B4), arg0 + 0x1BC, 4, ((void *)D_00A005B0));
    func_009EFEF0(temp_s1_2);
    func_009EFB90(arg0 + 0x78, M2C_FIELD(arg0, void **, 0x2C), M2C_FIELD(arg0, void **, 0x1B4), arg0 + 0x1C0, arg0 + 0x1F8, arg0 + 0x204, ((void *)D_00A00690), M2C_FIELD(arg0, s32 *, 0x30), (s64) &func_009EC740);
    temp_s1_3 = arg0 + 0x9C;
    func_009EF9B0(temp_s1_3, M2C_FIELD(arg0, void **, 0x2C), M2C_FIELD(arg0, void **, 0x1B4), arg0 + 0x1C4, 6, &func_009EC720);
    func_009EFAE0(temp_s1_3, M2C_FIELD(arg0, s32 *, 0x30));
    temp_s2 = M2C_FIELD(arg0, void **, 0x2C);
    temp_s1_4 = M2C_FIELD(arg0, void **, 0x1B4);
    sp60 = 0;
    sp64 = 0;
    sp68 = 0;
    sp6C = 0;
    temp_s3 = arg0 + 0xB0;
    func_009EF730(&sp60, M2C_FIELD(arg0, void **, 0x1B8), 0x17, 0x18);
    func_009EF7B0(temp_s3);
    func_009EF810(temp_s3, temp_s2, temp_s1_4, ((void *)D_00A006A0), &sp60);
    temp_t0 = arg0 + 0x380;
    temp_a4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x2C), s32 *, 4);
    var_a7 = 0;
    if (temp_a4 > 0) {
        if (temp_a4 >= 9) {
            var_v0 = 0;
            if ((temp_a4 >= 0) && (temp_a4 < 0x7FFFFFFF)) {
                var_v0 = 1;
            }
            if (var_v0 != 0) {
                var_a6 = temp_t0;
                var_a5 = ((void *)D_00A03450);
                do {
                    temp_a2 = var_a7 + 8;
                    M2C_FIELD(var_a6, void **, 4) = (void *) (arg0 + ((var_a7 + 7) * 4) + 0x1B8);
                    temp_a0 = arg0 + ((var_a7 + 9) * 4) + 0x1B8;
                    temp_v1 = arg0 + ((var_a7 + 0xA) * 4) + 0x1B8;
                    M2C_FIELD(var_a6, void **, 8) = (void *) (arg0 + (M2C_FIELD(var_a5, s32 *, 0) * 4) + 0x1F4);
                    M2C_FIELD(var_a6, void **, 0) = (void *) M2C_FIELD(arg0, void **, 0x1B4);
                    M2C_FIELD(var_a6, void **, 0x28) = (void *) (arg0 + (temp_a2 * 4) + 0x1B8);
                    temp_t3 = arg0 + ((var_a7 + 0xC) * 4) + 0x1B8;
                    temp_v0_2 = arg0 + ((var_a7 + 0xB) * 4) + 0x1B8;
                    temp_t2 = arg0 + ((var_a7 + 0xD) * 4) + 0x1B8;
                    temp_t1 = arg0 + ((var_a7 + 0xE) * 4) + 0x1B8;
                    M2C_FIELD(var_a6, void **, 0x2C) = (void *) (arg0 + (M2C_FIELD(var_a5, s32 *, 4) * 4) + 0x1F4);
                    var_a7 = temp_a2;
                    M2C_FIELD(var_a6, void **, 0x24) = (void *) M2C_FIELD(arg0, void **, 0x1B4);
                    M2C_FIELD(var_a6, void **, 0x4C) = temp_a0;
                    M2C_FIELD(var_a6, void **, 0x50) = (void *) (arg0 + (M2C_FIELD(var_a5, s32 *, 8) * 4) + 0x1F4);
                    M2C_FIELD(var_a6, void **, 0x48) = (void *) M2C_FIELD(arg0, void **, 0x1B4);
                    M2C_FIELD(var_a6, void **, 0x70) = temp_v1;
                    M2C_FIELD(var_a6, void **, 0x74) = (void *) (arg0 + (M2C_FIELD(var_a5, s32 *, 0xC) * 4) + 0x1F4);
                    M2C_FIELD(var_a6, void **, 0x6C) = (void *) M2C_FIELD(arg0, void **, 0x1B4);
                    M2C_FIELD(var_a6, void **, 0x94) = temp_v0_2;
                    M2C_FIELD(var_a6, void **, 0x98) = (void *) (arg0 + (M2C_FIELD(var_a5, s32 *, 0x10) * 4) + 0x1F4);
                    M2C_FIELD(var_a6, void **, 0x90) = (void *) M2C_FIELD(arg0, void **, 0x1B4);
                    M2C_FIELD(var_a6, void **, 0xB8) = temp_t3;
                    M2C_FIELD(var_a6, void **, 0xBC) = (void *) (arg0 + (M2C_FIELD(var_a5, s32 *, 0x14) * 4) + 0x1F4);
                    M2C_FIELD(var_a6, void **, 0xB4) = (void *) M2C_FIELD(arg0, void **, 0x1B4);
                    M2C_FIELD(var_a6, void **, 0xDC) = temp_t2;
                    M2C_FIELD(var_a6, void **, 0xE0) = (void *) (arg0 + (M2C_FIELD(var_a5, s32 *, 0x18) * 4) + 0x1F4);
                    M2C_FIELD(var_a6, void **, 0xD8) = (void *) M2C_FIELD(arg0, void **, 0x1B4);
                    M2C_FIELD(var_a6, void **, 0x100) = temp_t1;
                    temp_v0_3 = M2C_FIELD(var_a5, s32 *, 0x1C) * 4;
                    var_a5 += 0x20;
                    M2C_FIELD(var_a6, void **, 0x104) = (void *) (arg0 + temp_v0_3 + 0x1F4);
                    M2C_FIELD(var_a6, void **, 0xFC) = (void *) M2C_FIELD(arg0, void **, 0x1B4);
                    var_a6 += 0x120;
                } while (temp_a2 < (temp_a4 - 8));
            }
        }
        if (var_a7 < temp_a4) {
            var_a1 = ((void *)D_00A03450) + (var_a7 * 4);
            var_a0 = temp_t0 + (var_a7 * 0x24);
            do {
                temp_v0_4 = (var_a7 + 7) * 4;
                var_a7 += 1;
                M2C_FIELD(var_a0, void **, 4) = (void *) (arg0 + temp_v0_4 + 0x1B8);
                temp_v1_2 = *var_a1 * 4;
                var_a1 += 4;
                M2C_FIELD(var_a0, void **, 8) = (void *) (arg0 + temp_v1_2 + 0x1F4);
                M2C_FIELD(var_a0, void **, 0) = (void *) M2C_FIELD(arg0, void **, 0x1B4);
                var_a0 += 0x24;
            } while (var_a7 < temp_a4);
        }
    }
    func_009EF160(arg0 + 0xE0, arg0 + 0x110, arg0 + 0x380, M2C_FIELD(arg0, void **, 0x2C), arg0 + 0xB0, ((void *)D_00A00760), M2C_FIELD(arg0, s32 *, 0x30), var_a7);
    M2C_FIELD(arg0, s32 *, 0x34) = func_009EEF00(arg0 + 0x170, arg0 + 0xB0, ((void *)D_00A00780));
}
