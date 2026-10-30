/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002646E0(void *);
extern void func_001B7A90(void);
extern void func_00264790(void *, u8);
extern s32 func_001B6780(s32);
extern int func_002646D0(int);
extern void func_001B6290(void);
extern u32 func_00CECE10(void);
extern void func_00CE43B0(void *);
extern u32 func_00CECE20(void);
M2C_UNK func_001B9030(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_00CE42B0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_00CE4330(s32);                         /* extern */
M2C_UNK func_00CE4540(s32);                         /* extern */
M2C_UNK func_00CECCB0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_00CECDB0();                            /* extern */
s32 func_00CED260();                                /* extern */
s32 func_00CED270();                                /* extern */
extern s32 *D_003E7E1C;
extern s32 D_003EB298;
extern char D_00CF9920[];
extern char D_00CF9940[];

s32 func_00CDE150(s32 arg0) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;

    temp_v1 = func_002646D0(arg0) & 0xFF;
    switch (temp_v1) {                              /* switch 1; irregular */
    case 4:                                         /* switch 1 */
        if ((*D_003E7E1C != 1) || (func_00CED260() != 0)) {
            temp_v1_2 = *D_003E7E1C;
            switch (temp_v1_2) {                    /* switch 4; irregular */
            case 3:                                 /* switch 4 */
                func_00CE43B0((void *) arg0);
                break;
            case 2:                                 /* switch 4 */
                func_00CE4330(arg0);
                break;
            case 1:                                 /* switch 4 */
                D_003EB298 = 0;
                func_00CE4540(arg0);
                func_00CECE10();
                func_001B7A90();
                func_00CECDB0();
                break;
            }
        }
        break;
    case 3:                                         /* switch 1 */
        temp_v1_3 = *D_003E7E1C;
        switch (temp_v1_3) {                        /* switch 3; irregular */
        case 0:                                     /* switch 3 */
            break;
        case 2:                                     /* switch 3 */
            *D_003E7E1C = 0;
            func_00264790((void *) arg0, 2U);
            break;
        case 1:                                     /* switch 3 */
        case 3:                                     /* switch 3 */
            func_002646E0((void *) arg0);
            break;
        }
        break;
    case 0:                                         /* switch 1 */
        func_001B9030(7, 0x170000, 1);
        func_002646E0((void *) arg0);
        func_00CE42B0(((void *)D_00CF9920), 8);
        func_00CECE20();
        func_001B6290();
        func_001B6780(0);
        break;
    case 1:                                         /* switch 1 */
        if (func_00CED270() != 0) {
            *D_003E7E1C = 0;
            func_002646E0((void *) arg0);
        }
        break;
    case 2:                                         /* switch 1 */
        func_00CECCB0(((void *)D_00CF9940), 3);
        temp_v1_4 = *D_003E7E1C;
        switch (temp_v1_4) {                        /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            *D_003E7E1C = 0;
            func_002646E0((void *) arg0);
            break;
        case 3:                                     /* switch 2 */
            func_00264790((void *) arg0, 4U);
            break;
        case 2:                                     /* switch 2 */
            func_00264790((void *) arg0, 4U);
            D_003EB298 = 1;
            break;
        }
        break;
    }
    return 0;
}
