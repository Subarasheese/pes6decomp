/* compiler: ee-gcc-3.2-Os-G0 */
#include "types.h"
extern int D_00C47A04;
extern u8 D_00CDCCC0[0xa000];
extern void *func_00C15170(void *, int, int);
int func_00C14078(void) {
    D_00C47A04 = 0;
    func_00C15170(D_00CDCCC0, 0, sizeof(D_00CDCCC0));
    return 0x1201;
}
