/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_001540E0(s32);
extern void func_0017E120(s32);
extern void func_0017E150(s32);
extern s32 func_001BE5B0(s32);
extern s32 func_002646D0(s32);
extern void func_00264790(void *, u8);
extern void func_002648E0(s32);
extern void func_002648F0(s32);
extern void Pes6HeapZone_Open(s32);
extern s32 Pes6HeapZone_Close(s32);
extern void func_002D49B0(s32);
extern void func_00342160(s32);
extern void func_00804190(void *);
extern void func_00804280(s32);
extern void func_00804460(void *);
extern void func_00804620(void *);
extern void func_00804700(s32);
extern void func_00804800(s32);
extern void func_00B29E80(s32);
extern void func_00BA18D0(void *);
extern void func_00C71EC0(void);
extern void func_00C71F40(void);
extern void func_00C72150(s32, s32);
extern void func_00C82290(void);
extern s32 func_00C8AA10(s32);
extern s32 func_00CD4060(s32, s32);
extern s32 func_00CD4CB0(s32, s32);
extern s32 func_00CD7A00(s32);
extern void func_00CD7D40(s32);
extern void func_00CD7E20(s32);
extern void func_00CE4650(void);

extern char Pes6MatchPlayers[];
extern char D_0059237C[];
extern char D_0059237D[];

s32 func_00803E30(s32 arg0) {
    s32 var_s0;
    u32 temp_v0;

    var_s0 = 0;
    func_002648F0(arg0);
    temp_v0 = func_002646D0(arg0) & 0xFF;
    switch (temp_v0) {
    case 0:
        func_00804800(arg0);
        break;
    case 1:
        func_00804700(arg0);
        break;
    case 2:
        func_00B29E80(4);
        func_00342160(1);
        (*(s8 *)D_0059237C) = 0;
        (*(s8 *)D_0059237D) = 1;
        func_00C71EC0();
        func_00C72150(1, 1);
        func_00264790((void *) arg0, 3U);
        break;
    case 3:
        Pes6HeapZone_Close(0xA);
        func_00264790((void *) arg0, 4U);
        break;
    case 4:
        if (func_00CD4CB0(arg0, 8) != 0) {
            func_00264790((void *) arg0, 5U);
        }
        break;
    case 5:
        func_00804620((void *) arg0);
        break;
    case 6:
        func_00804460((void *) arg0);
        break;
    case 7:
        func_0017E150(0);
        func_00264790((void *) arg0, 8U);
        break;
    case 8:
        func_00CD4060(arg0, 8);
        func_00264790((void *) arg0, 9U);
        break;
    case 9:
        if (func_001540E0(0xA) == 0) {
            Pes6HeapZone_Open(0xA);
        }
        func_00264790((void *) arg0, 0xAU);
        break;
    case 10:
        func_00804280(arg0);
        break;
    case 11:
        Pes6HeapZone_Close(0xA);
        func_00264790((void *) arg0, 0xCU);
        break;
    case 12:
        if (func_00CD4CB0(arg0, 8) != 0) {
            func_00264790((void *) arg0, 0xDU);
        }
        break;
    case 13:
        func_0017E150(1);
        func_00264790((void *) arg0, 0xEU);
        break;
    case 14:
        func_00804190((void *) arg0);
        break;
    case 15:
        if (func_001BE5B0(0) != 0) {
            func_00264790((void *) arg0, 0x10U);
        }
        break;
    case 16:
        func_00CD4060(arg0, 8);
        func_00264790((void *) arg0, 0x11U);
        break;
    case 17:
        if (func_001540E0(0xA) == 0) {
            Pes6HeapZone_Open(0xA);
        }
        func_00264790((void *) arg0, 0x12U);
        break;
    case 18:
        func_00CE4650();
        func_00264790((void *) arg0, 0x13U);
        break;
    case 19:
        func_00B29E80(2);
        func_0017E120(0);
        func_00C8AA10(0);
        func_00C82290();
        (*(s8 *)D_0059237C) = 1;
        (*(s8 *)D_0059237D) = 0;
        func_00C71F40();
        func_00C72150(1, 0);
        func_002D49B0(0);
        func_00CD7A00(0);
        func_00264790((void *) arg0, 0x14U);
        break;
    case 20:
        func_00BA18D0(((void *)Pes6MatchPlayers));
        func_00264790((void *) arg0, 0x15U);
        break;
    case 21:
        var_s0 = 1;
        break;
    case 22:
        func_00CD7E20(arg0);
        break;
    case 23:
        func_00CD7D40(arg0);
        break;
    }
    func_002648E0(arg0);
    return var_s0;
}
