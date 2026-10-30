/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001D5A10(s32);
s32 func_009EEF00(void *, void *, M2C_UNK *);       /* extern */
M2C_UNK func_009EF160(void *, void *, void *, void *, void *, M2C_UNK *, s32, s32); /* extern */
M2C_UNK func_009EF730(s32 *, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_009EF7B0(void *);                      /* extern */
M2C_UNK func_009EF810(void *, void *, void *, M2C_UNK *, s32 *); /* extern */
M2C_UNK func_009EF9B0(void *, void *, void *, void *, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_009EFAE0(void *, s32);                 /* extern */
M2C_UNK func_009EFB90(void *, void *, void *, void *, void *, void *, M2C_UNK *, s32, s64); /* extern */
M2C_UNK func_009EFEF0(void *);                      /* extern */
M2C_UNK func_009F0150(void *, void *, void *, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_009F0320(M2C_UNK *, M2C_UNK, s32 *, void *, s32); /* extern */
M2C_UNK func_009F0480(void *, void *, void *, void *, M2C_UNK *); /* extern */
extern char D_00A00440[];
extern char D_00A00460[];
extern char D_00A00470[];
extern char D_00A00480[];
extern char D_00A004F0[];
extern char D_00A00500[];
extern char D_00A00550[];
extern char D_00A00570[];
extern char D_00A033B0[];
extern M2C_UNK func_009EAE70;

void func_009EA370(void *arg0) {
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    s32 sp7C;
    M2C_UNK *var_a4;
    M2C_UNK *var_a5;
    s32 *var_a0;
    s32 *var_a0_2;
    s32 temp_a2;
    s32 temp_a4;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1_2;
    s32 var_a1;
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
    void *temp_v1;
    void *var_a1_2;
    void *var_a6;

    M2C_FIELD(arg0, void **, 0x1F0) = func_001D5A10(0x103CF);
    temp_s1 = arg0 + 0x3C;
    if (M2C_FIELD(arg0, s32 *, 0x38) == 0) {
        var_a4 = ((void *)D_00A00460);
    } else {
        var_a4 = ((void *)D_00A00470);
    }
    func_009F0480(temp_s1, M2C_FIELD(arg0, void **, 0x1F0), arg0 + 0x1F4, arg0 + 0x240, var_a4);
    M2C_FIELD(temp_s1, s32 *, 0x10) = -1;
    M2C_FIELD(temp_s1, s32 *, 0x14) = -1;
    M2C_FIELD(temp_s1, s32 *, 0x18) = -1;
    if (M2C_FIELD(arg0, s32 *, 0x38) != 0) {
        var_a1 = 0;
        var_a0 = &sp7C;
        do {
            *var_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x2C), s32 *, 0x3C) >= 2;
            var_a1 += 1;
            var_a0 += 4;
        } while (var_a1 == 0);
        func_009F0320(((void *)D_00A00440), 1, &sp7C, arg0 + 0x3C + 0x1C, M2C_FIELD(arg0, s32 *, 0x1F4));
    }
    temp_s1_2 = arg0 + 0x60;
    func_009F0150(temp_s1_2, M2C_FIELD(arg0, void **, 0x1F0), arg0 + 0x1F8, 4, ((void *)D_00A00480));
    func_009EFEF0(temp_s1_2);
    func_009EFB90(arg0 + 0x84, M2C_FIELD(arg0, void **, 0x2C), M2C_FIELD(arg0, void **, 0x1F0), arg0 + 0x1FC, arg0 + 0x244, arg0 + 0x250, ((void *)D_00A004F0), M2C_FIELD(arg0, s32 *, 0x30), 0);
    temp_s1_3 = arg0 + 0xA8;
    func_009EF9B0(temp_s1_3, M2C_FIELD(arg0, void **, 0x2C), M2C_FIELD(arg0, void **, 0x1F0), arg0 + 0x200, 6, &func_009EAE70);
    func_009EFAE0(temp_s1_3, M2C_FIELD(arg0, s32 *, 0x30));
    temp_s2 = M2C_FIELD(arg0, void **, 0x2C);
    temp_s1_4 = M2C_FIELD(arg0, void **, 0x1F0);
    sp60 = 0;
    sp64 = 0;
    sp68 = 0;
    sp6C = 0;
    temp_s3 = arg0 + 0xBC;
    func_009EF730(&sp60, M2C_FIELD(arg0, s32 *, 0x1F4), 0xA, 0xB);
    func_009EF7B0(temp_s3);
    func_009EF810(temp_s3, temp_s2, temp_s1_4, ((void *)D_00A00500), &sp60);
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
                var_a5 = ((void *)D_00A033B0);
                do {
                    temp_a2 = var_a7 + 8;
                    M2C_FIELD(var_a6, void **, 4) = (void *) (arg0 + ((var_a7 + 7) * 4) + 0x1F4);
                    temp_a0 = arg0 + ((var_a7 + 9) * 4) + 0x1F4;
                    temp_v1 = arg0 + ((var_a7 + 0xA) * 4) + 0x1F4;
                    M2C_FIELD(var_a6, void **, 8) = (void *) (arg0 + (M2C_FIELD(var_a5, s32 *, 0) * 4) + 0x240);
                    M2C_FIELD(var_a6, void **, 0) = (void *) M2C_FIELD(arg0, void **, 0x1F0);
                    M2C_FIELD(var_a6, void **, 0x18) = (void *) (arg0 + (temp_a2 * 4) + 0x1F4);
                    temp_t3 = arg0 + ((var_a7 + 0xC) * 4) + 0x1F4;
                    temp_v0 = arg0 + ((var_a7 + 0xB) * 4) + 0x1F4;
                    temp_t2 = arg0 + ((var_a7 + 0xD) * 4) + 0x1F4;
                    temp_t1 = arg0 + ((var_a7 + 0xE) * 4) + 0x1F4;
                    M2C_FIELD(var_a6, void **, 0x1C) = (void *) (arg0 + (M2C_FIELD(var_a5, s32 *, 4) * 4) + 0x240);
                    var_a7 = temp_a2;
                    M2C_FIELD(var_a6, void **, 0x14) = (void *) M2C_FIELD(arg0, void **, 0x1F0);
                    M2C_FIELD(var_a6, void **, 0x2C) = temp_a0;
                    M2C_FIELD(var_a6, void **, 0x30) = (void *) (arg0 + (M2C_FIELD(var_a5, s32 *, 8) * 4) + 0x240);
                    M2C_FIELD(var_a6, void **, 0x28) = (void *) M2C_FIELD(arg0, void **, 0x1F0);
                    M2C_FIELD(var_a6, void **, 0x40) = temp_v1;
                    M2C_FIELD(var_a6, void **, 0x44) = (void *) (arg0 + (M2C_FIELD(var_a5, s32 *, 0xC) * 4) + 0x240);
                    M2C_FIELD(var_a6, void **, 0x3C) = (void *) M2C_FIELD(arg0, void **, 0x1F0);
                    M2C_FIELD(var_a6, void **, 0x54) = temp_v0;
                    M2C_FIELD(var_a6, void **, 0x58) = (void *) (arg0 + (M2C_FIELD(var_a5, s32 *, 0x10) * 4) + 0x240);
                    M2C_FIELD(var_a6, void **, 0x50) = (void *) M2C_FIELD(arg0, void **, 0x1F0);
                    M2C_FIELD(var_a6, void **, 0x68) = temp_t3;
                    M2C_FIELD(var_a6, void **, 0x6C) = (void *) (arg0 + (M2C_FIELD(var_a5, s32 *, 0x14) * 4) + 0x240);
                    M2C_FIELD(var_a6, void **, 0x64) = (void *) M2C_FIELD(arg0, void **, 0x1F0);
                    M2C_FIELD(var_a6, void **, 0x7C) = temp_t2;
                    M2C_FIELD(var_a6, void **, 0x80) = (void *) (arg0 + (M2C_FIELD(var_a5, s32 *, 0x18) * 4) + 0x240);
                    M2C_FIELD(var_a6, void **, 0x78) = (void *) M2C_FIELD(arg0, void **, 0x1F0);
                    M2C_FIELD(var_a6, void **, 0x90) = temp_t1;
                    temp_v0_2 = M2C_FIELD(var_a5, s32 *, 0x1C) * 4;
                    var_a5 += 0x20;
                    M2C_FIELD(var_a6, void **, 0x94) = (void *) (arg0 + temp_v0_2 + 0x240);
                    M2C_FIELD(var_a6, void **, 0x8C) = (void *) M2C_FIELD(arg0, void **, 0x1F0);
                    var_a6 += 0xA0;
                } while (temp_a2 < (temp_a4 - 8));
            }
        }
        if (var_a7 < temp_a4) {
            var_a0_2 = ((void *)D_00A033B0) + (var_a7 * 4);
            var_a1_2 = temp_t0 + (var_a7 * 0x14);
            do {
                temp_v0_3 = (var_a7 + 7) * 4;
                var_a7 += 1;
                M2C_FIELD(var_a1_2, void **, 4) = (void *) (arg0 + temp_v0_3 + 0x1F4);
                temp_v1_2 = *var_a0_2 * 4;
                var_a0_2 += 4;
                M2C_FIELD(var_a1_2, void **, 8) = (void *) (arg0 + temp_v1_2 + 0x240);
                M2C_FIELD(var_a1_2, void **, 0) = (void *) M2C_FIELD(arg0, void **, 0x1F0);
                var_a1_2 += 0x14;
            } while (var_a7 < temp_a4);
        }
    }
    func_009EF160(arg0 + 0xEC, arg0 + 0x11C, arg0 + 0x380, M2C_FIELD(arg0, void **, 0x2C), arg0 + 0xBC, ((void *)D_00A00550), M2C_FIELD(arg0, s32 *, 0x30), var_a7);
    M2C_FIELD(arg0, s32 *, 0x34) = func_009EEF00(arg0 + 0x1AC, arg0 + 0xBC, ((void *)D_00A00570));
}
