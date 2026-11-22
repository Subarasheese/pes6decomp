/* compiler: ee-gcc-2.96-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/sdk2c.c (func_004023E8). See THIRD_PARTY.md. */
#include "types.h"
typedef struct Stream Stream;
typedef struct StreamVT {
    char pad[0x24];
    int (*seek)(Stream *, int);
} StreamVT;
struct Stream {
    StreamVT *vt;
};
extern void func_0015B478(void *);
extern char D_003C8D78[];
typedef struct File {
    char pad[0x14];
    Stream *s;
    char pad2[0x26];
    short blocks;
} File;

int func_00167068(File *f) {
    if (f == 0) {
        func_0015B478(D_003C8D78);
        return -1;
    }
    if (f->s != 0) {
        if (f->s->vt->seek(f->s, 1) < (f->blocks << 11))
            return 0;
        return 1;
    }
    return 0;
}
