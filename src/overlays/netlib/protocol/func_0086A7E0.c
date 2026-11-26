/* compiler: mwcc-3.0.1b151-O3 */
#include "types.h"
typedef struct {
    s32 id;
    u8 reserved04[0x31];
    u8 order;
    u8 reserved36[0x80];
    u8 flag, reservedB7;
} NetlibOrderedMember;
s32 func_0086A7E0(const void *first, const void *second) {
    const NetlibOrderedMember *left = first, *right = second;
    if (!left || !right)
        return 0;
    if (left->id == 0) {
        if (right->id == 0)
            return 0;
        return 1;
    }
    if (right->id == 0) {
        if (left->id == 0)
            return 0;
        return -1;
    }
    if (left->flag != 0)
        return -1;
    if (right->flag != 0)
        return 1;
    {
        if (left->order < right->order)
            return -1;
        if (right->order < left->order)
            return 1;
        return 0;
    }
}
