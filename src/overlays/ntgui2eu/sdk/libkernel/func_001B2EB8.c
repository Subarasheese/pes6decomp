/* compiler: ee-gcc-2.96-G0 */
/* C runtime code; source adapted from crashwoc-decomp-ps2 (src/sdk/newlib/libc/stdlib/mallocr_228.c). */
typedef unsigned int size_t;
typedef int ptrdiff_t;
struct _reent;
struct malloc_chunk {
    size_t prev_size;
    size_t size;
    struct malloc_chunk *fd;
    struct malloc_chunk *bk;
};
typedef struct malloc_chunk *mchunkptr;
typedef struct malloc_chunk *mbinptr;
extern mbinptr D_005CC510[128 * 2 + 2];
extern unsigned long D_005CC918;
extern unsigned long D_005CC920;
extern void func_001AE898(struct _reent *reent_ptr);
extern void func_001AE918(struct _reent *reent_ptr);
extern void *_sbrk_r(struct _reent *reent_ptr, ptrdiff_t incr);
int func_001B31B0(struct _reent *reent_ptr, size_t pad);
void func_001B2EB8(struct _reent *reent_ptr, void *mem)
{
    mchunkptr p;
    size_t hd;
    size_t sz;
    int idx;
    mchunkptr next;
    size_t nextsz;
    size_t prevsz;
    mchunkptr bck;
    mchunkptr fwd;
    int islr;
    if (mem == 0) {
        return;
    }
    func_001AE898(reent_ptr);
    p = ((mchunkptr)((char *)(mem) - 2 * (sizeof(size_t))));
    hd = p->size;
    sz = hd & ~0x1;
    next = ((mchunkptr)(((char *)(p)) + (sz)));
    nextsz = ((next)->size & ~((0x1 | 0x2)));
    if (next == (((mbinptr)((char *)&(D_005CC510[2 * (0) + 2]) - 2 * (sizeof(size_t))))->fd)) {
        sz += nextsz;
        if (!(hd & 0x1)) {
            prevsz = p->prev_size;
            p = ((mchunkptr)(((char *)(p)) + (-prevsz)));
            sz += prevsz;
            { bck = p->bk; fwd = p->fd; fwd->bk = bck; bck->fd = fwd; };
        }
        ((p)->size = (sz | 0x1));
        (((mbinptr)((char *)&(D_005CC510[2 * (0) + 2]) - 2 * (sizeof(size_t))))->fd) = p;
        if ((unsigned long)(sz) >= (unsigned long)D_005CC918) {
            func_001B31B0(reent_ptr, D_005CC920);
        }
        func_001AE918(reent_ptr);
        return;
    }
    ((next)->size = (nextsz));
    islr = 0;
    if (!(hd & 0x1)) {
        prevsz = p->prev_size;
        p = ((mchunkptr)(((char *)(p)) + (-prevsz)));
        sz += prevsz;
        if (p->fd == (((mbinptr)((char *)&(D_005CC510[2 * (1) + 2]) - 2 * (sizeof(size_t)))))) {
            islr = 1;
        } else {
            { bck = p->bk; fwd = p->fd; fwd->bk = bck; bck->fd = fwd; };
        }
    }
    if (!((((mchunkptr)(((char *)(next)) + (nextsz)))->size & 0x1))) {
        sz += nextsz;
        if (!islr && next->fd == (((mbinptr)((char *)&(D_005CC510[2 * (1) + 2]) - 2 * (sizeof(size_t)))))) {
            islr = 1;
            { (((mbinptr)((char *)&(D_005CC510[2 * (1) + 2]) - 2 * (sizeof(size_t)))))->fd = (((mbinptr)((char *)&(D_005CC510[2 * (1) + 2]) - 2 * (sizeof(size_t)))))->bk = p; p->fd = p->bk = (((mbinptr)((char *)&(D_005CC510[2 * (1) + 2]) - 2 * (sizeof(size_t))))); };
        } else {
            { bck = next->bk; fwd = next->fd; fwd->bk = bck; bck->fd = fwd; };
        }
    }
    ((p)->size = (sz | 0x1));
    (((mchunkptr)((char *)(p) + (sz)))->prev_size = (sz));
    if (!islr) {
        { if (sz < 512) { idx = (((unsigned long)(sz)) >> 3); ((((mbinptr)((char *)&(D_005CC510[2 * (0) + 2]) - 2 * (sizeof(size_t))))->size) |= ((unsigned long)1 << (idx / 4))); bck = ((mbinptr)((char *)&(D_005CC510[2 * (idx) + 2]) - 2 * (sizeof(size_t)))); fwd = bck->fd; p->bk = bck; p->fd = fwd; fwd->bk = bck->fd = p; } else { idx = (((((unsigned long)(sz)) >> 9) == 0) ? (((unsigned long)(sz)) >> 3) : ((((unsigned long)(sz)) >> 9) <= 4) ? 56 + (((unsigned long)(sz)) >> 6) : ((((unsigned long)(sz)) >> 9) <= 20) ? 91 + (((unsigned long)(sz)) >> 9) : ((((unsigned long)(sz)) >> 9) <= 84) ? 110 + (((unsigned long)(sz)) >> 12) : ((((unsigned long)(sz)) >> 9) <= 340) ? 119 + (((unsigned long)(sz)) >> 15) : ((((unsigned long)(sz)) >> 9) <= 1364) ? 124 + (((unsigned long)(sz)) >> 18) : 126); bck = ((mbinptr)((char *)&(D_005CC510[2 * (idx) + 2]) - 2 * (sizeof(size_t)))); fwd = bck->fd; if (fwd == bck) { ((((mbinptr)((char *)&(D_005CC510[2 * (0) + 2]) - 2 * (sizeof(size_t))))->size) |= ((unsigned long)1 << (idx / 4))); } else { while (fwd != bck && sz < ((fwd)->size & ~((0x1 | 0x2)))) { fwd = fwd->fd; } bck = fwd->bk; } p->bk = bck; p->fd = fwd; fwd->bk = bck->fd = p; } };
    }
    func_001AE918(reent_ptr);
}
int func_001B31B0(struct _reent *reent_ptr, size_t pad);
