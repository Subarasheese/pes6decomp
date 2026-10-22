/* compiler: ee-gcc-2.96-G0-g */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
/* newlib 1.9.0 (the PS2 toolchain's C library): the function at 0x005AB038.
 * licence: newlib (BSD-style per file, see THIRD_PARTY.md) */
/* newlib 1.9.0: _dtoa_r from dtoa.c, placed at 0x005ab038 by
 * tools/libmatch.py. Third-party code, see THIRD_PARTY.md for its license and origin. */
#define _Balloc _Balloc
#define _Bfree _Bfree
#define __assert func_001C2EA4
#define func_001C313C func_001C313C
#define __ieee754_acos func_0059D330
#define __ieee754_exp func_0059E3F0
#define __ieee754_fmod func_0059EC30
#define __ieee754_log func_0059F2D0
#define __ieee754_log10 func_0059F120
#define __ieee754_rem_pio2 func_001C0834
#define __ieee754_sqrt func_001C0DEC
#define __kernel_cos func_001C110C
#define __kernel_rem_pio2 func_001C13E4
#define __kernel_sin func_001C1F34
#define __kernel_tan func_001C216C
#define __mcmp __mcmp
#define __mdiff __mdiff
#define __mprec_bigtens D_003D1CD8
#define __mprec_tens D_003D1C10
#define __mprec_tinytens D_006D2310
#define __muldi3 __muldi3
#define func_00596420 func_001C0190
#define __sclose func_005A5CD0
#define __sflags func_001C4EA8
#define __sfmoreglue func_001C34C4
#define __sfp func_001C353C
#define __sfvwrite func_001C3FD4
#define __sinit func_001C3674
#define __smakebuf func_001C44FC
#define __sread func_005A5B80
#define __srefill func_005A56A0
#define func_005A5820 func_005A5820
#define __sseek func_005A5C68
#define __submore func_005AD5D8
#define __svfscanf func_001BF500
#define __swbuf func_001C0368
#define __swrite func_005A5BE8
#define __swsetup func_001C04D8
#define __udivdi3 __udivdi3
#define __umoddi3 __umoddi3
#define _b2d _b2d
#define _calloc_r func_00575F70
#define _cleanup func_001C3654
#define _cleanup_r func_001C3634
#define _close close
#define _close_r func_001C05E8
#define _ctype_ _ctype_
#define _d2b func_001C5E30
#define _dtoa_r func_001C0870
#define _exit func_00100220
#define _fopen_r func_001C375C
#define func_00575F90 func_00575F90
#define _fstat fstat
#define func_001C3F74 func_001C3F74
#define _fwalk func_001C43B4
#define _getpid func_005A5EF4
#define _getpid_r func_001C44D4
#define _hi0bits _hi0bits
#define _i2b _i2b
#define _impure_ptr _impure_ptr
#define _lo0bits _lo0bits
#define _localeconv_r func_001C4FF0
#define _lseek lseek
#define _lseek_r func_001C5048
#define _lshift _lshift
#define _malloc_r func_00575FB0
#define _mbtowc_r func_001C50A8
#define _mprec_log10 func_005AD480
#define _multadd func_001C51B8
#define _multiply _multiply
#define _open open
#define _open_r func_005A4998
#define _perror_r func_005A49F8
#define _pow5mult func_001C5778
#define _putchar_r func_005A4A88
#define _puts_r func_005A4B50
#define _ratio func_005AD3B0
#define _read read
#define _read_r func_005AD4F0
#define _realloc_r func_00575FC8
#define _s2b _s2b
#define _setlocale_r func_001C4F60
#define _snprintf_r func_005A5998
#define _strdup_r func_005A6250
#define _strtol_r func_001BC770
#define _strtoul_r func_001BC9D8
#define _ulp func_001C5BC8
#define _vfiprintf_r func_001BCE80
#define _vfprintf_r func_001BDBF0
#define _write write
#define func_001C0478 func_001C0478
#define abort func_001C2E74
#define abs func_001C2E8C
#define atexit func_001C2EDC
#define atof func_001C2F7C
#define atoi func_001C2F94
#define atol func_001C2FBC
#define bcopy func_001C2FF4
#define bsearch func_001C3014
#define bzero func_001C30E4
#define ceil func_0059C3B0
#define copysign func_001C26D4
#define cos func_0059C5C0
#define dpadd dpadd
#define dpcmp dpcmp
#define dpdiv dpdiv
#define dpmul dpmul
#define dpsub dpsub
#define dptoli dptoli
#define exit func_001C314C
#define expm1 func_001C271C
#define fabs func_0059C6E8
#define fabsf func_001C2E2C
#define fclose fclose
#define fflush fflush
#define fileno func_001C3414
#define finite func_001C2E54
#define func_001C3704 func_001C3704
#define floor func_0059C720
#define fopen func_001C383C
#define fprintf func_001C3864
#define fputc func_001C38BC
#define fputs func_001C3954
#define fread func_001C39A4
#define free func_001C311C
#define frexp func_0059C938
#define fseek fseek
#define fwrite fwrite
#define isatty isatty
#define isinf func_005AD550
#define isnan func_005AD598
#define labs func_001C44EC
#define ldexp func_0059CA20
#define litodp litodp
#define localeconv func_001C5028
#define malloc malloc
#define memchr func_001C4650
#define memcpy func_001C4730
#define memmove func_005A47D4
#define memset func_005A48D8
#define modf func_0059CAD0
#define perror func_005A4A68
#define putchar func_005A4B30
#define puts func_005A4BD8
#define qsort func_005A4BF8
#define quorem quorem
#define raise func_00575C68
#define rand func_005A5600
#define rindex func_005A5868
#define scalbn func_0059CC60
#define setlocale func_001C5000
#define sin func_0059CE48
#define snprintf func_005A5A30
#define srand func_005A55E8
#define sscanf func_005A5AD8
#define strcasecmp func_005A5CF0
#define strcmp func_0011F5F0
#define strcoll func_005A6088
#define strcspn func_005A61B0
#define strdup func_005A6230
#define strerror func_005A62C0
#define strlen func_0011F618
#define strlwr func_005A67D8
#define strncasecmp func_005A6828
#define strpbrk func_005A6C70
#define strrchr func_005A6CF8
#define strspn func_005A6D48
#define strstr func_005A6DC8
#define strtod func_0011F088
#define strtok func_001BC688
#define strtok_r func_001BC6A8
#define func_001BC9A8 func_001BC9A8
#define strtoul func_001BCC08
#define strupr func_001BCC38
#define strxfrm func_001BCC88
#define tan func_0059D198
#define ungetc func_005AD6C0
#define vfiprintf func_001BCE08
#define vfprintf func_001BDB78
#define vsnprintf func_001C0290
#define vsnprintf_r func_001C0300
extern void _exit (int) __attribute__ ((__noreturn__));
extern void exit (int) __attribute__ ((__noreturn__));
extern void abort (void) __attribute__ ((__noreturn__));
/****************************************************************
 *
 * The author of this software is David M. Gay.
 *
 * Copyright (c) 1991 by AT&T.
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose without fee is hereby granted, provided that this entire notice
 * is included in all copies of any software which is or includes a copy
 * or modification of this software and in all copies of the supporting
 * documentation for such software.
 *
 * THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 * WARRANTY.  IN PARTICULAR, NEITHER THE AUTHOR NOR AT&T MAKES ANY
 * REPRESENTATION OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY
 * OF THIS SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 *
 ***************************************************************/

/* Provide support for both ANSI and non-ANSI environments.  */

#ifndef	_ANSIDECL_H_
#define	_ANSIDECL_H_

#ifndef __SYS_CONFIG_H__
#define __SYS_CONFIG_H__

/* exceptions first */

#if defined(__H8300__) || defined(__H8500__) || defined (__H8300H__) ||  defined(__W65__) || defined (__H8300S__)
#endif

#ifdef __W65__
#endif

#if defined(__Z8001__) || defined(__Z8002__) || defined(__H8300__) || defined(__H8500__) || defined(__W65__) || defined (__H8300H__) || defined (__H8300S__) || defined (__mn10200__) || defined (__AVR__)
#endif

#if defined(__D10V__)
#endif

#ifdef ___AM29K__
#endif

#ifdef __i386__
#endif

#ifdef __M32R__
#endif

#ifdef __m68k__
#endif

#ifdef __mn10300__
#endif

#ifdef __mn10200__
#endif

#ifdef __AVR__
#endif

#ifdef __TIC80__
#endif

#ifdef __v850
#endif

#ifdef __D30V__
#endif

#if defined(__PPC__) && defined(_CALL_SYSV)
#endif

#ifdef __sparc__
#endif

#if INT_MAX == 32767
#else
typedef int __int32_t;
typedef unsigned int __uint32_t;
#endif

#ifndef _POINTER_INT
#define _POINTER_INT long
#endif

#undef __RAND_MAX
#if INT_MAX == 32767
#else
#define __RAND_MAX 0x7fffffff
#endif

#if defined(__CYGWIN32__) || defined(__CYGWIN__)
#endif

#ifndef __IMPORT
#define __IMPORT
#endif

#endif 

#ifdef __STDC__
#define _HAVE_STDC
#endif

#ifdef _HAVE_STDC
#define	_PTR		void *
#define	_AND		,
#define	_NOARGS		void
#define	_CONST		const
#define	_VOLATILE	volatile
#define	_SIGNED		signed
#define	_DOTS		, ...
#define _VOID void
#ifdef __CYGWIN__
#else
#define	_EXFUN(name, proto)		name proto
#define _EXPARM(name, proto)		(* name) proto
#endif
#define	_DEFUN(name, arglist, args)	name(args)
#define	_DEFUN_VOID(name)		name(_NOARGS)
#define _CAST_VOID (void)
#ifndef _LONG_DOUBLE
#define _LONG_DOUBLE long double
#endif
#ifndef _PARAMS
#define _PARAMS(paramlist)		paramlist
#endif
#else	
#endif

#ifdef __GNUC__
#define _ATTRIBUTE(attrs) __attribute__ (attrs)
#else
#endif

#endif 

/*
 * stdlib.h
 *
 * Definitions for common types, variables, and functions.
 */

#ifndef _STDLIB_H_
#ifdef __cplusplus
#endif
#define _STDLIB_H_

/* Provide support for both ANSI and non-ANSI environments.  */

#ifndef	_ANSIDECL_H_
#endif 

#define __need_size_t
#define __need_wchar_t
/* gt4: stand-in for gcc's <stddef.h> (the compiler ships without headers). */
#ifndef _STDDEF_H
#define _STDDEF_H
typedef __SIZE_TYPE__ size_t;
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#ifndef __cplusplus
typedef __WCHAR_TYPE__ wchar_t;
#endif
typedef unsigned int wint_t;
#ifndef NULL
#define NULL ((void *)0)
#endif
#define offsetof(t, m) ((size_t)&((t *)0)->m)
#endif

/* This header file provides the reentrancy.  */

#ifndef _SYS_REENT_H_
#ifdef __cplusplus
#endif
#define _SYS_REENT_H_

/* Provide support for both ANSI and non-ANSI environments.  */

#ifndef	_ANSIDECL_H_
#endif 

/*
 * time.h
 * 
 * Struct and function declarations for dealing with time.
 */

#ifndef _TIME_H_
#define _TIME_H_

/* Provide support for both ANSI and non-ANSI environments.  */

#ifndef	_ANSIDECL_H_
#endif 

#ifdef __cplusplus
#endif

#ifndef NULL
#endif

#ifndef	_MACHTIME_H_
#define	_MACHTIME_H_

#if defined(__rtems__)
#else  /* !__rtems__ */
#if defined(__arm__) || defined(__thumb__)
#endif
#endif 

#endif	

#ifndef _CLOCKS_PER_SEC_
#define _CLOCKS_PER_SEC_ 1000
#endif

#define CLOCKS_PER_SEC _CLOCKS_PER_SEC_
#define CLK_TCK CLOCKS_PER_SEC
#define __need_size_t
/* gt4: stand-in for gcc's <stddef.h> (the compiler ships without headers). */
#ifndef _STDDEF_H
#endif

/* unified sys/types.h: 
   start with sef's sysvi386 version.
   merge go32 version -- a few ifdefs.
   h8300hms, h8300xray, and sysvnecv70 disagree on the following types:

   typedef int gid_t;
   typedef int uid_t;
   typedef int dev_t;
   typedef int ino_t;
   typedef int mode_t;
   typedef int caddr_t;

   however, these aren't "reasonable" values, the sysvi386 ones make far 
   more sense, and should work sufficiently well (in particular, h8300 
   doesn't have a stat, and the necv70 doesn't matter.) -- eichin
 */

#ifndef _SYS_TYPES_H
#define _SYS_TYPES_H

#if defined (_WIN32) || defined (__CYGWIN__)
#endif

#ifdef __i386__
#endif

/* gt4: stand-in for gcc's <stddef.h> (the compiler ships without headers). */
#ifndef _STDDEF_H
#endif

#ifndef	_MACHTYPES_H_
#define	_MACHTYPES_H_

#define	_CLOCK_T_	unsigned long		/* clock() */
#define	_TIME_T_	long			
#define _CLOCKID_T_ 	unsigned long
#define _TIMER_T_   	unsigned long

#endif	

#ifdef __GNUC__
#define _ST_INT32 __attribute__ ((__mode__ (__SI__)))
#else
#endif

# ifndef	_POSIX_SOURCE

#  define	physadr		physadr_t
#  define	quad		quad_t

#ifndef _WINSOCK_H
typedef	unsigned char	u_char;
typedef	unsigned short	u_short;
typedef	unsigned int	u_int;
typedef	unsigned long	u_long;
#endif

typedef	unsigned short	ushort;		
typedef	unsigned int	uint;		
# endif	

#ifndef __clock_t_defined
typedef _CLOCK_T_ clock_t;
#define __clock_t_defined
#endif

#ifndef __time_t_defined
typedef _TIME_T_ time_t;
#define __time_t_defined

struct timespec {
  time_t  tv_sec;   
  long    tv_nsec;  
};

struct itimerspec {
  struct timespec  it_interval;  
  struct timespec  it_value;     
};
#endif

typedef	long	daddr_t;
typedef	char *	caddr_t;

#ifdef __MS_types__
#else
#ifdef __sparc__
#else
typedef	unsigned short	ino_t;
#endif
#endif

#ifdef __MS_types__
#endif 

#if defined(__rtems__)
#else
typedef	short	dev_t;
#endif

typedef	long	off_t;

typedef	unsigned short	uid_t;
typedef	unsigned short	gid_t;
typedef int pid_t;
typedef	long key_t;
typedef long ssize_t;

#ifdef __MS_types__
#else
#if defined (__sparc__) && !defined (__sparc_v9__)
#else
typedef unsigned int mode_t _ST_INT32;
#endif
#endif 

typedef unsigned short nlink_t;

# if ! defined (_POSIX_SOURCE) && ! defined (_WINSOCK_H)

#  define	NBBY	8		

#  ifndef	FD_SETSIZE
#	define	FD_SETSIZE	64
#  endif

typedef	long	fd_mask;
#  define	NFDBITS	(sizeof (fd_mask) * NBBY)	
#  ifndef	howmany
#	define	howmany(x,y)	(((x)+((y)-1))/(y))
#  endif

typedef	struct _types_fd_set {
	fd_mask	fds_bits[howmany(FD_SETSIZE, NFDBITS)];
} _types_fd_set;

#define fd_set _types_fd_set

#  define	FD_SET(n, p)	((p)->fds_bits[(n)/NFDBITS] |= (1L << ((n) % NFDBITS)))
#  define	FD_CLR(n, p)	((p)->fds_bits[(n)/NFDBITS] &= ~(1L << ((n) % NFDBITS)))
#  define	FD_ISSET(n, p)	((p)->fds_bits[(n)/NFDBITS] & (1L << ((n) % NFDBITS)))
#  define	FD_ZERO(p)	(__extension__ (void)({ \
     size_t __i; \
     char *__tmp = (char *)p; \
     for (__i = 0; __i < sizeof (*(p)); ++__i) \
       *__tmp++ = 0; \
}))

# endif	

#undef __MS_types__
#undef _ST_INT32

#if defined(__rtems__)
#endif  

#endif	

struct tm
{
  int	tm_sec;
  int	tm_min;
  int	tm_hour;
  int	tm_mday;
  int	tm_mon;
  int	tm_year;
  int	tm_wday;
  int	tm_yday;
  int	tm_isdst;
};

clock_t	   _EXFUN(clock,    (void));
double	   _EXFUN(difftime, (time_t _time2, time_t _time1));
time_t	   _EXFUN(mktime,   (struct tm *_timeptr));
time_t	   _EXFUN(time,     (time_t *_timer));
#ifndef _REENT_ONLY
char	  *_EXFUN(asctime,  (const struct tm *_tblock));
char	  *_EXFUN(ctime,    (const time_t *_time));
struct tm *_EXFUN(gmtime,   (const time_t *_timer));
struct tm *_EXFUN(localtime,(const time_t *_timer));
#endif
size_t	   _EXFUN(strftime, (char *_s, size_t _maxsize, const char *_fmt, const struct tm *_t));

char	  *_EXFUN(asctime_r,	(const struct tm *, char *));
char	  *_EXFUN(ctime_r,	(const time_t *, char *));
struct tm *_EXFUN(gmtime_r,	(const time_t *, struct tm *));
struct tm *_EXFUN(localtime_r,	(const time_t *, struct tm *));

#ifdef __CYGWIN__
#endif 

/*
 *  Written by Joel Sherrill <joel@OARcorp.com>.
 *
 *  COPYRIGHT (c) 1989-2000.
 *
 *  On-Line Applications Research Corporation (OAR).
 *
 *  Permission to use, copy, modify, and distribute this software for any
 *  purpose without fee is hereby granted, provided that this entire notice
 *  is included in all copies of any software which is or includes a copy
 *  or modification of this software.
 *
 *  THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 *  WARRANTY.  IN PARTICULAR,  THE AUTHOR MAKES NO REPRESENTATION
 *  OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY OF THIS
 *  SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 *
 *  $Id: features.h,v 1.1 2000/12/12 01:24:08 jjohnstn Exp $
 */

#ifndef _SYS_FEATURES_H
#define _SYS_FEATURES_H

#ifdef __cplusplus
#endif

#ifdef __rtems__
#endif

#ifdef __svr4__
#endif

#ifdef __CYGWIN32__
#endif

#ifdef __cplusplus
#endif
#endif 

#if defined(_POSIX_TIMERS)
#endif 

#define CLOCK_ENABLED  1  
#define CLOCK_DISABLED 0  

#define CLOCK_ALLOWED    1 
                           
                           
#define CLOCK_DISALLOWED 0 
                           
                           

#define CLOCK_REALTIME (clockid_t)1

#define TIMER_ABSTIME  4

#if defined(_POSIX_CPUTIME)
#endif

#if defined(_POSIX_THREAD_CPUTIME)
#endif

#if defined(_POSIX_CPUTIME)
#endif 

#if defined(_POSIX_CPUTIME) || defined(_POSIX_THREAD_CPUTIME)
#endif 

#ifdef __cplusplus
#endif
#endif 

#ifndef __Long
#if __LONG_MAX__ == 2147483647L
#elif __INT_MAX__ == 2147483647
#endif
#endif

#ifndef __Long
#define __Long __int32_t
typedef __uint32_t __ULong;
#endif

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

#define	_ATEXIT_SIZE 32	

struct _atexit {
	struct	_atexit *_next;			
	int	_ind;				
	void	(*_fns[_ATEXIT_SIZE])(void);	
};

struct __sbuf {
	unsigned char *_base;
	int	_size;
};

typedef long _fpos_t;		
				

struct __sFILE {
  unsigned char *_p;	
  int	_r;		
  int	_w;		
  short	_flags;		
  short	_file;		
  struct __sbuf _bf;	
  int	_lbfsize;	

  
  _PTR	_cookie;	

  int	_EXFUN((*_read),(_PTR _cookie, char *_buf, int _n));
  int	_EXFUN((*_write),(_PTR _cookie, const char *_buf, int _n));
  _fpos_t _EXFUN((*_seek),(_PTR _cookie, _fpos_t _offset, int _whence));
  int	_EXFUN((*_close),(_PTR _cookie));

  
  struct __sbuf _ub;	
  unsigned char *_up;	
  int	_ur;		

  
  unsigned char _ubuf[3];	
  unsigned char _nbuf[1];	

  
  struct __sbuf _lb;	

  
  int	_blksize;	
  int	_offset;	

  struct _reent *_data;
};

struct _reent
{
  
  int _errno;

  

  struct __sFILE *_stdin, *_stdout, *_stderr;

  int  _inc;			
  char _emergency[25];
 
  int _current_category;	
  _CONST char *_current_locale;

  int __sdidinit;		

  void _EXFUN((*__cleanup),(struct _reent *));

  
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
#define _N_LISTS 30
          unsigned char * _nextf[_N_LISTS];
          unsigned int _nmalloc[_N_LISTS];
        } _unused;
    } _new;

  
  struct _atexit *_atexit;	
  struct _atexit _atexit0;	

  
  void (**(_sig_func))(int);

  

  struct _glue __sglue;			
  struct __sFILE __sf[3];		
};

#define _REENT_INIT(var) \
  { 0, &var.__sf[0], &var.__sf[1], &var.__sf[2], 0, "", 0, "C", \
    0, NULL, NULL, 0, NULL, NULL, 0, NULL, { {0, NULL, "", \
    { 0,0,0,0,0,0,0,0}, 0, 1} } }

#ifndef __ATTRIBUTE_IMPURE_PTR__
#define __ATTRIBUTE_IMPURE_PTR__
#endif

extern struct _reent *_impure_ptr __ATTRIBUTE_IMPURE_PTR__;

void _reclaim_reent _PARAMS ((struct _reent *));

#ifndef _REENT_ONLY
#define _REENT _impure_ptr
#endif

#ifdef __cplusplus
#endif
#endif 

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

#ifndef NULL
#endif

#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0

#define RAND_MAX __RAND_MAX

extern __IMPORT int __mb_cur_max;

#define MB_CUR_MAX __mb_cur_max

_VOID	_EXFUN(abort,(_VOID) _ATTRIBUTE ((noreturn)));
int	_EXFUN(abs,(int));
int	_EXFUN(atexit,(_VOID (*__func)(_VOID)));
double	_EXFUN(atof,(const char *__nptr));
#ifndef __STRICT_ANSI__
float	_EXFUN(atoff,(const char *__nptr));
#endif
int	_EXFUN(atoi,(const char *__nptr));
long	_EXFUN(atol,(const char *__nptr));
_PTR	_EXFUN(bsearch,(const _PTR __key,
		       const _PTR __base,
		       size_t __nmemb,
		       size_t __size,
		       int _EXPARM(_compar,(const _PTR, const _PTR))));
_PTR	_EXFUN(calloc,(size_t __nmemb, size_t __size));
div_t	_EXFUN(div,(int __numer, int __denom));
_VOID	_EXFUN(exit,(int __status) _ATTRIBUTE ((noreturn)));
_VOID	_EXFUN(free,(_PTR));
char *  _EXFUN(getenv,(const char *__string));
char *	_EXFUN(_getenv_r,(struct _reent *, const char *__string));
char *	_EXFUN(_findenv,(_CONST char *, int *));
char *	_EXFUN(_findenv_r,(struct _reent *, _CONST char *, int *));
long	_EXFUN(labs,(long));
ldiv_t	_EXFUN(ldiv,(long __numer, long __denom));
_PTR	_EXFUN(malloc,(size_t __size));
int	_EXFUN(mblen,(const char *, size_t));
int	_EXFUN(_mblen_r,(struct _reent *, const char *, size_t, int *));
int	_EXFUN(mbtowc,(wchar_t *, const char *, size_t));
int	_EXFUN(_mbtowc_r,(struct _reent *, wchar_t *, const char *, size_t, int *));
int	_EXFUN(wctomb,(char *, wchar_t));
int	_EXFUN(_wctomb_r,(struct _reent *, char *, wchar_t, int *));
size_t	_EXFUN(mbstowcs,(wchar_t *, const char *, size_t));
size_t	_EXFUN(_mbstowcs_r,(struct _reent *, wchar_t *, const char *, size_t, int *));
size_t	_EXFUN(wcstombs,(char *, const wchar_t *, size_t));
size_t	_EXFUN(_wcstombs_r,(struct _reent *, char *, const wchar_t *, size_t, int *));
#ifndef __STRICT_ANSI__
#ifndef _REENT_ONLY
int     _EXFUN(mkstemp,(char *));
char *  _EXFUN(mktemp,(char *));
#endif
#endif
_VOID	_EXFUN(qsort,(_PTR __base, size_t __nmemb, size_t __size, int(*_compar)(const _PTR, const _PTR)));
int	_EXFUN(rand,(_VOID));
_PTR	_EXFUN(realloc,(_PTR __r, size_t __size));
_VOID	_EXFUN(srand,(unsigned __seed));
double	_EXFUN(strtod,(const char *__n, char **_end_PTR));
#ifndef __STRICT_ANSI__
float	_EXFUN(strtodf,(const char *__n, char **_end_PTR));
#endif
long	_EXFUN(func_001BC9A8,(const char *__n, char **_end_PTR, int __base));
unsigned long _EXFUN(strtoul,(const char *_n_PTR, char **_end_PTR, int __base));
unsigned long _EXFUN(_strtoul_r,(struct _reent *,const char *_n_PTR, char **_end_PTR, int __base));
int	_EXFUN(system,(const char *__string));

#ifndef __STRICT_ANSI__
int	_EXFUN(putenv,(const char *__string));
int	_EXFUN(_putenv_r,(struct _reent *, const char *__string));
int	_EXFUN(setenv,(const char *__string, const char *__value, int __overwrite));
int	_EXFUN(_setenv_r,(struct _reent *, const char *__string, const char *__value, int __overwrite));

char *	_EXFUN(gcvt,(double,int,char *));
char *	_EXFUN(gcvtf,(float,int,char *));
char *	_EXFUN(fcvt,(double,int,int *,int *));
char *	_EXFUN(fcvtf,(float,int,int *,int *));
char *	_EXFUN(ecvt,(double,int,int *,int *));
char *	_EXFUN(ecvtbuf,(double, int, int*, int*, char *));
char *	_EXFUN(fcvtbuf,(double, int, int*, int*, char *));
char *	_EXFUN(ecvtf,(float,int,int *,int *));
char *	_EXFUN(dtoa,(double, int, int, int *, int*, char**));
int	_EXFUN(rand_r,(unsigned *__seed));

#ifndef __CYGWIN__
_VOID	_EXFUN(cfree,(_PTR));
#else
#endif

#endif 

char *	_EXFUN(_dtoa_r,(struct _reent *, double, int, int, int *, int*, char**));
_PTR	_EXFUN(_malloc_r,(struct _reent *, size_t));
_PTR	_EXFUN(_calloc_r,(struct _reent *, size_t, size_t));
_VOID	_EXFUN(func_00575F90,(struct _reent *, _PTR));
_PTR	_EXFUN(_realloc_r,(struct _reent *, _PTR, size_t));
_VOID	_EXFUN(_mstats_r,(struct _reent *, char *));
int	_EXFUN(_system_r,(struct _reent *, const char *));

_VOID	_EXFUN(__eprintf,(const char *, const char *, unsigned int, const char *));

#ifdef __cplusplus
#endif
#endif 

/* This header file provides the reentrancy.  */

#ifndef _REENT_H_
#ifdef __cplusplus
#endif
#define _REENT_H_

/* This header file provides the reentrancy.  */

#ifndef _SYS_REENT_H_
#endif 

/* ANSI C namespace clean utility typedefs */

#ifndef	_SYS__TYPES_H
#define _SYS__TYPES_H

typedef long _off_t;
typedef long _ssize_t;

#endif	

#ifndef	_MACHTYPES_H_
#endif	

#define __need_size_t
/* gt4: stand-in for gcc's <stddef.h> (the compiler ships without headers). */
#ifndef _STDDEF_H
#endif

struct stat;
struct tms;
struct timeval;
struct timezone;

extern int _close_r _PARAMS ((struct _reent *, int));
extern int _execve_r _PARAMS ((struct _reent *, char *, char **, char **));
extern int _fcntl_r _PARAMS ((struct _reent *, int, int, int));
extern int _fork_r _PARAMS ((struct _reent *));
extern int func_001C3F74 _PARAMS ((struct _reent *, int, struct stat *));
extern int _getpid_r _PARAMS ((struct _reent *));
extern int _kill_r _PARAMS ((struct _reent *, int, int));
extern int _link_r _PARAMS ((struct _reent *, const char *, const char *));
extern _off_t _lseek_r _PARAMS ((struct _reent *, int, _off_t, int));
extern int _open_r _PARAMS ((struct _reent *, const char *, int, int));
extern _ssize_t _read_r _PARAMS ((struct _reent *, int, void *, size_t));
extern void *_sbrk_r _PARAMS ((struct _reent *, size_t));
extern int _stat_r _PARAMS ((struct _reent *, const char *, struct stat *));
extern _CLOCK_T_ _times_r _PARAMS ((struct _reent *, struct tms *));
extern int _unlink_r _PARAMS ((struct _reent *, const char *));
extern int _wait_r _PARAMS ((struct _reent *, int *));
extern _ssize_t func_001C0478 _PARAMS ((struct _reent *, int, const void *, size_t));

extern int _gettimeofday_r _PARAMS ((struct _reent *, struct timeval *tp, struct timezone *tzp));

#ifdef __cplusplus
#endif
#endif 

/*
 * string.h
 *
 * Definitions for memory and string functions.
 */

#ifndef _STRING_H_
#define	_STRING_H_

#ifdef __cplusplus
#endif

/* Provide support for both ANSI and non-ANSI environments.  */

#ifndef	_ANSIDECL_H_
#endif 

/* This header file provides the reentrancy.  */

#ifndef _SYS_REENT_H_
#endif 

#define __need_size_t
/* gt4: stand-in for gcc's <stddef.h> (the compiler ships without headers). */
#ifndef _STDDEF_H
#endif

#ifndef NULL
#endif

_PTR 	 _EXFUN(memchr,(const _PTR, int, size_t));
int 	 _EXFUN(memcmp,(const _PTR, const _PTR, size_t));
_PTR 	 _EXFUN(memcpy,(_PTR, const _PTR, size_t));
_PTR	 _EXFUN(memmove,(_PTR, const _PTR, size_t));
_PTR	 _EXFUN(memset,(_PTR, int, size_t));
char 	*_EXFUN(strcat,(char *, const char *));
char 	*_EXFUN(strchr,(const char *, int));
int	 _EXFUN(strcmp,(const char *, const char *));
int	 _EXFUN(strcoll,(const char *, const char *));
char 	*_EXFUN(strcpy,(char *, const char *));
size_t	 _EXFUN(strcspn,(const char *, const char *));
char 	*_EXFUN(strerror,(int));
size_t	 _EXFUN(strlen,(const char *));
char 	*_EXFUN(strncat,(char *, const char *, size_t));
int	 _EXFUN(strncmp,(const char *, const char *, size_t));
char 	*_EXFUN(strncpy,(char *, const char *, size_t));
char 	*_EXFUN(strpbrk,(const char *, const char *));
char 	*_EXFUN(strrchr,(const char *, int));
size_t	 _EXFUN(strspn,(const char *, const char *));
char 	*_EXFUN(strstr,(const char *, const char *));

#ifndef _REENT_ONLY
char 	*_EXFUN(strtok,(char *, const char *));
#endif

size_t	 _EXFUN(strxfrm,(char *, const char *, size_t));

#ifndef __STRICT_ANSI__
char 	*_EXFUN(strtok_r,(char *, const char *, char **));

int	 _EXFUN(bcmp,(const char *, const char *, size_t));
void	 _EXFUN(bcopy,(const char *, char *, size_t));
void	 _EXFUN(bzero,(char *, size_t));
int	 _EXFUN(ffs,(int));
char 	*_EXFUN(index,(const char *, int));
_PTR	 _EXFUN(memccpy,(_PTR, const _PTR, int, size_t));
char 	*_EXFUN(rindex,(const char *, int));
int	 _EXFUN(strcasecmp,(const char *, const char *));
char 	*_EXFUN(strdup,(const char *));
char 	*_EXFUN(_strdup_r,(struct _reent *, const char *));
int	 _EXFUN(strncasecmp,(const char *, const char *, size_t));
char 	*_EXFUN(strsep,(char **, const char *));
char	*_EXFUN(strlwr,(char *));
char	*_EXFUN(strupr,(char *));
#ifdef __CYGWIN__
#endif

#ifndef strcmpi
#define strcmpi strcasecmp
#endif
#ifndef stricmp
#define stricmp strcasecmp
#endif
#ifndef strncmpi
#define strncmpi strncasecmp
#endif
#ifndef strnicmp
#define strnicmp strncasecmp
#endif

#endif 

#ifdef __cplusplus
#endif
#endif 

/****************************************************************
 *
 * The author of this software is David M. Gay.
 *
 * Copyright (c) 1991 by AT&T.
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose without fee is hereby granted, provided that this entire notice
 * is included in all copies of any software which is or includes a copy
 * or modification of this software and in all copies of the supporting
 * documentation for such software.
 *
 * THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 * WARRANTY.  IN PARTICULAR, NEITHER THE AUTHOR NOR AT&T MAKES ANY
 * REPRESENTATION OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY
 * OF THIS SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 *
 ***************************************************************/

#ifndef _IEEE_FP_H_
#define _IEEE_FP_H_

/* Provide support for both ANSI and non-ANSI environments.  */

#ifndef	_ANSIDECL_H_
#endif 

#ifndef __IEEE_BIG_ENDIAN
#ifndef __IEEE_LITTLE_ENDIAN

#if defined(__arm__) || defined(__thumb__)
#endif

#ifdef __hppa__
#endif

#ifdef __sparc__
#endif

#if defined(__m68k__) || defined(__mc68000__)
#endif

#if defined (__H8300__) || defined (__H8300H__) || defined (__H8300S__)
#endif

#ifdef __H8500__
#endif

#ifdef __sh__
#endif

#ifdef _AM29K
#endif

#ifdef _WIN32
#endif

#ifdef __i386__
#endif

#ifdef __i960__
#endif

#ifdef __M32R__
#endif

#ifdef __TIC80__
#endif

#ifdef __MIPSEL__
#define __IEEE_LITTLE_ENDIAN
#endif
#ifdef __MIPSEB__
#endif

#ifdef __W65__
#endif

#if defined(__Z8001__) || defined(__Z8002__)
#endif

#ifdef __m88k__
#endif

#ifdef __mn10300__
#endif

#ifdef __mn10200__
#endif

#ifdef __v800
#endif

#ifdef __v850
#endif

#ifdef __D10V__
#endif

#ifdef __PPC__
#endif

#ifdef __arc__
#endif

#ifdef __fr30__
#endif

#ifdef __mcore__
#endif

#ifdef __ia64__
#endif

#ifdef __AVR__
#endif

#if defined(__or32__) || defined(__or1k__) || defined(__or16__)
#endif

#ifndef __IEEE_BIG_ENDIAN
#ifndef __IEEE_LITTLE_ENDIAN
#endif 
#endif 

#endif 
#endif 

/* FIXME FIXME FIXME:
   Neither of __ieee_{float,double}_shape_tape seem to be used anywhere
   except in libm/test.  If that is the case, please delete these from here.
   If that is not the case, please insert documentation here describing why
   they're needed.  */

#ifdef __IEEE_BIG_ENDIAN
#endif

#ifdef __IEEE_LITTLE_ENDIAN

typedef union 
{
  double value;
  struct 
  {
#ifdef __SMALL_BITFIELDS
#else
    unsigned int fraction1:32;
    unsigned int fraction0:20;
#endif
    unsigned int exponent :11;
    unsigned int sign     : 1;
  } number;
  struct 
  {
#ifdef __SMALL_BITFIELDS
#else
    unsigned int function1:32;
    unsigned int function0:19;
#endif
    unsigned int quiet:1;
    unsigned int exponent: 11;
    unsigned int sign : 1;
  } nan;
  struct 
  {
    unsigned long lsw;
    unsigned long msw;
  } parts;

  long aslong[2];

} __ieee_double_shape_type;

#endif

#ifdef __IEEE_BIG_ENDIAN
#endif

#ifdef __IEEE_LITTLE_ENDIAN

typedef union
{
  float value;
  struct 
  {
    unsigned int fraction0: 7;
    unsigned int fraction1: 16;
    unsigned int exponent: 8;
    unsigned int sign : 1;
  } number;
  struct 
  {
    unsigned int function1:16;
    unsigned int function0:6;
    unsigned int quiet:1;
    unsigned int exponent:8;
    unsigned int sign:1;
  } nan;
  long p1;
  
} __ieee_float_shape_type;

#endif

typedef int fp_rnd;
#define FP_RN 0 	
#define FP_RM 1		
#define FP_RP 2		
#define FP_RZ 3		

fp_rnd _EXFUN(fpgetround,(void));
fp_rnd _EXFUN(fpsetround, (fp_rnd));

typedef int fp_except;
#define FP_X_INV 0x10	
#define FP_X_DX  0x80	
#define FP_X_OFL 0x04	
#define FP_X_UFL 0x02	
#define FP_X_IMP 0x01	

fp_except _EXFUN(fpgetmask,(void));
fp_except _EXFUN(fpsetmask,(fp_except));
fp_except _EXFUN(fpgetsticky,(void));
fp_except _EXFUN(fpsetsticky, (fp_except));

typedef int fp_rdi;
#define FP_RDI_TOZ 0	
#define FP_RDI_RD  1	

fp_rdi _EXFUN(fpgetroundtoi,(void));
fp_rdi _EXFUN(fpsetroundtoi,(fp_rdi));

int _EXFUN(isnan, (double));
int _EXFUN(isinf, (double));
int _EXFUN(finite, (double));

int _EXFUN(isnanf, (float));
int _EXFUN(isinff, (float));
int _EXFUN(finitef, (float));

#define __IEEE_DBL_EXPBIAS 1023
#define __IEEE_FLT_EXPBIAS 127

#define __IEEE_DBL_EXPLEN 11
#define __IEEE_FLT_EXPLEN 8

#define __IEEE_DBL_FRACLEN (64 - (__IEEE_DBL_EXPLEN + 1))
#define __IEEE_FLT_FRACLEN (32 - (__IEEE_FLT_EXPLEN + 1))

#define __IEEE_DBL_MAXPOWTWO	((double)(1L << 32 - 2) * (1L << (32-11) - 32 + 1))
#define __IEEE_FLT_MAXPOWTWO	((float)(1L << (32-8) - 1))

#define __IEEE_DBL_NAN_EXP 0x7ff
#define __IEEE_FLT_NAN_EXP 0xff

#define isnanf(x) (((*(long *)&(x) & 0x7f800000L)==0x7f800000L) && \
		   ((*(long *)&(x) & 0x007fffffL)!=0000000000L))

#define isinff(x) (((*(long *)&(x) & 0x7f800000L)==0x7f800000L) && \
		   ((*(long *)&(x) & 0x007fffffL)==0000000000L))

#define finitef(x) (((*(long *)&(x) & 0x7f800000L)!=0x7f800000L))

#ifdef _DOUBLE_IS_32BITS
#endif 

#endif 

/* math.h -- Definitions for the math floating point package.  */

#ifndef  _MATH_H_
#ifdef __cplusplus
#endif
#define  _MATH_H_

/* This header file provides the reentrancy.  */

#ifndef _SYS_REENT_H_
#endif 

#ifndef __IEEE_BIG_ENDIAN
#ifndef __IEEE_LITTLE_ENDIAN
#endif 
#endif 

/* Provide support for both ANSI and non-ANSI environments.  */

#ifndef	_ANSIDECL_H_
#endif 

#ifndef HUGE_VAL

union __dmath
{
  __uint32_t i[2];
  double d;
};

extern __IMPORT const union __dmath __infinity[];

#define HUGE_VAL (__infinity[0].d)

#endif 

#ifndef __math_68881
extern double atan _PARAMS((double));
extern double cos _PARAMS((double));
extern double sin _PARAMS((double));
extern double tan _PARAMS((double));
extern double tanh _PARAMS((double));
extern double frexp _PARAMS((double, int *));
extern double modf _PARAMS((double, double *));
extern double ceil _PARAMS((double));
extern double fabs _PARAMS((double));
extern double floor _PARAMS((double));
#endif 

#ifndef _REENT_ONLY
#ifndef __math_6881
extern double acos _PARAMS((double));
extern double asin _PARAMS((double));
extern double atan2 _PARAMS((double, double));
extern double cosh _PARAMS((double));
extern double sinh _PARAMS((double));
extern double exp _PARAMS((double));
extern double ldexp _PARAMS((double, int));
extern double log _PARAMS((double));
extern double log10 _PARAMS((double));
extern double pow _PARAMS((double, double));
extern double sqrt _PARAMS((double));
extern double fmod _PARAMS((double, double));
#endif 
#endif 

#ifndef __STRICT_ANSI__

extern double infinity _PARAMS((void));
extern double nan _PARAMS((void));
extern int isnan _PARAMS((double));
extern int isinf _PARAMS((double));
extern int finite _PARAMS((double));
extern double copysign _PARAMS((double, double));
extern int ilogb _PARAMS((double));

extern double asinh _PARAMS((double));
extern double cbrt _PARAMS((double));
extern double nextafter _PARAMS((double, double));
extern double rint _PARAMS((double));
extern double scalbn _PARAMS((double, int));

#ifndef __math_68881
extern double log1p _PARAMS((double));
extern double expm1 _PARAMS((double));
#endif 

#ifndef _REENT_ONLY
extern double acosh _PARAMS((double));
extern double atanh _PARAMS((double));
extern double remainder _PARAMS((double, double));
extern double gamma _PARAMS((double));
extern double gamma_r _PARAMS((double, int *));
extern double lgamma _PARAMS((double));
extern double lgamma_r _PARAMS((double, int *));
extern double erf _PARAMS((double));
extern double erfc _PARAMS((double));
extern double y0 _PARAMS((double));
extern double y1 _PARAMS((double));
extern double yn _PARAMS((int, double));
extern double j0 _PARAMS((double));
extern double j1 _PARAMS((double));
extern double jn _PARAMS((int, double));
#define log2(x) (log (x) / M_LOG2_E)

#ifndef __math_68881
extern double hypot _PARAMS((double, double));
#endif

extern double drem _PARAMS((double, double));

#endif 

extern float atanf _PARAMS((float));
extern float cosf _PARAMS((float));
extern float sinf _PARAMS((float));
extern float tanf _PARAMS((float));
extern float tanhf _PARAMS((float));
extern float frexpf _PARAMS((float, int *));
extern float modff _PARAMS((float, float *));
extern float ceilf _PARAMS((float));
extern float fabsf _PARAMS((float));
extern float floorf _PARAMS((float));

#ifndef _REENT_ONLY
extern float acosf _PARAMS((float));
extern float asinf _PARAMS((float));
extern float atan2f _PARAMS((float, float));
extern float coshf _PARAMS((float));
extern float sinhf _PARAMS((float));
extern float expf _PARAMS((float));
extern float ldexpf _PARAMS((float, int));
extern float logf _PARAMS((float));
extern float log10f _PARAMS((float));
extern float powf _PARAMS((float, float));
extern float sqrtf _PARAMS((float));
extern float fmodf _PARAMS((float, float));
#endif 

extern float infinityf _PARAMS((void));
extern float nanf _PARAMS((void));
extern int isnanf _PARAMS((float));
extern int isinff _PARAMS((float));
extern int finitef _PARAMS((float));
extern float copysignf _PARAMS((float, float));
extern int ilogbf _PARAMS((float));

extern float asinhf _PARAMS((float));
extern float cbrtf _PARAMS((float));
extern float nextafterf _PARAMS((float, float));
extern float rintf _PARAMS((float));
extern float scalbnf _PARAMS((float, int));
extern float log1pf _PARAMS((float));
extern float expm1f _PARAMS((float));

#ifndef _REENT_ONLY
extern float acoshf _PARAMS((float));
extern float atanhf _PARAMS((float));
extern float remainderf _PARAMS((float, float));
extern float gammaf _PARAMS((float));
extern float gammaf_r _PARAMS((float, int *));
extern float lgammaf _PARAMS((float));
extern float lgammaf_r _PARAMS((float, int *));
extern float erff _PARAMS((float));
extern float erfcf _PARAMS((float));
extern float y0f _PARAMS((float));
extern float y1f _PARAMS((float));
extern float ynf _PARAMS((int, float));
extern float j0f _PARAMS((float));
extern float j1f _PARAMS((float));
extern float jnf _PARAMS((int, float));
#define log2f(x) (logf (x) / (float) M_LOG2_E)
extern float hypotf _PARAMS((float, float));

extern float dremf _PARAMS((float, float));

#endif 


#ifdef __cplusplus
#else
struct exception 
#endif
{
  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
  int err;
};

#ifdef __cplusplus
#else
extern int matherr _PARAMS((struct exception *e));
#endif

#define DOMAIN 1
#define SING 2
#define OVERFLOW 3
#define UNDERFLOW 4
#define TLOSS 5
#define PLOSS 6

#define M_E		2.7182818284590452354
#define M_LOG2E		1.4426950408889634074
#define M_LOG10E	0.43429448190325182765
#define M_LN2		0.69314718055994530942
#define M_LN10		2.30258509299404568402
#define M_PI		3.14159265358979323846
#define M_TWOPI         (M_PI * 2.0)
#define M_PI_2		1.57079632679489661923
#define M_PI_4		0.78539816339744830962
#define M_3PI_4		2.3561944901923448370E0
#define M_SQRTPI        1.77245385090551602792981
#define M_1_PI		0.31830988618379067154
#define M_2_PI		0.63661977236758134308
#define M_2_SQRTPI	1.12837916709551257390
#define M_SQRT2		1.41421356237309504880
#define M_SQRT1_2	0.70710678118654752440
#define M_LN2LO         1.9082149292705877000E-10
#define M_LN2HI         6.9314718036912381649E-1
#define M_SQRT3   	1.73205080756887719000
#define M_IVLN10        0.43429448190325182765 
#define M_LOG2_E        0.693147180559945309417
#define M_INVLN2        1.4426950408889633870E0  

enum __fdlibm_version
{
  __fdlibm_ieee = -1,
  __fdlibm_svid,
  __fdlibm_xopen,
  __fdlibm_posix
};

#define _LIB_VERSION_TYPE enum __fdlibm_version
#define _LIB_VERSION __fdlib_version

extern __IMPORT _CONST _LIB_VERSION_TYPE _LIB_VERSION;

#define _IEEE_  __fdlibm_ieee
#define _SVID_  __fdlibm_svid
#define _XOPEN_ __fdlibm_xopen
#define _POSIX_ __fdlibm_posix

#endif 

#ifdef __FAST_MATH__
#endif

#ifdef __cplusplus
#endif
#endif 

/* float.h for target with IEEE 32 bit and 64 bit floating point formats */
#ifndef _FLOAT_H_
#define _FLOAT_H_

   
#undef FLT_RADIX
#define FLT_RADIX 2
   
#undef FLT_MANT_DIG
#define FLT_MANT_DIG 24
   
#undef FLT_DIG
#define FLT_DIG 6
   
#undef FLT_ROUNDS
#define FLT_ROUNDS 1
   
#undef FLT_EPSILON
#define FLT_EPSILON 1.19209290e-07F
   
#undef FLT_MIN_EXP
#define FLT_MIN_EXP (-125)
   
#undef FLT_MIN
#define FLT_MIN 1.17549435e-38F
   
#undef FLT_MIN_10_EXP
#define FLT_MIN_10_EXP (-37)
   
#undef FLT_MAX_EXP
#define FLT_MAX_EXP 128
   
#undef FLT_MAX
#define FLT_MAX 3.40282347e+38F
   
#undef FLT_MAX_10_EXP
#define FLT_MAX_10_EXP 38

   
#undef DBL_MANT_DIG
#define DBL_MANT_DIG 53
   
#undef DBL_DIG
#define DBL_DIG 15
   
#undef DBL_EPSILON
#define DBL_EPSILON 2.2204460492503131e-16
   
#undef DBL_MIN_EXP
#define DBL_MIN_EXP (-1021)
   
#undef DBL_MIN
#define DBL_MIN 2.2250738585072014e-308
   
#undef DBL_MIN_10_EXP
#define DBL_MIN_10_EXP (-307)
   
#undef DBL_MAX_EXP
#define DBL_MAX_EXP 1024
   
#undef DBL_MAX
#define DBL_MAX 1.7976931348623157e+308
   
#undef DBL_MAX_10_EXP
#define DBL_MAX_10_EXP 308

   
#undef LDBL_MANT_DIG
#define LDBL_MANT_DIG 53
   
#undef LDBL_DIG
#define LDBL_DIG 15
   
#undef LDBL_EPSILON
#define LDBL_EPSILON 2.2204460492503131e-16L
   
#undef LDBL_MIN_EXP
#define LDBL_MIN_EXP (-1021)
   
#undef LDBL_MIN
#define LDBL_MIN 2.2250738585072014e-308L
   
#undef LDBL_MIN_10_EXP
#define LDBL_MIN_10_EXP (-307)
   
#undef LDBL_MAX_EXP
#define LDBL_MAX_EXP 1024
   
#undef LDBL_MAX
#define LDBL_MAX 1.7976931348623157e+308L
   
#undef LDBL_MAX_10_EXP
#define LDBL_MAX_10_EXP 308

#endif 

/* errno is not a global variable, because that would make using it
   non-reentrant.  Instead, its address is returned by the function
   func_001C313C.  */

#ifndef _SYS_ERRNO_H_
#ifdef __cplusplus
#endif
#define _SYS_ERRNO_H_

/* This header file provides the reentrancy.  */

#ifndef _SYS_REENT_H_
#endif 

#ifndef _REENT_ONLY
#define errno (*func_001C313C())
extern int *func_001C313C _PARAMS ((void));
#endif


#define __errno_r(ptr) ((ptr)->_errno)

#define	EPERM 1		
#define	ENOENT 2	
#define	ESRCH 3		
#define	EINTR 4		
#define	EIO 5		
#define	ENXIO 6		
#define	E2BIG 7		
#define	ENOEXEC 8	
#define	EBADF 9		
#define	ECHILD 10	
#define	EAGAIN 11	
#define	ENOMEM 12	
#define	EACCES 13	
#define	EFAULT 14	
#define	ENOTBLK 15	
#define	EBUSY 16	
#define	EEXIST 17	
#define	EXDEV 18	
#define	ENODEV 19	
#define	ENOTDIR 20	
#define	EISDIR 21	
#define	EINVAL 22	
#define	ENFILE 23	
#define	EMFILE 24	
#define	ENOTTY 25	
#define	ETXTBSY 26	
#define	EFBIG 27	
#define	ENOSPC 28	
#define	ESPIPE 29	
#define	EROFS 30	
#define	EMLINK 31	
#define	EPIPE 32	
#define	EDOM 33		
#define	ERANGE 34	
#define	ENOMSG 35	
#define	EIDRM 36	
#define	ECHRNG 37	
#define	EL2NSYNC 38	
#define	EL3HLT 39	
#define	EL3RST 40	
#define	ELNRNG 41	
#define	EUNATCH 42	
#define	ENOCSI 43	
#define	EL2HLT 44	
#define	EDEADLK 45	
#define	ENOLCK 46	
#define EBADE 50	
#define EBADR 51	
#define EXFULL 52	
#define ENOANO 53	
#define EBADRQC 54	
#define EBADSLT 55	
#define EDEADLOCK 56	
#define EBFONT 57	
#define ENOSTR 60	
#define ENODATA 61	
#define ETIME 62	
#define ENOSR 63	
#define ENONET 64	
#define ENOPKG 65	
#define EREMOTE 66	
#define ENOLINK 67	
#define EADV 68		
#define ESRMNT 69	
#define	ECOMM 70	
#define EPROTO 71	
#define	EMULTIHOP 74	
#define	ELBIN 75	
#define	EDOTDOT 76	
#define EBADMSG 77	
#define ENOTUNIQ 80	
#define EBADFD 81	
#define EREMCHG 82	
#define ELIBACC 83	
#define ELIBBAD 84	
#define ELIBSCN 85	
#define ELIBMAX 86	
#define ELIBEXEC 87	
#define ENOSYS 88	
#define ENMFILE 89      
#define ENOTEMPTY 90	
#define ENAMETOOLONG 91	
#define ELOOP 92	
#define EOPNOTSUPP 95	
#define EPFNOSUPPORT 96 
#define ECONNRESET 104  
#define ENOBUFS 105	
#define EAFNOSUPPORT 106 
#define EPROTOTYPE 107	
#define ENOTSOCK 108	
#define ENOPROTOOPT 109	
#define ESHUTDOWN 110	
#define ECONNREFUSED 111	
#define EADDRINUSE 112		
#define ECONNABORTED 113	
#define ENETUNREACH 114		
#define ENETDOWN 115		
#define ETIMEDOUT 116		
#define EHOSTDOWN 117		
#define EHOSTUNREACH 118	
#define EINPROGRESS 119		
#define EALREADY 120		
#define EDESTADDRREQ 121	
#define EMSGSIZE 122		
#define EPROTONOSUPPORT 123	
#define ESOCKTNOSUPPORT 124	
#define EADDRNOTAVAIL 125	
#define ENETRESET 126
#define EISCONN 127		
#define ENOTCONN 128		
#define ETOOMANYREFS 129
#define EPROCLIM 130
#define EUSERS 131
#define EDQUOT 132
#define ESTALE 133
#define ENOTSUP 134		
#define ENOMEDIUM 135   
#define ENOSHARE 136    

#define EWOULDBLOCK EAGAIN	

#define __ELASTERROR 2000	

#ifdef __cplusplus
#endif
#endif 

#ifndef __SYS_CONFIG_H__
#endif 

#ifdef __IEEE_LITTLE_ENDIAN
#define IEEE_8087
#endif

#ifdef __IEEE_BIG_ENDIAN
#endif

#ifdef __Z8000__
#endif

#ifdef DEBUG
#endif

#ifdef Unsigned_Shifts
#else
#define Sign_Extend(a,b) 
#endif

#if defined(IEEE_8087) + defined(IEEE_MC68k) + defined(VAX) + defined(IBM) != 1
#endif

union double_union
{
  double d;
  __uint32_t i[2];
};

#ifdef IEEE_8087
#define word0(x) (x.i[1])
#define word1(x) (x.i[0])
#else
#endif

#if defined(IEEE_8087) + defined(VAX)
#define Storeinc(a,b,c) (((unsigned short *)a)[1] = (unsigned short)b, \
((unsigned short *)a)[0] = (unsigned short)c, a++)
#else
#endif

#if defined(IEEE_8087) + defined(IEEE_MC68k)
#if defined (_DOUBLE_IS_32BITS) 
#else

#define Exp_shift  20
#define Exp_shift1 20
#define Exp_msk1    ((__uint32_t)0x100000L)
#define Exp_msk11   ((__uint32_t)0x100000L)
#define Exp_mask  ((__uint32_t)0x7ff00000L)
#define P 53
#define Bias 1023
#define IEEE_Arith
#define Emin (-1022)
#define Exp_1  ((__uint32_t)0x3ff00000L)
#define Exp_11 ((__uint32_t)0x3ff00000L)
#define Ebits 11
#define Frac_mask  ((__uint32_t)0xfffffL)
#define Frac_mask1 ((__uint32_t)0xfffffL)
#define Ten_pmax 22
#define Bletch 0x10
#define Bndry_mask  ((__uint32_t)0xfffffL)
#define Bndry_mask1 ((__uint32_t)0xfffffL)
#define LSB 1
#define Sign_bit ((__uint32_t)0x80000000L)
#define Log2P 1
#define Tiny0 0
#define Tiny1 1
#define Quick_max 14
#define Int_max 14
#define Infinite(x) (word0(x) == ((__uint32_t)0x7ff00000L)) 
#endif

#else
#endif

#ifndef IEEE_Arith
#endif

#ifdef RND_PRODQUOT
#else
#define rounded_product(a,b) a *= b
#define rounded_quotient(a,b) a /= b
#endif

#define Big0 (Frac_mask1 | Exp_msk1*(DBL_MAX_EXP+Bias-1))
#define Big1 ((__uint32_t)0xffffffffL)

#ifndef Just_16

#ifndef Pack_32
#define Pack_32
#endif
#endif

#ifdef __cplusplus
#endif

typedef struct _Bigint _Bigint;

#define Balloc	_Balloc
#define Bfree	_Bfree
#define multadd _multadd
#define s2b	_s2b
#define lo0bits _lo0bits
#define hi0bits _hi0bits
#define i2b	_i2b
#define mult	_multiply
#define pow5mult	_pow5mult
#define lshift	_lshift
#define cmp	__mcmp
#define diff	__mdiff
#define ulp 	_ulp
#define b2d	_b2d
#define d2b	_d2b
#define ratio	_ratio

#define tens __mprec_tens
#define bigtens __mprec_bigtens
#define tinytens __mprec_tinytens

struct _reent ;
double 		_EXFUN(ulp,(double x));
double		_EXFUN(b2d,(_Bigint *a , int *e));
_Bigint *	_EXFUN(Balloc,(struct _reent *p, int k));
void 		_EXFUN(Bfree,(struct _reent *p, _Bigint *v));
_Bigint *	_EXFUN(multadd,(struct _reent *p, _Bigint *, int, int));
_Bigint *	_EXFUN(s2b,(struct _reent *, const char*, int, int, __ULong));
_Bigint	*	_EXFUN(i2b,(struct _reent *,int));
_Bigint *	_EXFUN(mult, (struct _reent *, _Bigint *, _Bigint *));
_Bigint *	_EXFUN(pow5mult, (struct _reent *, _Bigint *, int k));
int 		_EXFUN(hi0bits,(__ULong));
int 		_EXFUN(lo0bits,(__ULong *));
_Bigint *        _EXFUN(d2b,(struct _reent *p, double d, int *e, int *bits));
_Bigint *        _EXFUN(lshift,(struct _reent *p, _Bigint *b, int k));
_Bigint *        _EXFUN(diff,(struct _reent *p, _Bigint *a, _Bigint *b));
int             _EXFUN(cmp,(_Bigint *a, _Bigint *b));

double		_EXFUN(ratio,(_Bigint *a, _Bigint *b));
#define Bcopy(x,y) memcpy((char *)&x->_sign, (char *)&y->_sign, y->_wds*sizeof(__Long) + 2*sizeof(int))

#if defined(_DOUBLE_IS_32BITS) && defined(__v800)
#else
#define n_bigtens 5
#endif

extern _CONST double tinytens[];
extern _CONST double bigtens[];
extern _CONST double tens[];

double _EXFUN(_mprec_log10,(int));

static int
_DEFUN (quorem,
	(b, S),
	_Bigint * b _AND _Bigint * S);
#ifdef Pack_32
#endif
#ifdef DEBUG
#endif
#ifdef DEBUG
#endif
#ifdef Pack_32
#else
#endif
#ifdef Pack_32
#else
#endif

char *
_DEFUN (_dtoa_r,
	(ptr, _d, mode, ndigits, decpt, sign, rve),
	struct _reent *ptr _AND
	double _d _AND
	int mode _AND
	int ndigits _AND
	int *decpt _AND
	int *sign _AND
	char **rve)

{
  

  int bbits, b2, b5, be, dig, i, ieps, ilim, ilim0, ilim1, j, j1, k, k0,
    k_check, leftright, m2, m5, s2, s5, spec_case, try_quick;
  union double_union d, d2, eps;
  __Long L;
#ifndef Sudden_Underflow
  int denorm;
  __ULong x;
#endif
  _Bigint *b, *b1, *delta, *mlo, *mhi, *S;
  double ds;
  char *s, *s0;

  d.d = _d;

  if (ptr->_result)
    {
      ptr->_result->_k = ptr->_result_k;
      ptr->_result->_maxwds = 1 << ptr->_result_k;
      Bfree (ptr, ptr->_result);
      ptr->_result = 0;
    }

  if (word0 (d) & Sign_bit)
    {
      
      *sign = 1;
      word0 (d) &= ~Sign_bit;	
    }
  else
    *sign = 0;

#if defined(IEEE_Arith) + defined(VAX)
#ifdef IEEE_Arith
  if ((word0 (d) & Exp_mask) == Exp_mask)
#else
#endif
    {
      
      *decpt = 9999;
      s =
#ifdef IEEE_Arith
	!word1 (d) && !(word0 (d) & 0xfffff) ? "Infinity" :
#endif
	"NaN";
      if (rve)
	*rve =
#ifdef IEEE_Arith
	  s[3] ? s + 8 :
#endif
	  s + 3;
      return s;
    }
#endif
#ifdef IBM
#endif
  if (!d.d)
    {
      *decpt = 1;
      s = "0";
      if (rve)
	*rve = s + 1;
      return s;
    }

  b = d2b (ptr, d.d, &be, &bbits);
#ifdef Sudden_Underflow
#else
  if ((i = (int) (word0 (d) >> Exp_shift1 & (Exp_mask >> Exp_shift1))) != 0)
    {
#endif
      d2.d = d.d;
      word0 (d2) &= Frac_mask1;
      word0 (d2) |= Exp_11;
#ifdef IBM
#endif

      

      i -= Bias;
#ifdef IBM
#endif
#ifndef Sudden_Underflow
      denorm = 0;
    }
  else
    {
      

      i = bbits + be + (Bias + (P - 1) - 1);
      x = (i > 32) ? (word0 (d) << (64 - i)) | (word1 (d) >> (i - 32))
       : (word1 (d) << (32 - i));
      d2.d = x;
      word0 (d2) -= 31 * Exp_msk1;	
      i -= (Bias + (P - 1) - 1) + 1;
      denorm = 1;
    }
#endif
  ds = (d2.d - 1.5) * 0.289529654602168 + 0.1760912590558 + i * 0.301029995663981;
  k = (int) ds;
  if (ds < 0. && ds != k)
    k--;			
  k_check = 1;
  if (k >= 0 && k <= Ten_pmax)
    {
      if (d.d < tens[k])
	k--;
      k_check = 0;
    }
  j = bbits - i - 1;
  if (j >= 0)
    {
      b2 = 0;
      s2 = j;
    }
  else
    {
      b2 = -j;
      s2 = 0;
    }
  if (k >= 0)
    {
      b5 = 0;
      s5 = k;
      s2 += k;
    }
  else
    {
      b2 -= k;
      b5 = -k;
      s5 = 0;
    }
  if (mode < 0 || mode > 9)
    mode = 0;
  try_quick = 1;
  if (mode > 5)
    {
      mode -= 4;
      try_quick = 0;
    }
  leftright = 1;
  ilim = ilim1 = -1;
  switch (mode)
    {
    case 0:
    case 1:
      i = 18;
      ndigits = 0;
      break;
    case 2:
      leftright = 0;
      
    case 4:
      if (ndigits <= 0)
	ndigits = 1;
      ilim = ilim1 = i = ndigits;
      break;
    case 3:
      leftright = 0;
      
    case 5:
      i = ndigits + k + 1;
      ilim = i;
      ilim1 = i - 1;
      if (i <= 0)
	i = 1;
    }
  j = sizeof (__ULong);
  for (ptr->_result_k = 0; sizeof (_Bigint) - sizeof (__ULong) + j <= i;
       j <<= 1)
    ptr->_result_k++;
  ptr->_result = Balloc (ptr, ptr->_result_k);
  s = s0 = (char *) ptr->_result;

  if (ilim >= 0 && ilim <= Quick_max && try_quick)
    {
      

      i = 0;
      d2.d = d.d;
      k0 = k;
      ilim0 = ilim;
      ieps = 2;			
      if (k > 0)
	{
	  ds = tens[k & 0xf];
	  j = k >> 4;
	  if (j & Bletch)
	    {
	      
	      j &= Bletch - 1;
	      d.d /= bigtens[n_bigtens - 1];
	      ieps++;
	    }
	  for (; j; j >>= 1, i++)
	    if (j & 1)
	      {
		ieps++;
		ds *= bigtens[i];
	      }
	  d.d /= ds;
	}
      else if ((j1 = -k) != 0)
	{
	  d.d *= tens[j1 & 0xf];
	  for (j = j1 >> 4; j; j >>= 1, i++)
	    if (j & 1)
	      {
		ieps++;
		d.d *= bigtens[i];
	      }
	}
      if (k_check && d.d < 1. && ilim > 0)
	{
	  if (ilim1 <= 0)
	    goto fast_failed;
	  ilim = ilim1;
	  k--;
	  d.d *= 10.;
	  ieps++;
	}
      eps.d = ieps * d.d + 7.;
      word0 (eps) -= (P - 1) * Exp_msk1;
      if (ilim == 0)
	{
	  S = mhi = 0;
	  d.d -= 5.;
	  if (d.d > eps.d)
	    goto one_digit;
	  if (d.d < -eps.d)
	    goto no_digits;
	  goto fast_failed;
	}
#ifndef No_leftright
      if (leftright)
	{
	  

	  eps.d = 0.5 / tens[ilim - 1] - eps.d;
	  for (i = 0;;)
	    {
	      L = d.d;
	      d.d -= L;
	      *s++ = '0' + (int) L;
	      if (d.d < eps.d)
		goto ret1;
	      if (1. - d.d < eps.d)
		goto bump_up;
	      if (++i >= ilim)
		break;
	      eps.d *= 10.;
	      d.d *= 10.;
	    }
	}
      else
	{
#endif
	  
	  eps.d *= tens[ilim - 1];
	  for (i = 1;; i++, d.d *= 10.)
	    {
	      L = d.d;
	      d.d -= L;
	      *s++ = '0' + (int) L;
	      if (i == ilim)
		{
		  if (d.d > 0.5 + eps.d)
		    goto bump_up;
		  else if (d.d < 0.5 - eps.d)
		    {
		      while (*--s == '0');
		      s++;
		      goto ret1;
		    }
		  break;
		}
	    }
#ifndef No_leftright
	}
#endif
    fast_failed:
      s = s0;
      d.d = d2.d;
      k = k0;
      ilim = ilim0;
    }

  

  if (be >= 0 && k <= Int_max)
    {
      
      ds = tens[k];
      if (ndigits < 0 && ilim <= 0)
	{
	  S = mhi = 0;
	  if (ilim < 0 || d.d <= 5 * ds)
	    goto no_digits;
	  goto one_digit;
	}
      for (i = 1;; i++)
	{
	  L = d.d / ds;
	  d.d -= L * ds;
#ifdef Check_FLT_ROUNDS
#endif
	  *s++ = '0' + (int) L;
	  if (i == ilim)
	    {
	      d.d += d.d;
             if ((d.d > ds) || ((d.d == ds) && (L & 1)))
		{
		bump_up:
		  while (*--s == '9')
		    if (s == s0)
		      {
			k++;
			*s = '0';
			break;
		      }
		  ++*s++;
		}
	      break;
	    }
	  if (!(d.d *= 10.))
	    break;
	}
      goto ret1;
    }

  m2 = b2;
  m5 = b5;
  mhi = mlo = 0;
  if (leftright)
    {
      if (mode < 2)
	{
	  i =
#ifndef Sudden_Underflow
	    denorm ? be + (Bias + (P - 1) - 1 + 1) :
#endif
#ifdef IBM
#else
	    1 + P - bbits;
#endif
	}
      else
	{
	  j = ilim - 1;
	  if (m5 >= j)
	    m5 -= j;
	  else
	    {
	      s5 += j -= m5;
	      b5 += j;
	      m5 = 0;
	    }
	  if ((i = ilim) < 0)
	    {
	      m2 -= i;
	      i = 0;
	    }
	}
      b2 += i;
      s2 += i;
      mhi = i2b (ptr, 1);
    }
  if (m2 > 0 && s2 > 0)
    {
      i = m2 < s2 ? m2 : s2;
      b2 -= i;
      m2 -= i;
      s2 -= i;
    }
  if (b5 > 0)
    {
      if (leftright)
	{
	  if (m5 > 0)
	    {
	      mhi = pow5mult (ptr, mhi, m5);
	      b1 = mult (ptr, mhi, b);
	      Bfree (ptr, b);
	      b = b1;
	    }
         if ((j = b5 - m5) != 0)
	    b = pow5mult (ptr, b, j);
	}
      else
	b = pow5mult (ptr, b, b5);
    }
  S = i2b (ptr, 1);
  if (s5 > 0)
    S = pow5mult (ptr, S, s5);

  

  spec_case = 0;
  if (mode < 2)
    {
      if (!word1 (d) && !(word0 (d) & Bndry_mask)
#ifndef Sudden_Underflow
	  && word0 (d) & Exp_mask
#endif
	)
	{
	  
	  b2 += Log2P;
	  s2 += Log2P;
	  spec_case = 1;
	}
    }

  

#ifdef Pack_32
  if ((i = ((s5 ? 32 - hi0bits (S->_x[S->_wds - 1]) : 1) + s2) & 0x1f) != 0)
    i = 32 - i;
#else
#endif
  if (i > 4)
    {
      i -= 4;
      b2 += i;
      m2 += i;
      s2 += i;
    }
  else if (i < 4)
    {
      i += 28;
      b2 += i;
      m2 += i;
      s2 += i;
    }
  if (b2 > 0)
    b = lshift (ptr, b, b2);
  if (s2 > 0)
    S = lshift (ptr, S, s2);
  if (k_check)
    {
      if (cmp (b, S) < 0)
	{
	  k--;
	  b = multadd (ptr, b, 10, 0);	
	  if (leftright)
	    mhi = multadd (ptr, mhi, 10, 0);
	  ilim = ilim1;
	}
    }
  if (ilim <= 0 && mode > 2)
    {
      if (ilim < 0 || cmp (b, S = multadd (ptr, S, 5, 0)) <= 0)
	{
	  
	no_digits:
	  k = -1 - ndigits;
	  goto ret;
	}
    one_digit:
      *s++ = '1';
      k++;
      goto ret;
    }
  if (leftright)
    {
      if (m2 > 0)
	mhi = lshift (ptr, mhi, m2);

      

      mlo = mhi;
      if (spec_case)
	{
	  mhi = Balloc (ptr, mhi->_k);
	  Bcopy (mhi, mlo);
	  mhi = lshift (ptr, mhi, Log2P);
	}

      for (i = 1;; i++)
	{
	  dig = quorem (b, S) + '0';
	  

	  j = cmp (b, mlo);
	  delta = diff (ptr, S, mhi);
	  j1 = delta->_sign ? 1 : cmp (b, delta);
	  Bfree (ptr, delta);
#ifndef ROUND_BIASED
	  if (j1 == 0 && !mode && !(word1 (d) & 1))
	    {
	      if (dig == '9')
		goto round_9_up;
	      if (j > 0)
		dig++;
	      *s++ = dig;
	      goto ret;
	    }
#endif
         if ((j < 0) || ((j == 0) && !mode
#ifndef ROUND_BIASED
	      && !(word1 (d) & 1)
#endif
           ))
	    {
	      if (j1 > 0)
		{
		  b = lshift (ptr, b, 1);
		  j1 = cmp (b, S);
                 if (((j1 > 0) || ((j1 == 0) && (dig & 1)))
		      && dig++ == '9')
		    goto round_9_up;
		}
	      *s++ = dig;
	      goto ret;
	    }
	  if (j1 > 0)
	    {
	      if (dig == '9')
		{		
		round_9_up:
		  *s++ = '9';
		  goto roundoff;
		}
	      *s++ = dig + 1;
	      goto ret;
	    }
	  *s++ = dig;
	  if (i == ilim)
	    break;
	  b = multadd (ptr, b, 10, 0);
	  if (mlo == mhi)
	    mlo = mhi = multadd (ptr, mhi, 10, 0);
	  else
	    {
	      mlo = multadd (ptr, mlo, 10, 0);
	      mhi = multadd (ptr, mhi, 10, 0);
	    }
	}
    }
  else
    for (i = 1;; i++)
      {
	*s++ = dig = quorem (b, S) + '0';
	if (i >= ilim)
	  break;
	b = multadd (ptr, b, 10, 0);
      }

  

  b = lshift (ptr, b, 1);
  j = cmp (b, S);
  if ((j > 0) || ((j == 0) && (dig & 1)))
    {
    roundoff:
      while (*--s == '9')
	if (s == s0)
	  {
	    k++;
	    *s++ = '1';
	    goto ret;
	  }
      ++*s++;
    }
  else
    {
      while (*--s == '0');
      s++;
    }
ret:
  Bfree (ptr, S);
  if (mhi)
    {
      if (mlo && mlo != mhi)
	Bfree (ptr, mlo);
      Bfree (ptr, mhi);
    }
ret1:
  Bfree (ptr, b);
  *s = 0;
  *decpt = k + 1;
  if (rve)
    *rve = s;
  return s0;
}

