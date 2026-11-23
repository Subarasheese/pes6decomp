/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern u8 *D_00A7DC38[];
int func_009B9E20(void) {
    int result;
    if (D_00A7DC38[0] == 0) {
        result = 0;
    } else if ((*D_00A7DC38[0]) < 2) {
        result = 0;
    } else {
        result = 1;
    }
    return result;
}
