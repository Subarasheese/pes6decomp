/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001E6E10(s32);
extern void func_001EDAE0(void *, s8);
M2C_UNK func_001EE790(s32, M2C_UNK *);              /* extern */
M2C_UNK func_001EEAC0(s32, void *);                 /* extern */
M2C_UNK func_001EEF60(s32, M2C_UNK *);              /* extern */
M2C_UNK func_001EF370(s32, M2C_UNK *);              /* extern */
M2C_UNK func_0063AF00(s32, void *);                 /* extern */
M2C_UNK func_0063AFA0(void *, void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0063B020(M2C_UNK *);                   /* extern */
M2C_UNK func_0063B060(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_00657EA0[];
extern char D_00657EB0[];
extern char D_00657EC0[];
extern char D_00657ED0[];
extern char D_0065C330[];
extern char D_0065D0B0[];

void func_00636F50(void) {
    M2C_UNK *var_s0;
    s32 temp_a0;
    s32 var_s1;
    void *temp_s1;
    void *temp_s1_2;

    var_s0 = ((void *)D_0065D0B0);
    if ((*(s32 *)D_0065C330) == 0) {
        var_s1 = 0;
        do {
            temp_a0 = M2C_FIELD(var_s0, s32 *, 0);
            if (temp_a0 != 0) {
                if (M2C_FIELD(var_s0, s32 *, 8) != 0) {
                    func_0063AF00(temp_a0, var_s0 + 8);
                }
                func_0063B020(var_s0);
            }
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 2);
        return;
    }
    if (M2C_FIELD(((void *)D_0065D0B0), void **, 0) == NULL) {
        func_0063B060(((void *)D_0065D0B0), 1, 0x466A6000);
        if (M2C_FIELD(((void *)D_0065D0B0), s32 *, 8) == 0) {
            func_0063AFA0(M2C_FIELD(((void *)D_0065D0B0), void **, 0), ((void *)D_0065D0B0) + 8, 0xC3800000, 0xC3600000);
            temp_s1 = func_001E6E10(0x4EDE);
            func_001EF370(M2C_FIELD(((void *)D_0065D0B0), s32 *, 8), ((void *)D_00657ED0));
            func_001EEAC0(M2C_FIELD(((void *)D_0065D0B0), s32 *, 8), temp_s1);
            func_001EE790(M2C_FIELD(((void *)D_0065D0B0), s32 *, 8), ((void *)D_00657EB0));
        }
        func_001EDAE0(M2C_FIELD(((void *)D_0065D0B0), void **, 0), 1);
    }
    if (M2C_FIELD(((void *)D_0065D0B0), void **, 4) == NULL) {
        func_0063B060(((void *)D_0065D0B0) + 4, 3, 0x466A6000);
        if (M2C_FIELD(((void *)D_0065D0B0), s32 *, 0xC) == 0) {
            func_0063AFA0(M2C_FIELD(((void *)D_0065D0B0), void **, 4), ((void *)D_0065D0B0) + 0xC, 0xC3800000, 0xC3600000);
            temp_s1_2 = func_001E6E10(0x4E20);
            func_001EF370(M2C_FIELD(((void *)D_0065D0B0), s32 *, 0xC), ((void *)D_00657ED0));
            func_001EEF60(M2C_FIELD(((void *)D_0065D0B0), s32 *, 0xC), ((void *)D_00657EA0));
            func_001EEAC0(M2C_FIELD(((void *)D_0065D0B0), s32 *, 0xC), temp_s1_2);
            func_001EE790(M2C_FIELD(((void *)D_0065D0B0), s32 *, 0xC), ((void *)D_00657EC0));
        }
        func_001EDAE0(M2C_FIELD(((void *)D_0065D0B0), void **, 4), 1);
    }
}
