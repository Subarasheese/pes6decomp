/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_pad_assignment.h"

extern s32 Pes6SceneStack[];
extern void func_001B8DC0(void);
extern void func_0023F3A0(void);
extern void func_00363E10(void *);
extern void func_002DF960(void *);
extern void func_0023E0E0(s32);
extern void func_002685F0(s32);
extern void func_002405A0(void *);
extern void func_008B3040(void);
extern void func_0023B040(void);
extern s32 func_008B32E0(void *);
extern s32 func_008B2E20(void *);
extern void *D_0053CD50[];
extern void *D_0053CB90[];
extern s32 *D_003E9B14;

void func_0024C1C0(void) {
    s32 i;
    if (Pes6SceneStack[0] != 4) {
        func_001B8DC0();
        if (Pes6SceneStack[0] != 5)
            func_0023F3A0();
    }
    for (i = 0; i < MATCH_PAD_COUNT; i++) {
        func_00363E10(D_0053CD50[i]);
        func_002DF960(D_0053CB90[i]);
    }
    if (Pes6SceneStack[0] != 4)
        func_0023E0E0(31);
    func_002685F0(0);
    for (i = 0; i < MATCH_PAD_TEXT_COUNT; i++)
        D_003E9B14[i] = func_008B2E20((void *)D_003E9B14[i]);
    for (i = 0; i < MATCH_PAD_PANEL_COUNT; i++)
        D_003E9B18->handles[i] = func_008B32E0((void *)D_003E9B18->handles[i]);
    func_002405A0(&D_003E9B18);
    func_002405A0(&D_003E9B14);
    func_008B3040();
    func_0023B040();
}
