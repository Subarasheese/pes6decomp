/* compiler: mwcc-3.0.1b151 */
#include "types.h"

typedef struct {
    u8 flags;
    u8 option[6];
} MatchSideOptions;
extern MatchSideOptions D_005E2F50[];
extern void *func_001C48E8(void *, s32, s32);
static inline MatchSideOptions *getSideOptions(s32 side) {
    if (side < 0 || side >= 2)
        return 0;
    return D_005E2F50 + side;
}
static inline void setSideFlag(s32 side, u8 value) {
    MatchSideOptions *rec = getSideOptions(side);
    if (rec) {
        rec->flags &= 0xf8;
        rec->flags |= value;
    }
}
static inline void setSideOption(s32 side, s32 index, u8 value) {
    MatchSideOptions *rec = getSideOptions(side);
    if (rec)
        rec->option[index] = value;
}
void func_002B8FA0(s32 side) {
    MatchSideOptions *rec = getSideOptions(side);
    if (rec) {
        func_001C48E8(rec, 0, sizeof(*rec));
        setSideFlag(side, 3);
        setSideOption(side, 0, 1);
        setSideOption(side, 1, 1);
        setSideOption(side, 2, 1);
        setSideOption(side, 3, 0);
        setSideOption(side, 4, 0xff);
        setSideOption(side, 5, 0xff);
    }
}
