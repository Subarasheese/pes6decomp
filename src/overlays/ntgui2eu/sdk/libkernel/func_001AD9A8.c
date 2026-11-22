/* compiler: ee-gcc-2.96-G0-g */
/* OpenRAC/rac-deadlocked-decomp src/core/00126170.c (func_00126170). See THIRD_PARTY.md. */

typedef unsigned int u32;
typedef unsigned long u64;
typedef int s32;
typedef struct mc {
    u32 prev_size;
    u32 size;
    struct mc *fd;
    struct mc *bk;
} *mchunkptr;
extern void func_001AE898(s32);
extern void func_001AE918(s32);
extern void *func_001ADE68(s32, u32);
extern void func_001B2EB8(s32, void *);
extern u64 func_001AA7E8(u64, u64);

void *func_001AD9A8(s32 reent_ptr, u32 alignment, u32 bytes) {
    u32 nb;
    char *m;
    mchunkptr p;
    char *brk;
    mchunkptr newp;
    u32 newsize;
    u32 leadsize;
    mchunkptr remainder;
    long remainder_size;
    if (alignment <= 16) {
        return func_001ADE68(reent_ptr, bytes);
    }
    if (alignment < 16) {
        alignment = 16;
    }
    nb = ((bytes + 19) < 31) ? (16) : ((bytes + 19) & (~15));
    m = (char *)func_001ADE68(reent_ptr, (nb + alignment) + 16);
    if (m == 0) {
        return 0;
    }
    func_001AE898(reent_ptr);
    p = (mchunkptr)(m - 8);
    if (func_001AA7E8((u64)m, alignment) == 0) {
    } else {
        brk = ((char *)(((u32)((m + alignment) - 1)) & (-((s32)alignment)))) - 8;
        if (((long)(brk - ((char *)p))) < 16) {
            brk = brk + alignment;
        }
        newp = (mchunkptr)brk;
        leadsize = brk - ((char *)p);
        newsize = (p->size & (~3)) - leadsize;
        newp->size = newsize | 1;
        ((mchunkptr)(((char *)newp) + newsize))->size |= 1;
        p->size = (p->size & 1) | leadsize;
        func_001B2EB8(reent_ptr, ((char *)p) + 8);
        p = newp;
    }
    remainder_size = ((p->size & (~3)) < nb) ? (-((long)((u32)(nb - (p->size & (~3))))))
                                             : ((long)((u32)((p->size & (~3)) - nb)));
    if (remainder_size >= 16) {
        remainder = (mchunkptr)(((char *)p) + nb);
        remainder->size = remainder_size | 1;
        p->size = (p->size & 1) | nb;
        func_001B2EB8(reent_ptr, ((char *)remainder) + 8);
    }
    func_001AE918(reent_ptr);
    return ((char *)p) + 8;
}
