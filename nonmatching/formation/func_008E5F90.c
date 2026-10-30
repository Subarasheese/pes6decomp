/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_008B28E0(u8);                              /* extern */
M2C_UNK func_008C5750(void *, s32);                 /* extern */
s32 func_008D90A0(s32);                             /* extern */
M2C_UNK func_008E5200(void *, u8);                  /* extern */
M2C_UNK func_008E5DE0();                            /* extern */

s32 func_008E5F90(void *arg0, s32 arg1) {
    s32 temp_v1_2;
    u8 temp_v1;

    if (arg0 == NULL) {
        return 0;
    }
    func_008E5DE0();
    temp_v1 = M2C_FIELD(arg0, u8 *, 0x1DD);
    switch (temp_v1) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        return 0;
    case 1:                                         /* switch 1 */
        temp_v1_2 = func_008D90A0(arg1) & 0x600;
        switch (temp_v1_2) {                        /* switch 2; irregular */
        case 0x200:                                 /* switch 2 */
            M2C_FIELD(arg0, u8 *, 0x1DE) = (u8) (M2C_FIELD(arg0, u8 *, 0x1DE) + 4);
            M2C_FIELD(arg0, u8 *, 0x1DE) = (u8) (M2C_FIELD(arg0, u8 *, 0x1DE) - 1);
            M2C_FIELD(arg0, u8 *, 0x1DE) = (u8) (M2C_FIELD(arg0, u8 *, 0x1DE) & 3);
block_23:
            func_008E5200(arg0, M2C_FIELD(arg0, u8 *, 0x1DE));
            func_0026E840(0x8400F803);
            return 3;
        case 0x400:                                 /* switch 2 */
            M2C_FIELD(arg0, u8 *, 0x1DE) = (u8) (M2C_FIELD(arg0, u8 *, 0x1DE) + 1);
            M2C_FIELD(arg0, u8 *, 0x1DE) = (u8) (M2C_FIELD(arg0, u8 *, 0x1DE) & 3);
            goto block_23;
        default:                                    /* switch 2 */
            return 0;
        }
        break;
    default:                                        /* switch 1 */
        if (!(func_008D90A0(arg1) & 0x1000)) {
            return 0;
        }
        M2C_FIELD(arg0, u8 *, 0x1E2) = (u8) (M2C_FIELD(arg0, u8 *, 0x1E2) + 1);
        M2C_FIELD(arg0, u8 *, 0x1E2) = (u8) ((u8) M2C_FIELD(arg0, u8 *, 0x1E2) % 3U);
        M2C_FIELD(arg0, u8 *, 0x1DE) = (u8) M2C_FIELD((M2C_FIELD(arg0, u8 *, 0x1E2) + arg0), u8 *, 0x1DF);
        func_008C5750(arg0 + 0x9EC, func_008B28E0(M2C_FIELD(arg0, u8 *, 0x1E2)));
        goto block_23;
    }
}
