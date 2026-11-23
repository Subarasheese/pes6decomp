/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 data[0x24];
} MatchPlayerAttributes;
typedef struct {
    u8 reserved00[7], order[11], reserved12[0x8b - 18];
} MatchLineup;
typedef struct {
    u8 reserved00[0x68];
    MatchPlayerAttributes first;
    u8 reserved8C[8];
    MatchPlayerAttributes second;
    u8 reservedB8[0x348 - 0xb8];
} MatchPlayerInfo;
extern MatchPlayerInfo Pes6MatchSquads[][32];
extern MatchLineup D_00591A90[];
extern void *memcpy(void *dest, const void *src, u32 n);
extern void func_0023D190(s8 *dest, MatchPlayerAttributes *eleven);
typedef enum { ORIGINAL_LINEUP, SELECTED_LINEUP } MatchLineupOrder;
typedef enum { SECOND_ATTRIBUTE_SET, FIRST_ATTRIBUTE_SET } MatchAttributeSet;

void func_0023CE80(s8 *dest, s32 side, MatchLineupOrder lineup, MatchAttributeSet kind) {
    MatchPlayerAttributes eleven[11];
    s32 i, index;
    const MatchPlayerAttributes *src;
    for (i = 0; i < 11; i++) {
        switch (lineup) {
        case ORIGINAL_LINEUP:
            index = i;
            break;
        case SELECTED_LINEUP:
            index = D_00591A90[side].order[i];
            break;
        }
        switch (kind) {
        case SECOND_ATTRIBUTE_SET:
            src = &Pes6MatchSquads[side][index].second;
            break;
        case FIRST_ATTRIBUTE_SET:
            src = &Pes6MatchSquads[side][index].first;
            break;
        }
        memcpy(&eleven[i], src, sizeof(MatchPlayerAttributes));
    }
    func_0023D190(dest, eleven);
}
