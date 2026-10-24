/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern s8 D_003B7210[];
extern void func_002C3B20(f32 *,s32,u8,s32,u8);
typedef struct { f32 first,second; } Pair;
extern f32 func_002C3B10(f32 *);
typedef struct {
    f32 values[2][3][2];
    f32 pair[2];
    s8 keys[12];
    u8 padding[4];
    f32 totals[2];
} Locals;
s32 func_0030F930(s32 *first,s32 *second,s32 selector) {
    Locals locals;
    s8 *source=D_003B7210;
    s8 *destination=locals.keys;
    s32 remaining=6;
    s32 side;
    s32 metric;
    f32 *total;
    u8 *group;
    u8 *write;
    u8 *read;
    u8 *keys;
    s32 result;
    do {
        remaining--;
        destination[0]=source[0];
        destination[1]=source[1];
        source+=2;
        destination+=2;
    } while(remaining>0);
    side=0;
    total=locals.totals;
    group=(u8 *)locals.values;
    keys=(u8 *)&locals.keys[(selector&255)*3];
    do {
        *total=0.0f;
        metric=0;
        write=group;
        read=group;
        do {
            u8 kind=keys[metric];
            if(kind!=8) {
                func_002C3B20(locals.pair,4,side,255,kind);
                *(Pair *)write=*(Pair *)locals.pair;
                *total+=func_002C3B10((f32 *)read);
            }
            metric++;
            write+=8;
            read+=8;
        } while(metric<3);
        side++;
        total++;
        group+=24;
    } while(side<2);
    result=(s32)((100.0f*locals.totals[0])/(locals.totals[0]+locals.totals[1]));
    *first=result;
    *second=100-result;
    return 1;
}
