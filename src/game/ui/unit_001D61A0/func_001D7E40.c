/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct Tbl {
    u8 pad[4];
    s32 *entries;
} Tbl;

typedef struct Res {
    u8 pad[0x10];
    Tbl *tbl;
} Res;

typedef struct Obj {
    u8 pad0[0x1C];
    s32 f1C;
    u16 *f20;
    u8 pad24[8];
    Res *res;
    u8 pad30[0x14];
    s32 f44;
    s32 entry;
    s16 f4C;
    s16 f4E;
    u8 pad50[0x56];
    u8 fA6;
    u8 pada7;
    u8 fA8;
} Obj;

extern u16 *func_001D4F70(Res *, s32, s16);
extern void func_001D81D0(Obj *);
extern void func_001D7FA0(Obj *);
extern s32 func_001D5000(Res *resource, s32 group);

static inline void setMode(Obj *sprite, u8 mode) {
    if (sprite)
        sprite->fA8 = mode;
}
static inline void setOption(Obj *sprite, u8 value) {
    if (sprite)
        sprite->pada7 = value;
}
void func_001D7E40(Obj *sprite, s32 group) {
    if (sprite) {
        s32 entry = func_001D5000(sprite->res, group);
        if (entry) {
            s16 index;
            u16 *sequence;
            sprite->f44 = group;
            sprite->entry = entry;
            index = sprite->f4E;
            sequence = func_001D4F70(sprite->res, sprite->f44, index);
            if (sequence) {
                sprite->f4E = index;
                sprite->f20 = sequence;
                sprite->f1C = sprite->res->tbl->entries[*sequence];
                sprite->f4C = 0;
                func_001D81D0(sprite);
                func_001D7FA0(sprite);
                sprite->fA6 = 0xff;
            }
            setMode(sprite, 0);
            setOption(sprite, 0);
            sprite->fA6 = 0xff;
        }
    }
}
