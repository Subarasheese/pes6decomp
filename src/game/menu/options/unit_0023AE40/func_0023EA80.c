/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_random_settings.h"

extern u8 D_00591BB9[], D_00591BBA[], D_00591C09[], D_00591BCA[], D_00591BB7[],
    Pes6MatchContext_Stadium[], D_00591BCB[], D_00591BCE[];
extern u8 *Pes6OptionData_GetBlock304(void), *Pes6OptionData_GetBlock2CC(void);
extern s32 Pes6Scene_Get(s32), Pes6Settings_Get_B02_b2_w5_2(void), func_00263170(void);
extern u8 func_002623C0(void);
extern s32 func_00351E90(s32);
extern void func_0020B600(s32), func_00245390(void);
static inline s32 competitionBall(void) {
    u8 mode = D_00591C09[0];
    if (mode == 1 || mode == 4 || mode == 2 || mode == 14)
        return 1;
    return 0;
}

void func_0023EA80(void) {
    const u8 *options = Pes6OptionData_GetBlock304();
    D_00591BB9[0] = options[0];
    D_00591BBA[0] = Pes6OptionData_GetBlock2CC()[15];
    if (D_00591C09[0] != 5 && Pes6Scene_Get(0) != 12) {
        if (competitionBall() == 1)
            D_00591BCA[0] = Pes6Settings_Get_B02_b2_w5_2();
        else if (Pes6MatchSettings_RandomFlags.ball == 0)
            D_00591BCA[0] = options[1];
    }
    if (D_00591BB7[0] == 2 && func_00351E90(Pes6MatchContext_Stadium[0]) == 1 &&
        D_00591BCA[0] != 12)
        D_00591BCA[0] = 1;
    func_0020B600(D_00591BCA[0]);
    D_00591BCB[0] = options[2];
    if (D_00591C09[0] == 5) {
        if (func_00263170() != 0)
            D_00591BCE[0] = func_002623C0();
        else
            D_00591BCE[0] = 0;
    } else
        D_00591BCE[0] = options[3];
    func_00245390();
}
