/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00220830(s32);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_002781A0(s32);                             /* extern */
s16 *func_008472D0();                               /* extern */
s64 func_00858C20(s32);                             /* extern */
M2C_UNK func_008B3B20(M2C_UNK, M2C_UNK);            /* extern */
s32 func_008B4520(void *);                          /* extern */
M2C_UNK func_008B9AB0(s32, M2C_UNK);                /* extern */
s32 func_008BC3B0();                                /* extern */
M2C_UNK func_008CACD0(void *);                      /* extern */
M2C_UNK func_008CAD70(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_008CB190(void *, void *, u8, s32);     /* extern */
M2C_UNK func_008CB5D0(void *, M2C_UNK);             /* extern */
M2C_UNK func_008CD0C0(void *);                      /* extern */
M2C_UNK func_008CD100(void *, u8, s32, u8);         /* extern */
M2C_UNK func_008CD140(void *);                      /* extern */
M2C_UNK func_008CD1A0(void *);                      /* extern */
s32 func_008CD8F0(void *, u8);                      /* extern */
M2C_UNK func_008D3040(void *);                      /* extern */
M2C_UNK func_008E5110(void *, M2C_UNK);             /* extern */
extern char D_00592800[];
extern char D_008B144E[];
extern char D_008EE190[];
extern char D_008EE750[];

s32 func_008B51C0(void *arg0, s32 arg1) {
    M2C_UNK *var_a1;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_a2;
    s32 var_a3;
    s32 var_v0;
    s32 var_v0_2;
    s64 temp_a0;
    s64 temp_s1;
    u8 temp_a0_2;
    u8 temp_a1;
    u8 temp_a2;
    u8 temp_s0;
    u8 temp_v0;
    u8 var_a3_2;
    void *temp_v1;

    switch (arg1) {                                 /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        temp_v0 = M2C_FIELD(arg0, u8 *, 0x16);
        switch (temp_v0) {                          /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            temp_v0_2 = func_008CD8F0(arg0 + 0xB0C, M2C_FIELD(arg0, u8 *, 0x19));
            switch (temp_v0_2) {                    /* switch 5; irregular */
            case 3:                                 /* switch 5 */
                break;
            case 2:                                 /* switch 5 */
                func_0026E840(0x84028400);
                temp_a2 = M2C_FIELD(arg0, u8 *, 0xB10);
                var_a3 = 0;
                do {
                    temp_v1 = arg0 + var_a3;
                    if (M2C_FIELD(temp_v1, u8 *, 0x965) == M2C_FIELD((arg0 + temp_a2), u8 *, 0x96E)) {
                        M2C_FIELD(temp_v1, u8 *, 0x965) = (u8) M2C_FIELD(arg0, u8 *, 0x2A);
                    }
                    var_a3 += 1;
                } while (var_a3 < 8);
                M2C_FIELD((M2C_FIELD(arg0, u8 *, 0x2B) + arg0), u8 *, 0x965) = (u8) M2C_FIELD(((temp_a2 & 0xFF) + arg0), u8 *, 0x96E);
                func_008CB190(arg0 + 0xB0C, arg0 + 0x208, temp_a2, var_a3);
                /* fallthrough */
            case 1:                                 /* switch 5 */
                func_008CD0C0(arg0 + 0xB0C);
                M2C_FIELD(arg0, u8 *, 0x16) = (u8) (M2C_FIELD(arg0, u8 *, 0x16) - 1);
                break;
            }
        case 2:                                     /* switch 1 */
        case 3:                                     /* switch 3 */
block_82:
        default:                                    /* switch 1 */
            return 0;
        case 0:                                     /* switch 2 */
            temp_v0_3 = func_008CD8F0(arg0 + 0xB0C, M2C_FIELD(arg0, u8 *, 0x19));
            switch (temp_v0_3) {                    /* switch 3; irregular */
            case 1:                                 /* switch 3 */
                func_008CD140(arg0 + 0xB0C);
                if ((((*(u16 *)D_008EE190) & 0x30) == 0x30) && (func_008BC3B0() == 0)) {
                    func_008CAD70(arg0 + 0xB0C, 0, 0, 0);
                    func_008CACD0(arg0 + 0xB0C);
                    func_008CB5D0(arg0 + 0xB0C, 1);
                    func_008E5110(arg0 + 0x129C, 1);
                    if (func_008B4520(arg0) == 0) {
                        temp_s0 = M2C_FIELD(arg0, u8 *, 0);
                        if (func_008BC3B0() == 0) {
                            if (((*(u16 *)D_008EE190) & 0x80) && (temp_s1 = (s64) (func_00858C20((*(s8 *)D_008B144E) & 1) << 0x30) >> 0x30, ((temp_s1 == *func_008472D0()) == 0))) {
                                var_v0_2 = 1;
                            } else {
                                var_v0_2 = 1;
                                if (((s64) (((*(u16 *)D_008EE190) & 0xF) << 0x30) >> 0x30) == 1) {
                                    var_a2 = 0;
                                    var_a1 = ((void *)D_00592800);
loop_47:
                                    if ((M2C_FIELD(var_a1, u8 *, 0) == M2C_FIELD((((void *)D_008EE750) + ((temp_s0 & 0xFF) * 0x3224)), u8 *, 0x19)) && (M2C_FIELD(var_a1, u8 *, 8) == 1)) {

                                    } else {
                                        var_a2 += 1;
                                        var_a1 += 0x28;
                                        if (var_a2 >= 8) {
                                            var_v0_2 = 0;
                                        } else {
                                            goto loop_47;
                                        }
                                    }
                                } else if (func_008BC3B0() != 0) {
                                    var_v0_2 = 0;
                                } else {
                                    temp_a0 = (s64) (((*(u16 *)D_008EE190) & 0xF) << 0x30) >> 0x30;
                                    switch (temp_a0) { /* switch 4; irregular */
                                    case 7:         /* switch 4 */
                                        var_v0_2 = 0;
                                        break;
                                    case 6:         /* switch 4 */
                                    case 8:         /* switch 4 */
                                        var_v0_2 = 0;
                                        break;
                                    default:        /* switch 4 */
                                        var_v0_2 = func_002781A0(temp_s0 & 0xFF);
                                        break;
                                    }
                                }
                            }
                            if (var_v0_2 == 1) {
                                var_v0 = 0x21;
                            } else {
                                goto block_64;
                            }
                        } else {
block_64:
                            if (func_00220830(temp_s0 & 0xFF) != 1) {
                                var_v0 = 0x20;
                            } else {
                                var_v0 = 0x24;
                            }
                        }
                        return var_v0 & 0xFF;
                    }
                    return 0x22;
                }
                func_008B9AB0(M2C_FIELD(arg0, s32 *, 0x1D5C), 0);
                func_008CB5D0(arg0 + 0xB0C, 0);
                return 0x1F;
            case 2:                                 /* switch 3 */
                temp_a1 = M2C_FIELD(arg0, u8 *, 0xB10);
                var_a3_2 = 0;
loop_25:
                temp_a0_2 = M2C_FIELD((arg0 + var_a3_2), u8 *, 0x965);
                if ((temp_a0_2 != 0xFF) && (M2C_FIELD((arg0 + temp_a1), u8 *, 0x96E) == temp_a0_2)) {
                    M2C_FIELD(arg0, u8 *, 0x2A) = (u8) M2C_FIELD(((temp_a1 & 0xFF) + arg0), u8 *, 0x96E);
                    M2C_FIELD(arg0, u8 *, 0x2B) = var_a3_2;
                    func_008CD100(arg0 + 0xB0C, temp_a1, var_a3_2 & 0xFF, var_a3_2);
                    M2C_FIELD(arg0, u8 *, 0x16) = (u8) (M2C_FIELD(arg0, u8 *, 0x16) + 1);
                } else {
                    var_a3_2 += 1;
                    if ((s32) var_a3_2 >= 8) {

                    } else {
                        goto loop_25;
                    }
                }
                if (M2C_FIELD(arg0, u8 *, 0x16) != 0) {
                    func_0026E840(0x84028400);
                } else {
                    func_0026E840(0x8C008005);
                }
                goto block_82;
            }
            break;
        }
        break;
    case 0:                                         /* switch 1 */
        M2C_FIELD(arg0, u8 *, 0x2A) = 0U;
        M2C_FIELD(arg0, u8 *, 0x2B) = 0U;
        func_008B3B20(0, 0);
        func_008D3040(arg0 + 0x1CA8);
        func_008CD1A0(arg0 + 0xB0C);
        func_008E5110(arg0 + 0x129C, 0);
        goto block_82;
    }
}
