/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char *D_0052B348[];

u8 func_001F4CD0(s32 arg0, u32 arg1) {
    u8 var_v0;
    u8 var_a3;
    char *n;
    char *e;

    var_v0 = 0;
    if (arg0 != -1) {
        var_a3 = 0;
        n = D_0052B348[0];
        while (n != NULL && M2C_FIELD(n, s32 *, 0x10) != arg0) {
            n = M2C_FIELD(n, char **, 4);
        }
        if (n != NULL) {
            e = M2C_FIELD(n, char **, 8);
            if (e != NULL) {
                if (arg1 < M2C_FIELD(e, u32 *, 8) || M2C_FIELD(M2C_FIELD(n, char **, 0xC), u32 *, 8) < arg1) {
                    e = NULL;
                } else {
                    while (e != NULL && M2C_FIELD(e, u32 *, 8) != arg1) {
                        e = M2C_FIELD(e, char **, 4);
                    }
                }
            }
            if (e != NULL) {
                var_a3 = var_a3 | M2C_FIELD(e, u8 *, 0xC);
            }
        }
        var_v0 = var_v0 | var_a3;
    }
    {
        u8 b = 0;
        n = D_0052B348[0];
        while (n != NULL && M2C_FIELD(n, s32 *, 0x10) != -1) {
            n = M2C_FIELD(n, char **, 4);
        }
        if (n != NULL) {
            e = M2C_FIELD(n, char **, 8);
            if (e != NULL) {
                if (arg1 < M2C_FIELD(e, u32 *, 8) || M2C_FIELD(M2C_FIELD(n, char **, 0xC), u32 *, 8) < arg1) {
                    e = NULL;
                } else {
                    while (e != NULL && M2C_FIELD(e, u32 *, 8) != arg1) {
                        e = M2C_FIELD(e, char **, 4);
                    }
                }
            }
            if (e != NULL) {
                b = b | M2C_FIELD(e, u8 *, 0xC);
            }
        }
        return var_v0 | b;
    }
}
