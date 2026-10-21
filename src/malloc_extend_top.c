/* compiler: ee-gcc-2.96-G0 */
/* C runtime code; source adapted from crashwoc-decomp-ps2 (src/sdk/newlib/libc/stdlib/mallocr_196.c). */
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
struct mallinfo {
    int arena;
    int ordblks;
    int smblks;
    int hblks;
    int hblkhd;
    int usmblks;
    int fsmblks;
    int uordblks;
    int fordblks;
    int keepcost;
};
extern mbinptr __malloc_av_[128 * 2 + 2];
extern unsigned long D_00398E38;
extern char *__malloc_sbrk_base;
extern unsigned long D_00398E48;
extern unsigned long D_00398E50;
extern struct mallinfo __malloc_current_mallinfo;
extern void *_sbrk_r(struct _reent *reent_ptr, ptrdiff_t incr);
extern void _free_r(struct _reent *reent_ptr, void *mem);
static void malloc_extend_top(struct _reent *reent_ptr, size_t nb)
{
    char *brk;
    size_t front_misalign;
    size_t correction;
    char *new_brk;
    size_t top_size;
    mchunkptr old_top = (((mbinptr)((char *)&(__malloc_av_[2 * (0) + 2]) - 2 * (sizeof(size_t))))->fd);
    size_t old_top_size = ((old_top)->size & ~((0x1 | 0x2)));
    char *old_end = (char *)(((mchunkptr)(((char *)(old_top)) + (old_top_size))));
    size_t sbrk_size = nb + D_00398E38 + (sizeof(struct malloc_chunk));
    unsigned long pagesz = (4096);
    if (__malloc_sbrk_base != (char *)(-1)) {
        sbrk_size = (sbrk_size + (pagesz - 1)) & ~(pagesz - 1);
    }
    brk = (char *)(_sbrk_r(reent_ptr, (sbrk_size)));
    if (brk == (char *)((-1)) || (brk < old_end && old_top != ((mchunkptr)(((mbinptr)((char *)&(__malloc_av_[2 * (0) + 2]) - 2 * (sizeof(size_t)))))))) {
        return;
    }
    (__malloc_current_mallinfo.arena) += sbrk_size;
    if (brk == old_end) {
        top_size = sbrk_size + old_top_size;
        (((((mbinptr)((char *)&(__malloc_av_[2 * (0) + 2]) - 2 * (sizeof(size_t))))->fd))->size = (top_size | 0x1));
    } else {
        if (__malloc_sbrk_base == (char *)(-1)) {
            __malloc_sbrk_base = brk;
        } else {
            (__malloc_current_mallinfo.arena) += brk - (char *)old_end;
        }
        front_misalign = (unsigned long)((void *)&((mchunkptr)brk)->fd) & (16 - 1);
        if (front_misalign > 0) {
            correction = (16) - front_misalign;
            brk += correction;
        } else {
            correction = 0;
        }
        correction += pagesz - ((unsigned long)(brk + sbrk_size) & (pagesz - 1));
        new_brk = (char *)(_sbrk_r(reent_ptr, (correction)));
        if (new_brk == (char *)((-1))) {
            return;
        }
        (__malloc_current_mallinfo.arena) += correction;
        (((mbinptr)((char *)&(__malloc_av_[2 * (0) + 2]) - 2 * (sizeof(size_t))))->fd) = (mchunkptr)brk;
        top_size = new_brk - brk + correction;
        (((((mbinptr)((char *)&(__malloc_av_[2 * (0) + 2]) - 2 * (sizeof(size_t))))->fd))->size = (top_size | 0x1));
        if (old_top != ((mchunkptr)(((mbinptr)((char *)&(__malloc_av_[2 * (0) + 2]) - 2 * (sizeof(size_t))))))) {
            if (old_top_size < (sizeof(struct malloc_chunk))) {
                (((((mbinptr)((char *)&(__malloc_av_[2 * (0) + 2]) - 2 * (sizeof(size_t))))->fd))->size = (0x1));
                return;
            }
            old_top_size = (old_top_size - 3 * (sizeof(size_t))) & ~(16 - 1);
            ((old_top)->size = (((old_top)->size & 0x1) | (old_top_size)));
            ((mchunkptr)(((char *)(old_top)) + (old_top_size)))->size = (sizeof(size_t)) | 0x1;
            ((mchunkptr)(((char *)(old_top)) + (old_top_size + (sizeof(size_t)))))->size = (sizeof(size_t)) | 0x1;
            if (old_top_size >= (sizeof(struct malloc_chunk))) {
                _free_r(reent_ptr, ((void *)&(old_top)->fd));
            }
        }
    }
    if ((unsigned long)(__malloc_current_mallinfo.arena) > (unsigned long)D_00398E48) {
        D_00398E48 = (__malloc_current_mallinfo.arena);
    }
    if ((unsigned long)((__malloc_current_mallinfo.arena)) > (unsigned long)D_00398E50) {
        D_00398E50 = (__malloc_current_mallinfo.arena);
    }
}
void *_malloc_r(struct _reent *reent_ptr, size_t bytes);