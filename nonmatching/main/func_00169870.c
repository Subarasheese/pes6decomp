/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001613E0(void);
extern void func_00159E88(void);
extern int func_001634B0(int, int);
extern int func_00163740(int);
extern int func_001635A0(int);
extern void func_001613C8(void);
extern void func_00159EA0(void);
extern void func_00161A20(void *);
M2C_UNK func_00165608(void *, void **);             /* extern */

void func_00169870(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_4;
    s32 var_s2;
    void ***var_s0;
    void **temp_a0_2;
    void **temp_a0_3;

    func_00159E88();
    func_001613C8();
    func_001613E0();
    func_00161A20(M2C_FIELD(arg0, void **, 4));
    func_00159EA0();
    temp_a0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_a0 != 0) {
        func_00163740(temp_a0);
        temp_a0_2 = M2C_FIELD(arg0, void ***, 0x14);
        M2C_FIELD(*temp_a0_2, M2C_UNK (**)(void **), 0x14)(temp_a0_2);
    }
    var_s2 = 0;
    func_00159E88();
    if (M2C_FIELD(arg0, s8 *, 3) > 0) {
        var_s0 = arg0 + 0x18;
        do {
            temp_a0_3 = *var_s0;
            var_s0 += 4;
            var_s2 += 1;
            M2C_FIELD(*temp_a0_3, M2C_UNK (**)(void **), 0x14)(temp_a0_3);
        } while (var_s2 < M2C_FIELD(arg0, s8 *, 3));
    }
    temp_a0_4 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_a0_4 != 0) {
        func_001634B0(temp_a0_4, 0);
        func_001635A0(M2C_FIELD(arg0, s32 *, 8));
    }
    func_00165608(arg0, M2C_FIELD(arg0, void ***, 0x14));
    func_00159EA0();
}
