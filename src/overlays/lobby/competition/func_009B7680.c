/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern int D_00A7DC08[];

u32 func_009B7680(void) {
    if (D_00A7DC08[0] == 0) {
        return 0;
    }
    return *(u32 *)(D_00A7DC08[0] + 0x2e4);
}
