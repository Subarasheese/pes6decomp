/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 reserved00[0x78], action, reserved79[7];
    u16 first;
    u8 reserved82[10];
    u16 second;
} CupTeamSelection;
extern CupTeamSelection *func_00B155F0(void);
extern s32 func_009BD2B0(void);
extern void func_009BD9B0(s32 state);
extern void func_009BCFA0(s32 row, s32 side);
extern void SD_call(s32 sound);

s32 func_00B14F90(void) {
    CupTeamSelection *p = func_00B155F0();
    if (!p)
        return 1;
    switch (p->action) {
    case 0:
        if (func_009BD2B0() == 1) {
            p->action = 1;
            func_009BD9B0(1);
            if (!p->first)
                func_009BCFA0(0, 0);
            if (!p->second)
                func_009BCFA0(0, 1);
        }
        break;
    case 2:
        SD_call(0x84008401);
        return 1;
    }
    return 0;
}
