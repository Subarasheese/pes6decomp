/* compiler: mwcc-3.0.1b198-O3 */
#include "types.h"
typedef struct MatchCommandState MatchCommandState;
typedef s32 (*MatchCommandHandler)(MatchCommandState *, u8 *actor);
struct MatchCommandState {
    u32 reserved;
    MatchCommandHandler handler;
    u8 phase;
};
extern s32 func_0034A6C0(MatchCommandState *, u8 *);
s32 func_0034A8A0(MatchCommandState *state, s32 command) {
    switch (command) {
    case 1:
        state->handler = func_0034A6C0;
        state->phase = 0;
        break;
    }
    return 1;
}
