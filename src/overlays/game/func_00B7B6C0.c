/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_player.h"
typedef struct {
    u8 reserved00[0x103], pending, state;
} PlayerRestart;
extern Pes6MatchPlayer D_0058E7F0[];
extern u8 D_00591C09[], D_00CBCC68[], D_00CBCC60[], D_00CBCC61[], D_00CBCC62[], D_00CBBE39[];
extern s32 D_00CBCC64[], D_00CBCC6C[];
extern void func_0027AA00(s32), func_00BF4000(s32);
extern s32 func_00B29CB0(void), func_00C5A620(u8 id), func_00C5A6D0(u8 id);
extern void func_001AFBF0(Pes6PlayerFieldState *, s32), func_001B43B0(Pes6PlayerFieldState *, s32);
void func_00B7B6C0(void) {
    Pes6MatchPlayer *p;
    s32 i;
    func_0027AA00(0);
    for (p = D_0058E7F0, i = 0; i < 22; ++i, ++p)
        ((PlayerRestart *)p)->pending = 0;
    D_00CBCC68[0] = 0x80;
    D_00CBCC60[0] = D_00CBCC68[0];
    D_00CBCC62[0] = 0;
    D_00CBCC61[0] = 0;
    D_00CBCC64[0] = 0;
    p = Pes6MatchPlayers;
    for (i = 0; i < 23; ++i, ++p)
        ((PlayerRestart *)p)->state = 0;
    D_00CBCC6C[0] = 0;
    if (D_00591C09[0] != 5 || !func_00B29CB0()) {
        p = D_0058E7F0;
        for (i = 0; i < 22; ++i, ++p) {
            s32 first = func_00C5A620(p->id);
            s32 second = func_00C5A6D0(p->id);
            func_001AFBF0(p->info->fieldState, first);
            func_001B43B0(p->info->fieldState, second);
        }
    }
    func_00BF4000(0);
    D_00CBBE39[0] = 0;
}
