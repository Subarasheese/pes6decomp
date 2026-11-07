/* compiler: ee-gcc-2.96 */
/* C runtime code; source adapted from crashwoc-decomp-ps2 (src/sdk/newlib/libc/stdlib/mallocr_204.c). */
typedef unsigned int size_t;
struct _reent;
struct malloc_chunk {
    size_t prev_size;
    size_t size;
    struct malloc_chunk *fd;
    struct malloc_chunk *bk;
};
typedef struct malloc_chunk *mchunkptr;
typedef struct malloc_chunk *mbinptr;
extern mbinptr __malloc_av_[128 * 2 + 2];
extern void *memcpy(void *dest, const void *src, size_t n);
extern void __malloc_lock(struct _reent *reent_ptr);
extern void __malloc_unlock(struct _reent *reent_ptr);
extern void *_malloc_r(struct _reent *reent_ptr, size_t bytes);
extern void _free_r(struct _reent *reent_ptr, void *mem);
void *_realloc_r(struct _reent *reent_ptr, void *oldmem, size_t bytes)
{
    size_t nb;
    mchunkptr oldp;
    size_t oldsize;
    mchunkptr newp;
    size_t newsize;
    void *newmem;
    mchunkptr next;
    size_t nextsize;
    mchunkptr prev;
    size_t prevsize;
    mchunkptr remainder;
    size_t remainder_size;
    mchunkptr bck;
    mchunkptr fwd;
    if (oldmem == 0) {
        return _malloc_r(reent_ptr, bytes);
    }
    __malloc_lock(reent_ptr);
    newp = oldp = ((mchunkptr)((char *)(oldmem) - 2 * (sizeof(size_t))));
    newsize = oldsize = ((oldp)->size & ~((0x1 | 0x2)));
    nb = (((unsigned long)((bytes) + ((sizeof(size_t)) + (16 - 1))) < (unsigned long)((sizeof(struct malloc_chunk)) + (16 - 1))) ? (sizeof(struct malloc_chunk)) : (((bytes) + ((sizeof(size_t)) + (16 - 1))) & ~((16 - 1))));
    if ((long)(oldsize) < (long)(nb)) {
        next = ((mchunkptr)(((char *)(oldp)) + (oldsize)));
        if (next == (((mbinptr)((char *)&(__malloc_av_[2 * (0) + 2]) - 2 * (sizeof(size_t))))->fd) || !((((mchunkptr)(((char *)(next)) + ((next)->size & ~0x1)))->size) & 0x1)) {
            nextsize = ((next)->size & ~((0x1 | 0x2)));
            if (next == (((mbinptr)((char *)&(__malloc_av_[2 * (0) + 2]) - 2 * (sizeof(size_t))))->fd)) {
                if ((long)(nextsize + newsize) >= (long)(nb + (sizeof(struct malloc_chunk)))) {
                    newsize += nextsize;
                    (((mbinptr)((char *)&(__malloc_av_[2 * (0) + 2]) - 2 * (sizeof(size_t))))->fd) = ((mchunkptr)(((char *)(oldp)) + (nb)));
                    (((((mbinptr)((char *)&(__malloc_av_[2 * (0) + 2]) - 2 * (sizeof(size_t))))->fd))->size = ((newsize - nb) | 0x1));
                    ((oldp)->size = (((oldp)->size & 0x1) | (nb)));
                    __malloc_unlock(reent_ptr);
                    return ((void *)&(oldp)->fd);
                }
            } else if (((long)(nextsize + newsize) >= (long)(nb))) {
                { bck = next->bk; fwd = next->fd; fwd->bk = bck; bck->fd = fwd; };
                newsize += nextsize;
                goto split;
            }
        } else {
            next = 0;
            nextsize = 0;
        }
        if (!((oldp)->size & 0x1)) {
            prev = ((mchunkptr)(((char *)(oldp)) - ((oldp)->prev_size)));
            prevsize = ((prev)->size & ~((0x1 | 0x2)));
            if (next != 0) {
                if (next == (((mbinptr)((char *)&(__malloc_av_[2 * (0) + 2]) - 2 * (sizeof(size_t))))->fd)) {
                    if ((long)(nextsize + prevsize + newsize) >= (long)(nb + (sizeof(struct malloc_chunk)))) {
                        { bck = prev->bk; fwd = prev->fd; fwd->bk = bck; bck->fd = fwd; };
                        newp = prev;
                        newsize += prevsize + nextsize;
                        newmem = ((void *)&(newp)->fd);
                        do { size_t mcsz = (oldsize - (sizeof(size_t))); if (mcsz <= 9 * sizeof(mcsz)) { size_t *mcsrc = (size_t *)(oldmem); size_t *mcdst = (size_t *)(newmem); if (mcsz >= 5 * sizeof(mcsz)) { *mcdst++ = *mcsrc++; *mcdst++ = *mcsrc++; if (mcsz >= 7 * sizeof(mcsz)) { *mcdst++ = *mcsrc++; *mcdst++ = *mcsrc++; if (mcsz >= 9 * sizeof(mcsz)) { *mcdst++ = *mcsrc++; *mcdst++ = *mcsrc++; } } } *mcdst++ = *mcsrc++; *mcdst++ = *mcsrc++; *mcdst = *mcsrc; } else { memcpy(newmem, oldmem, mcsz); } } while (0);
                        (((mbinptr)((char *)&(__malloc_av_[2 * (0) + 2]) - 2 * (sizeof(size_t))))->fd) = ((mchunkptr)(((char *)(newp)) + (nb)));
                        (((((mbinptr)((char *)&(__malloc_av_[2 * (0) + 2]) - 2 * (sizeof(size_t))))->fd))->size = ((newsize - nb) | 0x1));
                        ((newp)->size = (((newp)->size & 0x1) | (nb)));
                        __malloc_unlock(reent_ptr);
                        return newmem;
                    }
                } else if (((long)(nextsize + prevsize + newsize) >= (long)(nb))) {
                    { bck = next->bk; fwd = next->fd; fwd->bk = bck; bck->fd = fwd; };
                    { bck = prev->bk; fwd = prev->fd; fwd->bk = bck; bck->fd = fwd; };
                    newp = prev;
                    newsize += nextsize + prevsize;
                    newmem = ((void *)&(newp)->fd);
                    do { size_t mcsz = (oldsize - (sizeof(size_t))); if (mcsz <= 9 * sizeof(mcsz)) { size_t *mcsrc = (size_t *)(oldmem); size_t *mcdst = (size_t *)(newmem); if (mcsz >= 5 * sizeof(mcsz)) { *mcdst++ = *mcsrc++; *mcdst++ = *mcsrc++; if (mcsz >= 7 * sizeof(mcsz)) { *mcdst++ = *mcsrc++; *mcdst++ = *mcsrc++; if (mcsz >= 9 * sizeof(mcsz)) { *mcdst++ = *mcsrc++; *mcdst++ = *mcsrc++; } } } *mcdst++ = *mcsrc++; *mcdst++ = *mcsrc++; *mcdst = *mcsrc; } else { memcpy(newmem, oldmem, mcsz); } } while (0);
                    goto split;
                }
            }
            if (prev != 0 && (long)(prevsize + newsize) >= (long)nb) {
                { bck = prev->bk; fwd = prev->fd; fwd->bk = bck; bck->fd = fwd; };
                newp = prev;
                newsize += prevsize;
                newmem = ((void *)&(newp)->fd);
                do { size_t mcsz = (oldsize - (sizeof(size_t))); if (mcsz <= 9 * sizeof(mcsz)) { size_t *mcsrc = (size_t *)(oldmem); size_t *mcdst = (size_t *)(newmem); if (mcsz >= 5 * sizeof(mcsz)) { *mcdst++ = *mcsrc++; *mcdst++ = *mcsrc++; if (mcsz >= 7 * sizeof(mcsz)) { *mcdst++ = *mcsrc++; *mcdst++ = *mcsrc++; if (mcsz >= 9 * sizeof(mcsz)) { *mcdst++ = *mcsrc++; *mcdst++ = *mcsrc++; } } } *mcdst++ = *mcsrc++; *mcdst++ = *mcsrc++; *mcdst = *mcsrc; } else { memcpy(newmem, oldmem, mcsz); } } while (0);
                goto split;
            }
        }
        newmem = _malloc_r(reent_ptr, bytes);
        if (newmem == 0) {
            __malloc_unlock(reent_ptr);
            return 0;
        }
        if ((newp = ((mchunkptr)((char *)(newmem) - 2 * (sizeof(size_t))))) == ((mchunkptr)(((char *)(oldp)) + ((oldp)->size & ~0x1)))) {
            newsize += ((newp)->size & ~((0x1 | 0x2)));
            newp = oldp;
            goto split;
        }
        do { size_t mcsz = (oldsize - (sizeof(size_t))); if (mcsz <= 9 * sizeof(mcsz)) { size_t *mcsrc = (size_t *)(oldmem); size_t *mcdst = (size_t *)(newmem); if (mcsz >= 5 * sizeof(mcsz)) { *mcdst++ = *mcsrc++; *mcdst++ = *mcsrc++; if (mcsz >= 7 * sizeof(mcsz)) { *mcdst++ = *mcsrc++; *mcdst++ = *mcsrc++; if (mcsz >= 9 * sizeof(mcsz)) { *mcdst++ = *mcsrc++; *mcdst++ = *mcsrc++; } } } *mcdst++ = *mcsrc++; *mcdst++ = *mcsrc++; *mcdst = *mcsrc; } else { memcpy(newmem, oldmem, mcsz); } } while (0);
        _free_r(reent_ptr, oldmem);
        __malloc_unlock(reent_ptr);
        return newmem;
    }
split:
    remainder_size = newsize - nb;
    if (remainder_size >= (long)(sizeof(struct malloc_chunk))) {
        remainder = ((mchunkptr)(((char *)(newp)) + (nb)));
        ((newp)->size = (((newp)->size & 0x1) | (nb)));
        ((remainder)->size = (remainder_size | 0x1));
        (((mchunkptr)(((char *)(remainder)) + (remainder_size)))->size |= 0x1);
        _free_r(reent_ptr, ((void *)&(remainder)->fd));
    } else {
        ((newp)->size = (((newp)->size & 0x1) | (newsize)));
        (((mchunkptr)(((char *)(newp)) + (newsize)))->size |= 0x1);
    }
    __malloc_unlock(reent_ptr);
    return ((void *)&(newp)->fd);
}