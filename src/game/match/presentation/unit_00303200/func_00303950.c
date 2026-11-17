/* compiler: mwcc-3.0.1b151 */
/* Repaired from m2c output by an agent; compiles to the original instructions exactly. */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 Pes6Scene_Get(M2C_UNK);                         /* extern */
void func_00305EC0(void (*)(void), s32, void *);
extern char D_005EAAF0[];
extern char D_005EAB20[];
extern char D_005EAB50[];
extern char D_005EAB80[];
extern char D_005EACD0[];
extern char D_005EAD00[];
extern char D_005EAD30[];
extern char D_005EAD60[];
extern char D_005EAD90[];
extern char D_005EADC0[];
extern char D_005EADF0[];
extern char D_005EAE20[];
extern char D_005EAE50[];
extern char D_005EAE80[];
extern char D_005EAEB0[];
extern char D_005EAEE0[];
extern char D_005EAF10[];
extern char D_005EAF40[];
extern char D_005EAF70[];
extern char D_005EAFA0[];
extern char D_005EAFD0[];
extern char D_005EB000[];
extern char D_005EB030[];
extern char D_005EB060[];
extern char D_005EB090[];
extern char D_005EB0F0[];
extern char D_005EB180[];
extern char D_005EB1B0[];
extern char D_005EB1E0[];
extern void func_002FE860(void);
extern void func_002FE950(void);
extern void func_002FEB00(void);
extern void func_002FECD0(void);
extern void func_002FEDF0(void);
extern void func_002FEF70(void);
extern void func_002FF0E0(void);
extern void func_002FF4B0(void);
extern void func_002FF5C0(void);
extern void func_002FFA00(void);
extern void func_002FFEA0(void);
extern void func_00300390(void);
extern void func_003006F0(void);
extern void func_00300A80(void);
extern void func_00300D90(void);
extern void func_00301000(void);
extern void func_003012E0(void);
extern void func_00301570(void);
extern void func_00301790(void);
extern void func_003019B0(void);
extern void func_00301B50(void);
extern void func_00301F40(void);
extern void func_003021A0(void);
extern void func_00302740(void);
extern void func_00302BB0(void);
extern void func_00302DD0(void);
extern void func_003031B0(void);
extern void func_003035B0(void);
extern void func_003038E0(void);

s32 func_00303950(void) {
    if (Pes6Scene_Get(0) == 0xD) {
        func_00305EC0(&func_002FE860, 0x26, ((void *)D_005EB0F0));
    } else {
        func_00305EC0(&func_003038E0, 0, ((void *)D_005EAAF0));
        func_00305EC0(&func_002FF5C0, 5, ((void *)D_005EAB50));
        func_00305EC0(&func_002FF4B0, 6, ((void *)D_005EAB80));
        func_00305EC0(&func_003035B0, 0xE, ((void *)D_005EACD0));
        func_00305EC0(&func_003031B0, 0xF, ((void *)D_005EAD00));
        func_00305EC0(&func_00302DD0, 0x10, ((void *)D_005EAD30));
        func_00305EC0(&func_00302BB0, 0x11, ((void *)D_005EAD60));
        func_00305EC0(&func_00302740, 0x12, ((void *)D_005EAD90));
        func_00305EC0(&func_003021A0, 0x13, ((void *)D_005EADC0));
        func_00305EC0(&func_00301F40, 0x14, ((void *)D_005EADF0));
        func_00305EC0(&func_00301B50, 0x15, ((void *)D_005EAE20));
        func_00305EC0(&func_003019B0, 0x16, ((void *)D_005EAE50));
        func_00305EC0(&func_00301790, 0x17, ((void *)D_005EAE80));
        func_00305EC0(&func_00301570, 0x18, ((void *)D_005EAEB0));
        func_00305EC0(&func_003012E0, 0x19, ((void *)D_005EAEE0));
        func_00305EC0(&func_00301000, 4, ((void *)D_005EAB20));
        func_00305EC0(&func_00300D90, 0x1A, ((void *)D_005EAF10));
        func_00305EC0(&func_00300A80, 0x1B, ((void *)D_005EAF40));
        func_00305EC0(&func_003006F0, 0x1C, ((void *)D_005EAF70));
        func_00305EC0(&func_00300390, 0x1D, ((void *)D_005EAFA0));
        func_00305EC0(&func_002FF0E0, 0x1E, ((void *)D_005EAFD0));
        func_00305EC0(&func_002FEF70, 0x1F, ((void *)D_005EB000));
        func_00305EC0(&func_002FEDF0, 0x22, ((void *)D_005EB030));
        func_00305EC0(&func_002FECD0, 0x23, ((void *)D_005EB060));
        func_00305EC0(&func_002FE950, 0x24, ((void *)D_005EB090));
        func_00305EC0(&func_002FFA00, 0x29, ((void *)D_005EB180));
        func_00305EC0(&func_002FFEA0, 0x2A, ((void *)D_005EB1B0));
        func_00305EC0(&func_002FEB00, 0x2B, ((void *)D_005EB1E0));
    }
    return 1;
}
