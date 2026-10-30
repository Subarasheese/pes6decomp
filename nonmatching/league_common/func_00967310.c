/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00227A70(void);
extern u8 func_00226D60(void);
extern s64 func_00230410(void);
extern void func_00985680(void);
extern void func_00957C70(void);
extern u8 func_0022F8D0(void);
extern void func_00957990(void);
extern s32 func_002307F0(void);
extern s32 func_00210DF0(void);
extern void func_0094C790(s32);
extern void func_0094C750(s8);
extern s32 func_0017F900(void);
extern void func_00939730(void);
M2C_UNK func_00939470();                            /* extern */
M2C_UNK func_009398F0();                            /* extern */
M2C_UNK func_0094BA80();                            /* extern */
M2C_UNK func_0094CE70();                            /* extern */
M2C_UNK func_0094CF50();                            /* extern */
M2C_UNK func_0094E500();                            /* extern */
M2C_UNK func_0094EBF0();                            /* extern */
M2C_UNK func_0095FE70();                            /* extern */
M2C_UNK func_009604B0();                            /* extern */
M2C_UNK func_00978B10();                            /* extern */
M2C_UNK func_009857F0(u8);                          /* extern */
M2C_UNK func_0098B280(void *);                      /* extern */
M2C_UNK func_0098F4C0();                            /* extern */
M2C_UNK func_0099BEC0();                            /* extern */
M2C_UNK func_00AE4960();                            /* extern */
M2C_UNK func_00AE4A40();                            /* extern */
M2C_UNK func_00AEAD70(M2C_UNK);                     /* extern */
M2C_UNK func_00AEADD0(M2C_UNK);                     /* extern */
M2C_UNK func_00AFC590();                            /* extern */
M2C_UNK func_00AFDDF0();                            /* extern */
M2C_UNK func_00B005F0(M2C_UNK);                     /* extern */
M2C_UNK func_00B13F70(M2C_UNK);                     /* extern */
M2C_UNK func_00B13FB0();                            /* extern */
M2C_UNK func_00B16250();                            /* extern */
M2C_UNK func_00B16320();                            /* extern */
M2C_UNK func_00B54C80();                            /* extern */
extern void *D_003E77AC;
extern void *D_003E77B0;
extern void *D_003E7B0C;
extern char D_00591C09[];

s32 func_00967310(void) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s0;

    temp_v0 = M2C_FIELD(D_003E77AC, s32 *, 4);
    var_s0 = -1;
    switch (temp_v0) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        M2C_FIELD(D_003E7B0C, s8 *, 0x2E) = 1;
        M2C_FIELD(D_003E77B0, u32 *, 0x20) = (u32) (M2C_FIELD(D_003E77B0, u32 *, 0x20) & ~4);
        func_0098B280(D_003E77B0);
        if (func_00230410() == 1) {
            if ((func_00227A70() != 1) && (M2C_FIELD(D_003E77B0, u8 *, 7) == 1)) {
                func_009604B0();
            }
        } else {
            func_009604B0();
        }
        func_0094E500();
        func_0094CF50();
        func_0094CE70();
        func_00978B10();
        func_0094EBF0();
        func_00957990();
        switch ((*(u8 *)D_00591C09)) {                       /* switch 2; irregular */
        case 4:                                     /* switch 2 */
            func_009857F0((*(u8 *)D_00591C09));
            if (func_00210DF0() == 2) {
                func_00AFC590();
                func_00B005F0(0);
                func_00AFDDF0();
                func_00B54C80();
                if (func_00226D60() == 1) {
                    func_009398F0();
                    func_00939730();
                }
            }
            break;
        case 1:                                     /* switch 2 */
            if (func_00210DF0() == 1) {
                func_00AE4A40();
                func_0098F4C0();
                func_00985680();
            }
            break;
        case 14:                                    /* switch 2 */
            if (func_00210DF0() == 1) {
                func_00AE4960();
                func_0098F4C0();
                func_00985680();
                func_0094BA80();
                func_0095FE70();
            }
            break;
        case 2:                                     /* switch 2 */
            temp_v1 = func_002307F0() & 0xFF;
            switch (temp_v1) {                      /* switch 3; irregular */
            case 1:                                 /* switch 3 */
                if (!(M2C_FIELD(D_003E77B0, u32 *, 0x20) & 0x200)) {
                    func_0094BA80();
                    func_0095FE70();
                }
                func_0099BEC0();
                break;
            case 0:                                 /* switch 3 */
                func_0098F4C0();
                break;
            }
            func_00985680();
            break;
        }
        func_0094C790(1);
        break;
    case 1:                                         /* switch 1 */
        if (func_0017F900() == 1) {
            func_00957C70();
            if (func_00210DF0() == 2) {
                if ((func_0022F8D0() & 0xFF) == 2) {
                    func_00B16320();
                    func_00B16250();
                    func_00939470();
                    func_00AEADD0(0);
                    func_00AEAD70(1);
                    var_s0 = 0x12;
                    func_00B13F70(1);
                    func_00B13FB0();
                    func_0094C750(0x1C);
                } else {
                    goto block_40;
                }
            } else if (((*(u8 *)D_00591C09) == 0xE) && (M2C_FIELD(D_003E77B0, u32 *, 0x20) & 0x08000000)) {
                var_s0 = 0x32;
            } else {
block_40:
                var_s0 = 0x1A;
            }
        }
        break;
    }
    if (var_s0 != -1) {
        func_0094C790(0);
    }
    return var_s0;
}
