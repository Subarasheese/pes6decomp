/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];

extern void func_00131D40(void *);
extern s8 func_001314B0(void *);
M2C_UNK func_00103D80(void *, void *, void *, f32); /* extern */
M2C_UNK func_0012B770(void *, void *, void *, f32); /* extern */
M2C_UNK func_00131F10(void *);                      /* extern */

void func_00131B90(void *arg0, void *arg1, void *arg2, f32 fparg0) {
    s8 var_v0;
    void *var_s0;
    void *var_s1;
    void *var_s2;

    if (M2C_FIELD(arg0, s8 *, 0x1F) != 0) {
        var_v0 = M2C_FIELD(arg0, s8 *, 0x1D) | 0x40;
    } else {
        var_v0 = M2C_FIELD(arg0, s8 *, 0x1D) & ~0x40;
    }
    M2C_FIELD(arg0, s8 *, 0x1D) = var_v0;
    func_00131D40(arg1);
    func_00131D40(arg2);
    func_00131F10(arg1);
    func_00131F10(arg2);
    M2C_FIELD(arg0, s8 *, 0x1D) = (s8) ((M2C_FIELD(arg0, s8 *, 0x1D) & ~0x3F) | 1);
    var_s2 = M2C_FIELD(arg0, void **, 0);
    var_s1 = M2C_FIELD(arg1, void **, 0);
    var_s0 = M2C_FIELD(arg2, void **, 0);
    if (func_001314B0(M2C_FIELD(arg1, void **, 4)) == 0) {
        if (func_001314B0(M2C_FIELD(arg2, void **, 4)) == 0) {
            if (var_s2 != NULL) {
                do {
                    func_0012B770(var_s2 + 0x50, var_s1 + 0x50, var_s0 + 0x50, fparg0);
                    if (M2C_FIELD(var_s2, s32 *, 0x108) == 0) {
                        func_00103D80(var_s2 + 0x40, var_s1 + 0x40, var_s0 + 0x40, 1.0f - fparg0);
                    } else {
                        M2C_FIELD(var_s2, s128 *, 0x40) = (s128) M2C_FIELD(var_s1, s128 *, 0x40);
                    }
                    var_s2 = M2C_FIELD(var_s2, void **, 0x104);
                    var_s0 = M2C_FIELD(var_s0, void **, 0x104);
                    var_s1 = M2C_FIELD(var_s1, void **, 0x104);
                } while (var_s2 != NULL);
            }
        } else {
            goto block_6;
        }
    } else {
block_6:
        if (var_s2 != NULL) {
            do {
                func_0012B770(var_s2 + 0x50, var_s1 + 0x50, var_s0 + 0x50, fparg0);
                func_00103D80(var_s2 + 0x40, var_s1 + 0x40, var_s0 + 0x40, 1.0f - fparg0);
                var_s2 = M2C_FIELD(var_s2, void **, 0x104);
                var_s0 = M2C_FIELD(var_s0, void **, 0x104);
                var_s1 = M2C_FIELD(var_s1, void **, 0x104);
            } while (var_s2 != NULL);
        }
    }
}
