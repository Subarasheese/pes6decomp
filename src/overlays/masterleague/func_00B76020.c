/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    s32 first, second, third;
} LeagueCommand;
extern s32 func_00B76A10(void);
extern void func_001BC300(void), func_001BC3D0(s32, s32, s32, s32);
void func_00B76020(void) {
    LeagueCommand commands[] = {
        {5, 0, 0xb764f0}, {6, 0, 0xb76450}, {0, 1, 0xb76170}, {1, 1, 0xb76120}};
    u32 i;
    if (!func_00B76A10()) {
        return;
    }
    func_001BC300();
    for (i = 0; i < 4; i++)
        func_001BC3D0(0, commands[i].first, commands[i].second, commands[i].third);
}
