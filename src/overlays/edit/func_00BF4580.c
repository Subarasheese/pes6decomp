/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u16 text[0x146c / sizeof(u16)];
} EditNameBlock;
extern EditNameBlock D_00CE8E20[];
extern u8 D_00CE6620[];
extern u8 *func_001F85A0(u16 *, u8 *);
u8 *func_00BF4580(s32 team, s32 entry) {
    u16 *names = D_00CE8E20[team].text;
    func_001F85A0(&names[entry * 0x44], D_00CE6620);
    return D_00CE6620;
}
