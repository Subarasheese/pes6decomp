/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_001540B0(s32, s32);
extern void func_00182AE0(s32);
extern void func_0022DA50(void);
extern s32 func_0026C760(void);
extern s32 Pes6HeapZone_Close(s32);
extern s32 func_00366290(void);
extern s32 func_00814FC0(s32 *);
extern s32 func_0081D240(s32);
extern s32 func_0084A750(void);
extern s32 func_00884030(void);
extern void func_008F6080(void);
extern s32 func_008F63D0(void);
extern void func_008FF570(void);
extern void func_009112B0(void);
extern void func_0091D4D0(void);
extern void func_00C913F0(s32);

extern char D_0058D7A8[];
extern char D_0058D7AA[];
extern char D_00591BB7[];
extern char D_0091ED80[];
extern char D_00920F38[];
extern char D_00921DC4[];

s32 func_008FF6C0(void) {
    func_001540B0((*(s32 *)D_0091ED80), 0);
    if ((*(s8 *)D_0058D7AA) != 0) {
        if (((*(s8 *)D_0058D7A8) == 0) && (func_00884030() == 0)) {
            func_0084A750();
        }
        if (func_0026C760() != 0) {
            func_0091D4D0();
        }
        if (!(func_00814FC0(((void *)D_00920F38)) != 0)) {
            return 0;
        }
        func_0081D240(0);
        goto finish;
        return 0;
    }
finish:
    if (func_0026C760() != 0) {
        func_0022DA50();
        func_00C913F0(0);
    }
    func_008F6080();
    if (func_00366290() == 0) {
        func_008F63D0();
    } else if ((func_0026C760() == 0) || ((*(s32 *)D_00921DC4) == 1)) {
        func_008F63D0();
    }
    func_009112B0();
    if ((*(u8 *)D_00591BB7) == 1) {
        func_00182AE0(1);
    }
    func_008FF570();
    Pes6HeapZone_Close(0xB);
    return 1;
}
