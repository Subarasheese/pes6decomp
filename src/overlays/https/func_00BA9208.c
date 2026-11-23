/* compiler: ee-gcc-2.9-G0 */
#include "types.h"
typedef struct Bio Bio;
typedef struct BioMethod BioMethod;
extern BioMethod *func_00BA92E0(void);
extern Bio *func_00BA29D8(BioMethod *);
extern int func_00BA91C0(Bio *, const char *, const char *), func_00BA2B20(Bio *);
Bio *func_00BA9208(const char *name, const char *mode) {
    Bio *bio = func_00BA29D8(func_00BA92E0());
    if (bio) {
        if (func_00BA91C0(bio, name, mode) > 0)
            return bio;
        func_00BA2B20(bio);
    }
    return 0;
}
