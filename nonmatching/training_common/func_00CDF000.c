/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001B6290(M2C_UNK);                     /* extern */
M2C_UNK func_001B6380(M2C_UNK);                     /* extern */
M2C_UNK func_001B6460(M2C_UNK);                     /* extern */
M2C_UNK func_001B6780(s32);                         /* extern */
M2C_UNK func_001B7A90();                            /* extern */
M2C_UNK func_001B9030(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_001BE4D0(M2C_UNK);                         /* extern */
s32 func_00263030();                                /* extern */
s32 func_002630F0();                                /* extern */
s32 func_002646D0();                                /* extern */
M2C_UNK func_002646E0(s32);                         /* extern */
s32 func_00825670();                                /* extern */
s32 func_008256C0();                                /* extern */
s32 func_00CCE460(void *);                          /* extern */
s8 func_00CD01F0(M2C_UNK, s32, s32);                /* extern */
M2C_UNK func_00CD7A00(M2C_UNK);                     /* extern */
void *func_00CDCD70();                              /* extern */
M2C_UNK func_00CDCE30();                            /* extern */
M2C_UNK func_00CDCE40();                            /* extern */
M2C_UNK func_00CDCE50();                            /* extern */
M2C_UNK func_00CE42B0(f32 *, M2C_UNK);              /* extern */
M2C_UNK func_00CE44E0();                            /* extern */
M2C_UNK func_00CE44F0(s32);                         /* extern */
M2C_UNK func_00CE4540(s32);                         /* extern */
M2C_UNK func_00CE6230();                            /* extern */
M2C_UNK func_00CE7230();                            /* extern */
M2C_UNK func_00CE89A0();                            /* extern */
M2C_UNK func_00CE9B20();                            /* extern */
M2C_UNK func_00CEA170();                            /* extern */
s32 func_00CEC730(M2C_UNK, s32);                    /* extern */
M2C_UNK func_00CECC60();                            /* extern */
M2C_UNK func_00CECCB0(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_00CED260();                                /* extern */
M2C_UNK func_00CEDC60();                            /* extern */
extern f32 D_003E7E08;
extern void *D_003E7E1C;
extern char D_00CF9980[];
extern char D_00CF9990[];

s32 func_00CDF000(s32 arg0) {
    f32 sp3C;
    s32 temp_s0;
    s32 temp_v1;
    s32 var_s1;
    s8 temp_s0_2;

    var_s1 = 0;
    sp3C = D_003E7E08;
    temp_v1 = func_002646D0() & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 3:
        if ((M2C_FIELD(D_003E7E1C, s32 *, 0) != 2) || (func_00CED260() != 0)) {
            func_001B6460(0);
            if (M2C_FIELD(D_003E7E1C, s32 *, 0) != 1) {
                func_00CD7A00(4);
                func_00CECC60();
                func_00CDCE30();
                func_00CE89A0();
                func_00CE44F0(arg0);
                var_s1 = 1;
                M2C_FIELD(D_003E7E1C, s32 *, 4) = 1;
            } else {
                func_00CE9B20();
                if (func_00CED260() != 0) {
                    func_00CE4540(arg0);
                    func_00CDCE30();
                    func_00CEA170();
                    func_001B7A90();
                    if (func_002630F0() != 0) {
                        temp_s0 = func_008256C0();
                        temp_s0_2 = func_00CD01F0(0, temp_s0, func_00825670());
                        M2C_FIELD(func_00CDCD70(), s8 *, 0x38) = temp_s0_2;
                    } else {
                        func_00CEDC60();
                    }
                    M2C_FIELD(D_003E7E1C, s32 *, 4) = 0;
                    func_00CE44E0();
                }
            }
        }
        break;
    case 0:
        func_00CE7230();
        func_00CE42B0(&sp3C, 1);
        M2C_FIELD(D_003E7E1C, s32 *, 0) = 0;
        func_00CDCE50();
        func_001B6290(1);
        func_001B6780(func_00CEC730(6, M2C_FIELD(D_003E7E1C, s32 *, 0x14C)));
        func_001B6380(0);
        if (func_00263030() == 0) {
            func_001B9030(7, 0x1700B1, 1);
        } else {
            func_001B9030(7, 0x390015, 1);
        }
        func_00CE6230();
        func_00CDCE40();
        func_00CECCB0(((void *)D_00CF9980), 2);
        func_002646E0(arg0);
        break;
    case 1:
        func_00CDCE40();
        if (func_002630F0() == 0) {
            if (func_001BE4D0(0) != 0) {
                func_002646E0(arg0);
            }
        } else if ((func_00CCE460(func_00CDCD70()) != 0) && (func_001BE4D0(0) != 0)) {
            func_002646E0(arg0);
        }
        break;
    case 2:
        func_00CE6230();
        if (func_00263030() != 0) {
            func_00CECCB0(((void *)D_00CF9990), 2);
        }
        func_00CDCE40();
        if (M2C_FIELD(D_003E7E1C, s32 *, 0) != 0) {
            func_002646E0(arg0);
        }
        break;
    }
    return var_s1;
}
