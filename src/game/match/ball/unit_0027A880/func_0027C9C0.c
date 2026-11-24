/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    s32 id;
    void *allocation;
    s32 payload[140];
} MatchResourceSlot;
extern MatchResourceSlot D_0059FBF0[];
extern void func_002A6D80(u32 index, s32 value);
void func_0027C9C0(s32 first, s32 second) {
    MatchResourceSlot saved;
    saved = D_0059FBF0[first];
    D_0059FBF0[first] = D_0059FBF0[second];
    D_0059FBF0[second] = saved;
    switch (first) {
    case 4:
    case 5:
    case 6:
        func_002A6D80(1, (s32)D_0059FBF0[first].payload);
        break;
    }
}
