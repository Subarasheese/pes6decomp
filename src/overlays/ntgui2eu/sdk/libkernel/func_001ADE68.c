/* compiler: ee-gcc-2.96-G0 */
/* Source: g-guthrie/mvc2-port-and-decomp, src/newlib_heap_core.c (func_0011CE68). */
/* Doug Lea, public-domain allocator, as configured for newlib on the Emotion Engine. */
struct _reent;
typedef unsigned int size_t;
extern void func_001AE898(struct _reent *);
extern void func_001AE918(struct _reent *);
struct malloc_chunk {
    size_t prev_size;
    size_t size;
    struct malloc_chunk *fd;
    struct malloc_chunk *bk;
};
typedef struct malloc_chunk *mchunkptr;
typedef struct malloc_chunk *mbinptr;
extern mbinptr D_005CC510[(128 * 2) + 2];
extern void func_001ADC10(struct _reent *reent_ptr, size_t nb);

void *func_001ADE68(struct _reent *reent_ptr, size_t bytes) {
    mchunkptr victim;
    size_t victim_size;
    int idx;
    mbinptr bin;
    mchunkptr remainder;
    long remainder_size;
    int remainder_index;
    unsigned long block;
    int startidx;
    mchunkptr fwd;
    mchunkptr bck;
    mbinptr q;
    size_t nb = (((long)(bytes + ((sizeof(size_t)) + (16 - 1)))) <
                 ((long)((sizeof(struct malloc_chunk)) + (16 - 1))))
                    ? (((sizeof(struct malloc_chunk)) + (16 - 1)) & (~(16 - 1)))
                    : ((bytes + ((sizeof(size_t)) + (16 - 1))) & (~(16 - 1)));
    func_001AE898(reent_ptr);
    if (nb < (512 - 8)) {
        idx = ((unsigned long)nb) >> 3;
        q = (mbinptr)(((char *)(&D_005CC510[(2 * idx) + 2])) - (2 * (sizeof(size_t))));
        victim = q->bk;
        if (victim != q) {
            victim_size = victim->size & (~(0x1 | 0x2));
            {
                bck = victim->bk;
                fwd = victim->fd;
                fwd->bk = bck;
                bck->fd = fwd;
            };
            ((mchunkptr)(((char *)victim) + victim_size))->size |= 0x1;
            ;
            func_001AE918(reent_ptr);
            return (void *)(((char *)victim) + (2 * (sizeof(size_t))));
        }
        idx += 2;
    } else {
        idx = ((((unsigned long)nb) >> 9) == 0)
                  ? (((unsigned long)nb) >> 3)
                  : (((((unsigned long)nb) >> 9) <= 4)
                         ? (56 + (((unsigned long)nb) >> 6))
                         : (((((unsigned long)nb) >> 9) <= 20)
                                ? (91 + (((unsigned long)nb) >> 9))
                                : (((((unsigned long)nb) >> 9) <= 84)
                                       ? (110 + (((unsigned long)nb) >> 12))
                                       : (((((unsigned long)nb) >> 9) <= 340)
                                              ? (119 + (((unsigned long)nb) >> 15))
                                              : (((((unsigned long)nb) >> 9) <= 1364)
                                                     ? (124 + (((unsigned long)nb) >> 18))
                                                     : (126))))));
        bin = (mbinptr)(((char *)(&D_005CC510[(2 * idx) + 2])) - (2 * (sizeof(size_t))));
        for (victim = bin->bk; victim != bin; victim = victim->bk) {
            victim_size = victim->size & (~(0x1 | 0x2));
            remainder_size =
                (victim_size < nb) ? (-((long)(nb - victim_size))) : (victim_size - nb);
            ;
            if (remainder_size >= ((long)(sizeof(struct malloc_chunk)))) {
                --idx;
                break;
            } else if (remainder_size >= 0) {
                {
                    bck = victim->bk;
                    fwd = victim->fd;
                    fwd->bk = bck;
                    bck->fd = fwd;
                };
                ((mchunkptr)(((char *)victim) + victim_size))->size |= 0x1;
                ;
                func_001AE918(reent_ptr);
                return (void *)(((char *)victim) + (2 * (sizeof(size_t))));
            }
        }

        ++idx;
    }
    if ((victim = ((mbinptr)(((char *)(&D_005CC510[(2 * 1) + 2])) - (2 * (sizeof(size_t)))))->fd) !=
        ((mbinptr)(((char *)(&D_005CC510[(2 * 1) + 2])) - (2 * (sizeof(size_t)))))) {
        victim_size = victim->size & (~(0x1 | 0x2));
        remainder_size = (victim_size < nb) ? (-((long)(nb - victim_size))) : (victim_size - nb);
        ;
        if (remainder_size >= ((long)(sizeof(struct malloc_chunk)))) {
            remainder = (mchunkptr)(((char *)victim) + nb);
            victim->size = nb | 0x1;
            {
                ((mbinptr)(((char *)(&D_005CC510[(2 * 1) + 2])) - (2 * (sizeof(size_t)))))->fd =
                    (((mbinptr)(((char *)(&D_005CC510[(2 * 1) + 2])) - (2 * (sizeof(size_t)))))
                         ->bk = remainder);
                remainder->fd = (remainder->bk = (mbinptr)(((char *)(&D_005CC510[(2 * 1) + 2])) -
                                                           (2 * (sizeof(size_t)))));
            };
            remainder->size = remainder_size | 0x1;
            ((mchunkptr)(((char *)remainder) + remainder_size))->prev_size = remainder_size;
            ;
            func_001AE918(reent_ptr);
            return (void *)(((char *)victim) + (2 * (sizeof(size_t))));
        }
        ((mbinptr)(((char *)(&D_005CC510[(2 * 1) + 2])) - (2 * (sizeof(size_t)))))->fd =
            (((mbinptr)(((char *)(&D_005CC510[(2 * 1) + 2])) - (2 * (sizeof(size_t)))))->bk =
                 (mbinptr)(((char *)(&D_005CC510[(2 * 1) + 2])) - (2 * (sizeof(size_t)))));
        if (remainder_size >= 0) {
            ((mchunkptr)(((char *)victim) + victim_size))->size |= 0x1;
            ;
            func_001AE918(reent_ptr);
            return (void *)(((char *)victim) + (2 * (sizeof(size_t))));
        }
        {
            if (victim_size < 512) {
                remainder_index = ((unsigned long)victim_size) >> 3;
                ((mbinptr)(((char *)(&D_005CC510[(2 * 0) + 2])) - (2 * (sizeof(size_t)))))->size |=
                    ((unsigned long)1) << (remainder_index / 4);
                bck = (mbinptr)(((char *)(&D_005CC510[(2 * remainder_index) + 2])) -
                                (2 * (sizeof(size_t))));
                fwd = bck->fd;
                victim->bk = bck;
                victim->fd = fwd;
                fwd->bk = (bck->fd = victim);
            } else {
                remainder_index =
                    ((((unsigned long)victim_size) >> 9) == 0)
                        ? (((unsigned long)victim_size) >> 3)
                        : (((((unsigned long)victim_size) >> 9) <= 4)
                               ? (56 + (((unsigned long)victim_size) >> 6))
                               : (((((unsigned long)victim_size) >> 9) <= 20)
                                      ? (91 + (((unsigned long)victim_size) >> 9))
                                      : (((((unsigned long)victim_size) >> 9) <= 84)
                                             ? (110 + (((unsigned long)victim_size) >> 12))
                                             : (((((unsigned long)victim_size) >> 9) <= 340)
                                                    ? (119 + (((unsigned long)victim_size) >> 15))
                                                    : (((((unsigned long)victim_size) >> 9) <= 1364)
                                                           ? (124 +
                                                              (((unsigned long)victim_size) >> 18))
                                                           : (126))))));
                bck = (mbinptr)(((char *)(&D_005CC510[(2 * remainder_index) + 2])) -
                                (2 * (sizeof(size_t))));
                fwd = bck->fd;
                if (fwd == bck)
                    ((mbinptr)(((char *)(&D_005CC510[(2 * 0) + 2])) - (2 * (sizeof(size_t)))))
                        ->size |= ((unsigned long)1) << (remainder_index / 4);
                else {
                    while ((fwd != bck) && (victim_size < (fwd->size & (~(0x1 | 0x2)))))
                        fwd = fwd->fd;

                    bck = fwd->bk;
                }
                victim->bk = bck;
                victim->fd = fwd;
                fwd->bk = (bck->fd = victim);
            }
        };
    }
    if ((block = ((unsigned long)1) << (idx / 4)) <=
        ((mbinptr)(((char *)(&D_005CC510[(2 * 0) + 2])) - (2 * (sizeof(size_t)))))->size) {
        if ((block &
             ((mbinptr)(((char *)(&D_005CC510[(2 * 0) + 2])) - (2 * (sizeof(size_t)))))->size) ==
            0) {
            idx = (idx & (~(4 - 1))) + 4;
            block <<= 1;
            while (
                (block & ((mbinptr)(((char *)(&D_005CC510[(2 * 0) + 2])) - (2 * (sizeof(size_t)))))
                             ->size) == 0) {
                idx += 4;
                block <<= 1;
            }
        }
        for (;;) {
            startidx = idx;
            q = (bin = (mbinptr)(((char *)(&D_005CC510[(2 * idx) + 2])) - (2 * (sizeof(size_t)))));
            do {
                for (victim = bin->bk; victim != bin; victim = victim->bk) {
                    victim_size = victim->size & (~(0x1 | 0x2));
                    remainder_size =
                        (victim_size < nb) ? (-((long)(nb - victim_size))) : (victim_size - nb);
                    ;
                    if (remainder_size >= ((long)(sizeof(struct malloc_chunk)))) {
                        remainder = (mchunkptr)(((char *)victim) + nb);
                        victim->size = nb | 0x1;
                        {
                            bck = victim->bk;
                            fwd = victim->fd;
                            fwd->bk = bck;
                            bck->fd = fwd;
                        };
                        {
                            ((mbinptr)(((char *)(&D_005CC510[(2 * 1) + 2])) -
                                       (2 * (sizeof(size_t)))))
                                ->fd = (((mbinptr)(((char *)(&D_005CC510[(2 * 1) + 2])) -
                                                   (2 * (sizeof(size_t)))))
                                            ->bk = remainder);
                            remainder->fd =
                                (remainder->bk = (mbinptr)(((char *)(&D_005CC510[(2 * 1) + 2])) -
                                                           (2 * (sizeof(size_t)))));
                        };
                        remainder->size = remainder_size | 0x1;
                        ((mchunkptr)(((char *)remainder) + remainder_size))->prev_size =
                            remainder_size;
                        ;
                        func_001AE918(reent_ptr);
                        return (void *)(((char *)victim) + (2 * (sizeof(size_t))));
                    } else if (remainder_size >= 0) {
                        ((mchunkptr)(((char *)victim) + victim_size))->size |= 0x1;
                        {
                            bck = victim->bk;
                            fwd = victim->fd;
                            fwd->bk = bck;
                            bck->fd = fwd;
                        };
                        ;
                        func_001AE918(reent_ptr);
                        return (void *)(((char *)victim) + (2 * (sizeof(size_t))));
                    }
                }

                bin = (mbinptr)(((char *)bin) + (2 * (sizeof(mbinptr))));
                if (idx < ((512 / 8) - 1)) {
                    bin = (mbinptr)(((char *)bin) + (2 * (sizeof(mbinptr))));
                    ++idx;
                }
            } while (((++idx) & (4 - 1)) != 0);
            do {
                if ((startidx & (4 - 1)) == 0) {
                    ((mbinptr)(((char *)(&D_005CC510[(2 * 0) + 2])) - (2 * (sizeof(size_t)))))
                        ->size &= ~block;
                    break;
                }
                --startidx;
                q = (mbinptr)(((char *)q) - (2 * (sizeof(mbinptr))));
            } while (q->fd == q);
            if (((block <<= 1) <=
                 ((mbinptr)(((char *)(&D_005CC510[(2 * 0) + 2])) - (2 * (sizeof(size_t)))))
                     ->size) &&
                (block != 0)) {
                while ((block &
                        ((mbinptr)(((char *)(&D_005CC510[(2 * 0) + 2])) - (2 * (sizeof(size_t)))))
                            ->size) == 0) {
                    idx += 4;
                    block <<= 1;
                }

            } else
                break;
        }
    }
    remainder_size =
        ((((mbinptr)(((char *)(&D_005CC510[(2 * 0) + 2])) - (2 * (sizeof(size_t)))))->fd->size &
          (~(0x1 | 0x2))) < nb)
            ? (-((long)(nb -
                        (((mbinptr)(((char *)(&D_005CC510[(2 * 0) + 2])) - (2 * (sizeof(size_t)))))
                             ->fd->size &
                         (~(0x1 | 0x2))))))
            : ((((mbinptr)(((char *)(&D_005CC510[(2 * 0) + 2])) - (2 * (sizeof(size_t)))))
                    ->fd->size &
                (~(0x1 | 0x2))) -
               nb);
    ;
    if (((((mbinptr)(((char *)(&D_005CC510[(2 * 0) + 2])) - (2 * (sizeof(size_t)))))->fd->size &
          (~(0x1 | 0x2))) < nb) ||
        (remainder_size < ((long)(sizeof(struct malloc_chunk))))) {
        func_001ADC10(reent_ptr, nb);
        remainder_size =
            ((((mbinptr)(((char *)(&D_005CC510[(2 * 0) + 2])) - (2 * (sizeof(size_t)))))->fd->size &
              (~(0x1 | 0x2))) < nb)
                ? (-((long)(nb - (((mbinptr)(((char *)(&D_005CC510[(2 * 0) + 2])) -
                                             (2 * (sizeof(size_t)))))
                                      ->fd->size &
                                  (~(0x1 | 0x2))))))
                : ((((mbinptr)(((char *)(&D_005CC510[(2 * 0) + 2])) - (2 * (sizeof(size_t)))))
                        ->fd->size &
                    (~(0x1 | 0x2))) -
                   nb);
        ;
        if (((((mbinptr)(((char *)(&D_005CC510[(2 * 0) + 2])) - (2 * (sizeof(size_t)))))->fd->size &
              (~(0x1 | 0x2))) < nb) ||
            (remainder_size < ((long)(sizeof(struct malloc_chunk))))) {
            func_001AE918(reent_ptr);
            return 0;
        }
    }
    victim = ((mbinptr)(((char *)(&D_005CC510[(2 * 0) + 2])) - (2 * (sizeof(size_t)))))->fd;
    victim->size = nb | 0x1;
    ((mbinptr)(((char *)(&D_005CC510[(2 * 0) + 2])) - (2 * (sizeof(size_t)))))->fd =
        (mchunkptr)(((char *)victim) + nb);
    ((mbinptr)(((char *)(&D_005CC510[(2 * 0) + 2])) - (2 * (sizeof(size_t)))))->fd->size =
        remainder_size | 0x1;
    ;
    func_001AE918(reent_ptr);
    return (void *)(((char *)victim) + (2 * (sizeof(size_t))));
}
