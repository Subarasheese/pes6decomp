/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_002646D0(s32);                             /* extern */
M2C_UNK func_002648E0(s32);                         /* extern */
M2C_UNK func_002648F0(s32);                         /* extern */
M2C_UNK func_00C89010();                            /* extern */
M2C_UNK func_00CE4260();                            /* extern */
M2C_UNK func_00CE44E0();                            /* extern */
M2C_UNK func_00CE44F0(s8 *);                        /* extern */
M2C_UNK func_00CE9B20();                            /* extern */
M2C_UNK func_00CE9E40();                            /* extern */
M2C_UNK func_00CE9F00(M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_00CEC550(M2C_UNK);                     /* extern */
M2C_UNK func_00CECDE0();                            /* extern */
M2C_UNK func_00CECE20();                            /* extern */
extern void *D_003E7E1C;
extern char D_00CFEF78[];
extern M2C_UNK func_00CE1E30;
extern M2C_UNK func_00CE2410;
extern M2C_UNK func_00CE24C0;

s32 func_00CE22E0(s32 arg0) {
    s8 sp30;
    s32 var_v0;
    s8 *var_v1;
    void *temp_s0;

    var_v0 = 0x16;
    var_v1 = &sp30;
    temp_s0 = D_003E7E1C;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    func_002648F0(arg0);
    if (func_002646D0(arg0) & 0xFF) {

    } else {
        func_00CE9E40();
        func_00CE4260();
        func_00CECE20();
        func_00C89010();
        func_00CECDE0();
        func_00CE9B20();
        func_00CEC550(0x25);
        if ((*(s32 *)D_00CFEF78) != 0) {
            func_00CE44F0(&sp30);
            func_00CE9F00(1, 0, &func_00CE2410);
            func_00CE9F00(1, 1, &func_00CE24C0);
        } else {
            M2C_FIELD(temp_s0, M2C_UNK **, 0x188) = &func_00CE1E30;
            func_00CE44E0();
        }
        (*(s32 *)D_00CFEF78) = 1;
        func_00CECDE0();
    }
    func_002648E0(arg0);
    return 1;
}
