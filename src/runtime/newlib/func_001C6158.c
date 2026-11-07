/* compiler: ee-gcc-2.96-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
/* newlib-preprocessed 1.9.0: qsort from qsort.c, placed at 0x005a4bf8 by
 * tools/libmatch.py. Third-party code, see THIRD_PARTY.md for its license and origin.
 * licence: newlib (BSD-style per file, see THIRD_PARTY.md) */
#define _Balloc func_005AC4D8
#define _Bfree func_005AC580
#define __mcmp func_005ACDC8
#define __mdiff func_005ACE30
#define __mprec_bigtens D_006D22E8
#define __mprec_tens D_006D2220
#define __mprec_tinytens D_006D2310
#define __sfvwrite D_001C5528
#define __sinit D_001C4BC8
#define __sprint func_005A74D0
#define __svfscanf D_005A9CC8
#define _b2d func_005AD090
#define _calloc_r D_00575F70
#define _d2b func_005AD228
#define _hi0bits func_005AC7E8
#define _i2b func_005AC928
#define _impure_ptr _impure_ptr
#define _lo0bits func_005AC868
#define _lshift func_005ACC70
#define _mprec_log10 func_005AD480
#define _multadd func_005AC5B0
#define _multiply func_005AC960
#define _pow5mult func_005ACB70
#define _s2b func_005AC6B8
#define _snprintf_r func_005A5998
#define _vfprintf_r func_005A7648
#define eofread func_005A5AD0
#define fabsf func_001C4380
#define finite func_001C43A8
#define isinf func_005AD550
#define isnan func_005AD598
#define memcpy D_001C5C84
#define qsort func_001C6158
#define snprintf func_005A5A30
#define sscanf func_005A5AD8
#define strlen D_0057F260
#define vfprintf func_005A8340

/*-
 * Copyright (c) 1992, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

typedef int __int32_t;
typedef unsigned int __uint32_t;

typedef unsigned int size_t;
typedef int ptrdiff_t;

typedef int wchar_t;

typedef unsigned int wint_t;

typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;

typedef unsigned short ushort;
typedef unsigned int uint;

typedef unsigned long  clock_t;

typedef long  time_t;

struct timespec {
  time_t tv_sec;
  long tv_nsec;
};

struct itimerspec {
  struct timespec it_interval;
  struct timespec it_value;
};

typedef long daddr_t;
typedef char * caddr_t;

typedef unsigned short ino_t;

typedef short dev_t;

typedef long off_t;

typedef unsigned short uid_t;
typedef unsigned short gid_t;
typedef int pid_t;
typedef long key_t;
typedef long ssize_t;

typedef unsigned int mode_t __attribute__ ((__mode__ (__SI__)));

typedef unsigned short nlink_t;

typedef long fd_mask;

typedef struct _types_fd_set {
        fd_mask fds_bits[(((64)+(((sizeof (fd_mask) * 8 ) )-1))/((sizeof (fd_mask) * 8 ) ))];
} _types_fd_set;

struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;
};

clock_t clock (void);
double difftime (time_t _time2, time_t _time1);
time_t mktime (struct tm *_timeptr);
time_t time (time_t *_timer);

char *asctime (const struct tm *_tblock);
char *ctime (const time_t *_time);
struct tm *gmtime (const time_t *_timer);
struct tm *localtime (const time_t *_timer);

size_t strftime (char *_s, size_t _maxsize, const char *_fmt, const struct tm *_t);

char *asctime_r (const struct tm *, char *);
char *ctime_r (const time_t *, char *);
struct tm *gmtime_r (const time_t *, struct tm *);
struct tm *localtime_r (const time_t *, struct tm *);

typedef __uint32_t __ULong;

struct _glue
{
  struct _glue *_next;
  int _niobs;
  struct __sFILE *_iobs;
};

struct _Bigint
{
  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};

struct _atexit {
        struct _atexit *_next;
        int _ind;
        void (*_fns[32 ])(void);
};

struct __sbuf {
        unsigned char *_base;
        int _size;
};

typedef long _fpos_t;

struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;

  void * _cookie;

  int (*_read) (void * _cookie, char *_buf, int _n);
  int (*_write) (void * _cookie, const char *_buf, int _n);
  _fpos_t (*_seek) (void * _cookie, _fpos_t _offset, int _whence);
  int (*_close) (void * _cookie);

  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;

  unsigned char _ubuf[3];
  unsigned char _nbuf[1];

  struct __sbuf _lb;

  int _blksize;
  int _offset;

  struct _reent *_data;
};

struct _reent
{

  int _errno;

  struct __sFILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];

  int _current_category;
  const char *_current_locale;

  int __sdidinit;

  void (*__cleanup) (struct _reent *);

  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;

  int _cvtlen;
  char *_cvtbuf;

  union
    {
      struct
        {
          unsigned int _unused_rand;
          char * _strtok_last;
          char _asctime_buf[26];
          struct tm _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;

        } _reent;

      struct
        {

          unsigned char * _nextf[30];
          unsigned int _nmalloc[30];
        } _unused;
    } _new;

  struct _atexit *_atexit;
  struct _atexit _atexit0;

  void (**(_sig_func))(int);

  struct _glue __sglue;
  struct __sFILE __sf[3];
};

extern struct _reent *_impure_ptr;

void _reclaim_reent (struct _reent *);

typedef struct
{
  int quot;
  int rem;
} div_t;

typedef struct
{
  long quot;
  long rem;
} ldiv_t;


void abort (void) __attribute__ ((noreturn));
int abs (int);
int atexit (void (*__func)(void));
double atof (const char *__nptr);

float atoff (const char *__nptr);

int atoi (const char *__nptr);
long atol (const char *__nptr);
void * bsearch (const void * __key,

                       const void * __base,

                       size_t __nmemb,

                       size_t __size,

                       int (* _compar) (const void *, const void *));
void * calloc (size_t __nmemb, size_t __size);
div_t div (int __numer, int __denom);
void exit (int __status) __attribute__ ((noreturn));
void free (void *);
char * getenv (const char *__string);
char * _getenv_r (struct _reent *, const char *__string);
char * _findenv (const char *, int *);
char * _findenv_r (struct _reent *, const char *, int *);
long labs (long);
ldiv_t ldiv (long __numer, long __denom);
void * malloc (size_t __size);
int mblen (const char *, size_t);
int _mblen_r (struct _reent *, const char *, size_t, int *);
int mbtowc (wchar_t *, const char *, size_t);
int _mbtowc_r (struct _reent *, wchar_t *, const char *, size_t, int *);
int wctomb (char *, wchar_t);
int _wctomb_r (struct _reent *, char *, wchar_t, int *);
size_t mbstowcs (wchar_t *, const char *, size_t);
size_t _mbstowcs_r (struct _reent *, wchar_t *, const char *, size_t, int *);
size_t wcstombs (char *, const wchar_t *, size_t);
size_t _wcstombs_r (struct _reent *, char *, const wchar_t *, size_t, int *);

int mkstemp (char *);
char * mktemp (char *);

void qsort (void * __base, size_t __nmemb, size_t __size, int(*_compar)(const void *, const void *));
int rand (void);
void * realloc (void * __r, size_t __size);
void srand (unsigned __seed);
double strtod (const char *__n, char **_end_PTR);

float strtodf (const char *__n, char **_end_PTR);

long strtol (const char *__n, char **_end_PTR, int __base);
unsigned long strtoul (const char *_n_PTR, char **_end_PTR, int __base);
unsigned long _strtoul_r (struct _reent *,const char *_n_PTR, char **_end_PTR, int __base);
int system (const char *__string);

int putenv (const char *__string);
int _putenv_r (struct _reent *, const char *__string);
int setenv (const char *__string, const char *__value, int __overwrite);
int _setenv_r (struct _reent *, const char *__string, const char *__value, int __overwrite);

char * gcvt (double,int,char *);
char * gcvtf (float,int,char *);
char * fcvt (double,int,int *,int *);
char * fcvtf (float,int,int *,int *);
char * ecvt (double,int,int *,int *);
char * ecvtbuf (double, int, int*, int*, char *);
char * fcvtbuf (double, int, int*, int*, char *);
char * ecvtf (float,int,int *,int *);
char * dtoa (double, int, int, int *, int*, char**);
int rand_r (unsigned *__seed);

void cfree (void *);

char * _dtoa_r (struct _reent *, double, int, int, int *, int*, char**);
void * _malloc_r (struct _reent *, size_t);
void * _calloc_r (struct _reent *, size_t, size_t);
void _free_r (struct _reent *, void *);
void * _realloc_r (struct _reent *, void *, size_t);
void _mstats_r (struct _reent *, char *);
int _system_r (struct _reent *, const char *);

void __eprintf (const char *, const char *, unsigned int, const char *);

static inline char *med3 (char *, char *, char *, int (*)());
static inline void swapfunc (char *, char *, int, int);

static inline void

swapfunc(char *a ,

        char *b ,

        int n ,

        int swaptype)

{
        if(swaptype <= 1)
                { long i = (n) / sizeof (long); register long *pi = (long *) (a); register long *pj = (long *) (b); do { register long t = *pi; *pi++ = *pj; *pj++ = t; } while (--i > 0); }
        else
                { long i = (n) / sizeof (char); register char *pi = (char *) (a); register char *pj = (char *) (b); do { register char t = *pi; *pi++ = *pj; *pj++ = t; } while (--i > 0); }
}

static inline char *

med3(char *a ,

        char *b ,

        char *c ,

        int (*cmp)())

{
        return cmp(a, b) < 0 ?
               (cmp(b, c) < 0 ? b : (cmp(a, c) < 0 ? c : a ))
              :(cmp(b, c) > 0 ? b : (cmp(a, c) < 0 ? a : c ));
}

void

qsort(void *a ,

        size_t n ,

        size_t es ,

        int (*cmp)())

{
        char *pa, *pb, *pc, *pd, *pl, *pm, *pn;
        int d, r, swaptype, swap_cnt;

loop: swaptype = ((char *)a - (char *)0) % sizeof(long) || es % sizeof(long) ? 2 : es == sizeof(long)? 0 : 1;;
        swap_cnt = 0;
        if (n < 7) {
                for (pm = (char *) a + es; pm < (char *) a + n * es; pm += es)
                        for (pl = pm; pl > (char *) a && cmp(pl - es, pl) > 0;
                             pl -= es)
                                if (swaptype == 0) { long t = *(long *)(pl); *(long *)(pl) = *(long *)(pl - es); *(long *)(pl - es) = t; } else swapfunc(pl, pl - es, es, swaptype);
                return;
        }
        pm = (char *) a + (n / 2) * es;
        if (n > 7) {
                pl = a;
                pn = (char *) a + (n - 1) * es;
                if (n > 40) {
                        d = (n / 8) * es;
                        pl = med3(pl, pl + d, pl + 2 * d, cmp);
                        pm = med3(pm - d, pm, pm + d, cmp);
                        pn = med3(pn - 2 * d, pn - d, pn, cmp);
                }
                pm = med3(pl, pm, pn, cmp);
        }
        if (swaptype == 0) { long t = *(long *)(a); *(long *)(a) = *(long *)(pm); *(long *)(pm) = t; } else swapfunc(a, pm, es, swaptype);
        pa = pb = (char *) a + es;

        pc = pd = (char *) a + (n - 1) * es;
        for (;;) {
                while (pb <= pc && (r = cmp(pb, a)) <= 0) {
                        if (r == 0) {
                                swap_cnt = 1;
                                if (swaptype == 0) { long t = *(long *)(pa); *(long *)(pa) = *(long *)(pb); *(long *)(pb) = t; } else swapfunc(pa, pb, es, swaptype);
                                pa += es;
                        }
                        pb += es;
                }
                while (pb <= pc && (r = cmp(pc, a)) >= 0) {
                        if (r == 0) {
                                swap_cnt = 1;
                                if (swaptype == 0) { long t = *(long *)(pc); *(long *)(pc) = *(long *)(pd); *(long *)(pd) = t; } else swapfunc(pc, pd, es, swaptype);
                                pd -= es;
                        }
                        pc -= es;
                }
                if (pb > pc)
                        break;
                if (swaptype == 0) { long t = *(long *)(pb); *(long *)(pb) = *(long *)(pc); *(long *)(pc) = t; } else swapfunc(pb, pc, es, swaptype);
                swap_cnt = 1;
                pb += es;
                pc -= es;
        }
        if (swap_cnt == 0) {
                for (pm = (char *) a + es; pm < (char *) a + n * es; pm += es)
                        for (pl = pm; pl > (char *) a && cmp(pl - es, pl) > 0;
                             pl -= es)
                                if (swaptype == 0) { long t = *(long *)(pl); *(long *)(pl) = *(long *)(pl - es); *(long *)(pl - es) = t; } else swapfunc(pl, pl - es, es, swaptype);
                return;
        }

        pn = (char *) a + n * es;
        r = (pa - (char *)a) < (pb - pa) ? pa - (char *)a : pb - pa;
        if ((r) > 0) swapfunc(a, pb - r, r, swaptype);
        r = (pd - pc) < (pn - pd - es) ? pd - pc : pn - pd - es;
        if ((r) > 0) swapfunc(pb, pn - r, r, swaptype);
        if ((r = pb - pa) > es)
                qsort(a, r / es, es, cmp);
        if ((r = pd - pc) > es) {

                a = pn - r;
                n = r / es;
                goto loop;
        }

}
