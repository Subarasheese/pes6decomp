/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00186220(void);
extern void func_00182B30(int);
extern void func_002727C0(s32);
extern void func_001A58E0(void *, signed char);
extern void func_0017E120(int);
M2C_UNK func_00209830(s32);                         /* extern */
M2C_UNK func_009B37F0(M2C_UNK *);                   /* extern */
M2C_UNK func_009E1D30(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_009E37F0();                            /* extern */
M2C_UNK func_00B24790(M2C_UNK);                     /* extern */
M2C_UNK func_00B6CE80(M2C_UNK *);                   /* extern */
extern void *D_0058E5B4;
extern char D_0058E7F0[];
extern char D_00591BE4[];
extern char D_00591DB4[];
extern char D_00591E14[];
extern char D_00591F11[];
extern char D_00591F12[];
extern char D_00CBBDF8[];

void func_009E5D20(void) {
    M2C_UNK *var_s2;
    s32 var_s0;
    s32 var_s1;

    (*(s8 *)D_00591F11) = 1;
    (*(s8 *)D_00591F12) = 0;
    (*(s8 *)D_00591DB4) = 0;
    func_00186220();
    func_0017E120(1);
    func_002727C0(0x10);
    func_00182B30(1);
    M2C_FIELD(D_0058E5B4, u8 *, 0x2C) = 0U;
    func_001A58E0(M2C_FIELD(D_0058E5B4, void **, 0), (s8) M2C_FIELD(D_0058E5B4, u8 *, 0x2C));
    func_009E37F0();
    if ((*(u8 *)D_00CBBDF8) == 1) {
        (*(s32 *)D_00591E14) = 0;
        var_s1 = 0;
        if (((*(u8 *)D_00591BE4) * 0x1E) > 0) {
            do {
                var_s2 = ((void *)D_0058E7F0);
                var_s0 = 0;
                (*(s32 *)D_00591E14) += 1;
loop_3:
                func_00209830(M2C_FIELD(var_s2, s32 *, 4));
                func_00B6CE80(var_s2);
                func_009B37F0(var_s2);
                var_s0 += 1;
                var_s2 += 0x240;
                if (var_s0 < 0x16) {
                    goto loop_3;
                }
                var_s1 += 1;
            } while (var_s1 < ((*(u8 *)D_00591BE4) * 0x1E));
        }
    }
    func_00B24790(1);
    func_009E1D30(2, 3);
}
