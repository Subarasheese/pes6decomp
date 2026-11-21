/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 D_00CFF3EC[];
extern s32 D_00CFF400[];
extern s8 D_00CFE1F8[];
extern void func_001DF460(void *, void *);

void func_00CE4E50(s32 arg0) {
    func_001DF460(*(void **)((D_00CFF400[0] + (arg0 << 2))), D_00CFE1F8);
    func_001DF460(*(void **)((D_00CFF3EC[0] + (arg0 << 2))), D_00CFE1F8);
}
