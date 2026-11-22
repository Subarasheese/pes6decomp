/* compiler: ee-gcc-2.9-G0 */
#include "types.h"
extern s32 D_005BD300, D_005BD310, D_011DD7F8;
extern const char D_005FC110[], D_005FC120[];
extern u8 D_011DD7B8[];
extern s32 func_001A1E58(const char *, void *);
extern void func_0019AF60(void);
void func_001424F8(void) {
    if (D_005BD300 == 1)
        D_011DD7F8 = func_001A1E58(D_005FC110, D_011DD7B8);
    else
        D_011DD7F8 = func_001A1E58(D_005FC120, D_011DD7B8);
    D_005BD310 = 1;
    func_0019AF60();
}