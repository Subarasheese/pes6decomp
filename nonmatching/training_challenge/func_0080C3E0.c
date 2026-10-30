/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00824080(void);
extern u32 func_00824160(void);
M2C_UNK func_00CD7A00(M2C_UNK, s32, u32, void *, s32); /* extern */
f32 func_00CD8950(f32, f32, f32, f32);              /* extern */
extern void *Pes6Ball_Current;
extern char D_00829833[];
extern char D_0082983A[];
extern char D_0082983B[];
extern char D_0082983C[];

void func_0080C3E0(void) {
    f32 temp_f0;
    s32 var_a1;
    s32 var_a4;
    u32 temp_a2;
    u32 temp_s0;
    void *temp_s1;
    void *temp_v0;
    void *temp_v1;
    void *var_a3;

    temp_v0 = func_00824080();
    temp_s1 = M2C_FIELD(M2C_FIELD(temp_v0, void **, 0x18), void **, 0xC);
    if (!(M2C_FIELD(Pes6Ball_Current, f32 *, 0x10) <= M2C_FIELD(temp_s1, f32 *, 0x5C)) && ((*(s8 *)D_0082983A) == 0) && ((*(s8 *)D_00829833) == 0)) {
        temp_s0 = func_00824160();
        temp_v1 = M2C_FIELD(M2C_FIELD(temp_v0, void **, 0x18), void **, 0xC);
        temp_f0 = func_00CD8950(M2C_FIELD(Pes6Ball_Current, f32 *, 0x14), M2C_FIELD(Pes6Ball_Current, f32 *, 0x18), M2C_FIELD(temp_v1, f32 *, 0x60), M2C_FIELD(temp_v1, f32 *, 0x64));
        (*(f32 *)D_0082983C) = temp_f0;
        temp_a2 = (u8) M2C_FIELD(temp_v0, u8 *, 0x1C) >> 1;
        var_a4 = 0;
        if ((s32) temp_a2 > 0) {
            var_a3 = M2C_FIELD(temp_v0, void **, 0x18);
loop_5:
            var_a1 = 1;
            if (!(temp_f0 <= M2C_FIELD(M2C_FIELD(var_a3, void **, 0xC), f32 *, 0x58))) {
                var_a1 = 0;
            }
            if ((var_a1 ^ 1) != 0) {
                var_a4 += 1;
                var_a3 += 4;
                if (var_a4 >= (s32) temp_a2) {

                } else {
                    goto loop_5;
                }
            } else {
                (*(s8 *)D_00829833) = var_a4 + 4;
                func_00CD7A00(0xB, var_a1, temp_a2, var_a3, var_a4);
                if (M2C_FIELD(temp_s0, s32 *, 0x34) != 0) {
                    (*(s8 *)D_0082983B) = 1;
                }
            }
        }
    }
    if (!(M2C_FIELD(Pes6Ball_Current, f32 *, 0x10) <= M2C_FIELD(temp_s1, f32 *, 0x5C))) {
        (*(s8 *)D_0082983A) = 1;
    }
}
