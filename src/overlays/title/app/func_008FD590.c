/* compiler: ee-gcc-2.9-as210-G0 */
/* Adapted from ico/sce/libmpeg/pack.c. See LICENSES/ico-MIT.txt. */
#include "types.h"
typedef struct {
    u64 id, mask;
} StrDesc;
extern StrDesc D_00901800[10];
int func_008FD590(int *type, int *num, unsigned long long id) {
    StrDesc *p = D_00901800;
    unsigned int i;
    int found = 0;

    for (i = 0; i < 10 && found == 0; i++) {
        unsigned long long m = p->mask;
        unsigned long long k;

        switch (m) {
        case 0xFFFFFFFFFFULL:
            m = id & 0xFFFFFF0000ULL;
            if (m == p->id) {
                *type = i;
                *num = id & 0xFFFF;
                found = 1;
            }
            break;
        case 0xFFFF000000ULL:
            switch (p->id) {
            case 0xBD20000000ULL:
                m = id & 0xFFE0000000ULL;
                k = 0x1F;
                break;
            case 0xBD80000000ULL:
            case 0xBD88000000ULL:
            case 0xBD90000000ULL:
            case 0xBDA0000000ULL:
                m = id & 0xFFF8000000ULL;
                k = 7;
                break;
            default:
                m = id & 0xFFFF000000ULL;
                k = 0;
                break;
            }
            if (m == p->id) {
                *type = i;
                *num = (id >> 24) & k;
                found = 1;
            }
            break;
        case 0xFF00000000ULL:
            if (p->id == 0xE000000000ULL) {
                m = id & 0xF000000000ULL;
                k = 0xF;
            } else if (p->id == 0xC000000000ULL) {
                m = id & 0xE000000000ULL;
                k = 0x1F;
            } else {
                m = id & m;
                k = 0;
            }
            if (m == p->id) {
                *type = i;
                *num = (id >> 32) & k;
                found = 1;
            }
            break;
        }
        p++;
    }
    return found;
}
