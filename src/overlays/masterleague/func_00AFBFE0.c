/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 reserved00[0x1364];
    u8 count, activeCount;
} LeagueTeams;
typedef struct {
    u8 reserved00[0x24];
    unsigned char : 5;
    unsigned char setup : 1;
    unsigned char : 2;
    unsigned char : 3;
    unsigned char enabled : 1;
    unsigned char pending : 1;
} LeagueDefaults;
extern LeagueTeams *func_002293F0(void);
extern LeagueDefaults *D_003E77B0;
extern void func_002387A0(s32, s32), func_00238740(s32, u8), func_002386F0(s32, s32),
    func_00239040(s32, s32, s32);
extern void func_00AFBB40(void), func_00AFB8C0(void), func_0099AF70(void);
void func_00AFBFE0(void) {
    s32 i;
    LeagueTeams *teams = func_002293F0();
    if (teams) {
        teams->count = 113;
        teams->activeCount = teams->count;
    }
    func_002387A0(0, 1);
    func_002387A0(1, 1);
    func_002387A0(2, 1);
    func_002387A0(3, 1);
    func_002387A0(4, 1);
    func_002387A0(5, 4);
    func_002387A0(6, 4);
    func_002387A0(7, 1);
    func_00238740(0, 0x10);
    func_00238740(1, 0x10);
    func_00238740(2, 0x10);
    func_00238740(3, 0x10);
    func_00238740(4, 8);
    func_00238740(5, 4);
    func_00238740(6, 4);
    func_00238740(7, 4);
    func_00238740(8, 4);
    func_00238740(9, 4);
    func_00238740(0xA, 4);
    func_00238740(0xB, 4);
    func_00238740(0xC, 4);
    func_00238740(0xD, 9);
    func_002386F0(0, 2);
    func_002386F0(1, 2);
    func_002386F0(2, 2);
    func_002386F0(3, 2);
    func_002386F0(4, 2);
    func_002386F0(5, 2);
    func_002386F0(6, 2);
    func_002386F0(7, 2);
    func_002386F0(8, 2);
    func_002386F0(9, 2);
    func_002386F0(0xA, 2);
    func_002386F0(0xB, 2);
    func_002386F0(0xC, 2);
    func_002386F0(0xD, 1);
    func_00AFBB40();
    func_00AFB8C0();
    i = 0;
    do {
        func_00239040(0x10, 0, 1);
        i += 1;
    } while (i < 4);
    func_00239040(8, 0, 1);
    func_00239040(0x10, 0, 1);
    func_00239040(8, 0, 1);
    func_0099AF70();
    D_003E77B0->setup = 1;
    D_003E77B0->enabled = 1;
    D_003E77B0->pending = 0;
}
