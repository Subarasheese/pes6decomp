/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_001AAF40(void *, signed char);
extern void func_001AAF50(void *, s32);
extern s32 func_00152130(s32, s8);
extern void func_009E1D30(s32, s32);
extern void func_00AD0A20(void);
extern s32 func_00B24670(void);
extern char D_0058E7F0[];
extern char D_00591BE4[];
extern char D_00591E14[];

void func_009E5C20(void) {
    char *var_s0;
    s32 var_s1;
    void *temp_v1;

    if ((*(s32 *)D_00591E14) == ((*(u8 *)D_00591BE4) * 0x1E)) {
        var_s1 = 0;
        var_s0 = D_0058E7F0;
        do {
            temp_v1 = M2C_FIELD(var_s0, void **, 4);
            if (M2C_FIELD(temp_v1, u8 *, 0x2C) != 0) {
                func_001AAF50(M2C_FIELD(temp_v1, void **, 0), 2);
                func_001AAF40(M2C_FIELD(M2C_FIELD(var_s0, void **, 4), void **, 0), 1);
            }
            var_s1 += 1;
            var_s0 += 0x240;
        } while (var_s1 < 0x16);
    }
    (*(s32 *)D_00591E14) += 1;
    func_00AD0A20();
    if (func_00152130(0, 0x10) == 0) {
        return;
    }
    if (func_00B24670() == 0) {
        func_009E1D30(2, 4);
    }
}
