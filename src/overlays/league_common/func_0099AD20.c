/* compiler: mwcc-3.0.1b198 */
#pragma opt_common_subs off
#include "types.h"
typedef struct {
    u8 reserved00[7], mode;
    u32 flags;
} LeagueSaveOptions;
extern u8 func_00229970(void);
extern u8 *func_00229DF0(void);
static inline void setLeagueOption(u32 flag) {
    LeagueSaveOptions *options = (LeagueSaveOptions *)func_00229DF0();
    if (options)
        options->flags |= flag;
}
static inline void clearLeagueOption(u32 flag) {
    LeagueSaveOptions *options = (LeagueSaveOptions *)func_00229DF0();
    if (options)
        options->flags &= ~flag;
}
void func_0099AD20(void) {
    s32 mode = func_00229970();
    switch (mode) {
    case 1:
        clearLeagueOption(0x1);
        clearLeagueOption(0x2);
        setLeagueOption(0x4);
        setLeagueOption(0x8);
        break;
    case 0:
        setLeagueOption(0x1);
        setLeagueOption(0x2);
        clearLeagueOption(0x4);
        clearLeagueOption(0x8);
        break;
    }
    clearLeagueOption(0x40);
    clearLeagueOption(0x80);
    clearLeagueOption(0x100);
    clearLeagueOption(0x200);
    clearLeagueOption(0x20);
    setLeagueOption(0x10);
}
