/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0016C8A8(void *, s32, s64, s64, s32);
extern int func_00170430(void);
extern void func_0016D138(void);
extern void func_0016D248(void);
extern void func_00170400(void *, void *);
void *func_0016C690();                              /* extern */
M2C_UNK func_0016C718(void *);                      /* extern */
M2C_UNK func_001704E8(void *, s32, s32, u64);       /* extern */
extern char D_00387810[];
extern char D_003CAC00[];
extern char D_003CAC18[];
extern char D_003CAC38[];

s32 func_00170CE8(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK *var_a1;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_s0_2;
    s32 temp_v0;
    u64 temp_a3;
    u64 temp_s0;
    void *var_v0;

    if (arg0 == NULL) {
        var_a1 = ((void *)D_003CAC00);
        goto block_7;
    }
    if (arg1 < 0) {
        var_a1 = ((void *)D_003CAC18);
        goto block_7;
    }
    if (arg2 == 0) {
        var_a1 = ((void *)D_003CAC38);
block_7:
        func_00170400(arg0, var_a1);
        var_v0 = NULL;
    } else if (func_00170430() != 1) {
        var_v0 = NULL;
        if (M2C_FIELD(arg0, s8 *, 2) != 2) {
            if (arg1 == 0) {
                M2C_FIELD(arg0, s8 *, 2) = 1;
            } else {
                var_v0 = func_0016C690();
                M2C_FIELD(arg0, void **, 0x2C) = var_v0;
                if (var_v0 != NULL) {
                    temp_s0 = arg1 << 0xB;
                    temp_a3 = M2C_FIELD(arg0, u64 *, 8);
                    temp_v0 = M2C_FIELD(arg0, s32 *, 0x10) - M2C_FIELD(arg0, s32 *, 0x1C);
                    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
                    temp_a2 = temp_a3 < temp_s0;
                    temp_a1 = (arg1 >= temp_v0) ? temp_v0 : arg1;
                    M2C_FIELD(arg0, s32 *, 0x24) = temp_a1;
                    func_001704E8(arg0, temp_a1, temp_a2, temp_a3);
                    var_v0 = func_0016C8A8(M2C_FIELD(arg0, void **, 0x2C), M2C_FIELD(arg0, s32 *, 0x18), (s64) M2C_FIELD(arg0, s32 *, 0x1C), (s64) ((temp_a2 != 0) ? temp_a3 : temp_s0), arg2);
                    if (var_v0 != NULL) {
                        temp_s0_2 = (*(s32 *)D_00387810);
                        if (temp_s0_2 != 1) {
                            M2C_FIELD(arg0, s8 *, 2) = 2;
                            M2C_FIELD(arg0, void **, 0x28) = NULL;
                            var_v0 = (void *) M2C_FIELD(arg0, s32 *, 0x24);
                        } else {
                            func_0016D248();
                            func_0016D138();
                            M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + M2C_FIELD(arg0, s32 *, 0x24));
                            func_0016C718(M2C_FIELD(arg0, void **, 0x2C));
                            M2C_FIELD(arg0, void **, 0x2C) = NULL;
                            var_v0 = (void *) M2C_FIELD(arg0, s32 *, 0x24);
                            M2C_FIELD(arg0, s8 *, 2) = (s8) temp_s0_2;
                            M2C_FIELD(arg0, void **, 0x28) = var_v0;
                        }
                        M2C_FIELD(arg0, s32 *, 0x14) = 0;
                    }
                }
            }
        }
    } else {
        var_v0 = NULL;
    }
    return (s32) var_v0;
}
