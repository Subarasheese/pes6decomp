/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 reserved00[0x2c];
    u8 first, second;
} EntrySelectionPair;
extern EntrySelectionPair *D_003E77B0;
s32 func_00325B90(s32 *out) {
    s32 first = D_003E77B0->first, second = D_003E77B0->second;
    if ((first == 0 && second == 1) || (first == 1 && second == 2))
        *out = 0;
    else if ((first == 2 && second == 3) || (first == 3 && second == 4))
        *out = 1;
    else
        *out = 255;
    return 1;
}
