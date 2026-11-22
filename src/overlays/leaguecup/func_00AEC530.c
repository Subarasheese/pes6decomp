/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    s32 first, second, third;
} LeagueCommand;
extern s32 func_00B10D20(void);
extern void func_001BC300(void), func_001BC3D0(s32, s32, s32, s32);
void func_00AEC530(void) {
    LeagueCommand commands[] = {
        {5, 0, 0xaeb9c0}, {6, 0, 0xaeb970}, {3, 1, 0xaeb890}, {2, 1, 0xaeb7b0}};
    u32 i;
    if (!func_00B10D20()) {
        return;
    }
    func_001BC300();
    for (i = 0; i < 4; i++)
        func_001BC3D0(0, commands[i].first, commands[i].second, commands[i].third);
}
