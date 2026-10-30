/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002DDC50(s32);
extern s32 func_002DE6E0(s32, s32, s32);
extern s32 func_0085F470(void *);
extern s32 func_002DDDD0(s32, s32, void *);
extern u16 func_002DCE70(u16);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_002DCA60();                                /* extern */
M2C_UNK func_0085F3D0(void *, M2C_UNK);             /* extern */
extern s32 D_003EA364;
extern s32 D_003EA368;

s32 func_008663A0(s32 arg0, s32 arg1, void *arg2, s32 arg3) {
    s32 sp58;
    s32 sp5C;
    s32 temp_v0;
    s32 var_s0;
    s32 var_v0;
    s32 var_v1;

    if ((arg0 != 0) && (arg2 != NULL) && (arg1 >= 0) && (arg3 >= 0)) {
        switch (D_003EA368) {                       /* switch 1; irregular */
        case 2:                                     /* switch 1 */
            if (func_0085F470(arg2) == 0) {
                D_003EA368 = 0;
                D_003EA364 = 0;
                return 0;
            }
            if (D_003EA364 >= (arg3 * 0x3C)) {
                func_0085F3D0(arg2, 1);
                D_003EA368 = 0;
                D_003EA364 = 0;
                return -0x23;
            }
            D_003EA364 += 1;
block_26:
        default:                                    /* switch 1 */
            return -0x40;
        case 0:                                     /* switch 1 */
            D_003EA368 = 1;
            goto block_26;
        case 1:                                     /* switch 1 */
            var_s0 = func_002DCA60();
            if (var_s0 == -1) {
                var_s0 = func_002DDC50(arg0);
                switch (var_s0) {                   /* switch 2; irregular */
                case -1:                            /* switch 2 */
                    D_003EA368 = 0;
                    D_003EA364 = 0;
                    return -0x19;
                case 0:                             /* switch 2 */
                    var_v1 = 3;
                    var_v0 = -0x40;
                    goto block_53;
                }
            } else {
                M2C_FIELD(arg2, s32 *, 0) = func_002DE6E0(0, 0, 0);
                if (M2C_FIELD(arg2, s32 *, 0) != -1) {
                    sp5C = 1;
                    func_002DDDD0(M2C_FIELD(arg2, s32 *, 0), 1, &sp5C);
                    func_001C48E8(arg2 + 4, 0, 0x10);
                    M2C_FIELD(arg2, s16 *, 4) = 0;
                    M2C_FIELD(arg2, u16 *, 6) = func_002DCE70(arg1 & 0xFFFF);
                    M2C_FIELD(arg2, s32 *, 8) = var_s0;
                    D_003EA364 = 0;
                    if (func_0085F470(arg2) == 0) {
                        D_003EA368 = 0;
                        D_003EA364 = 0;
                        return 0;
                    }
                    var_v1 = 2;
                    var_v0 = -0x66;
block_53:
                    D_003EA368 = var_v1;
                    return var_v0;
                }
                D_003EA368 = 0;
                D_003EA364 = 0;
                return -0x1E;
            }
            break;
        case 3:                                     /* switch 1 */
            temp_v0 = func_002DDC50(arg0);
            switch (temp_v0) {                      /* switch 3; irregular */
            case -1:                                /* switch 3 */
                D_003EA368 = 0;
                D_003EA364 = 0;
                return -0x19;
            case 0:                                 /* switch 3 */
                var_v1 = 3;
                var_v0 = -0x40;
                goto block_53;
            default:                                /* switch 3 */
                M2C_FIELD(arg2, s32 *, 0) = func_002DE6E0(0, 0, 0);
                if (M2C_FIELD(arg2, s32 *, 0) != -1) {
                    sp58 = 1;
                    func_002DDDD0(M2C_FIELD(arg2, s32 *, 0), 1, &sp58);
                    func_001C48E8(arg2 + 4, 0, 0x10);
                    M2C_FIELD(arg2, s16 *, 4) = 0;
                    M2C_FIELD(arg2, u16 *, 6) = func_002DCE70(arg1 & 0xFFFF);
                    M2C_FIELD(arg2, s32 *, 8) = temp_v0;
                    D_003EA364 = 0;
                    if (func_0085F470(arg2) == 0) {
                        D_003EA368 = 0;
                        D_003EA364 = 0;
                        return 0;
                    }
                    var_v1 = 2;
                    var_v0 = -0x66;
                    goto block_53;
                }
                D_003EA368 = 0;
                D_003EA364 = 0;
                return -0x1E;
            }
            break;
        }
    } else {
        D_003EA368 = 0;
        D_003EA364 = 0;
        return -0x18;
    }
}
