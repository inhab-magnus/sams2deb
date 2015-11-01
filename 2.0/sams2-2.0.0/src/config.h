/* src/config.h.  Generated from config.h.in by configure.  */
/* src/config.h.in.  Generated from configure.in by autoheader.  */

/* Define to 1 if the `closedir' function returns void instead of `int'. */
/* #undef CLOSEDIR_VOID */

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
/* #undef CRAY_STACKSEG_END */

/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* Define to 1 if using `getloadavg.c'. */
/* #undef C_GETLOADAVG */

/* Define to 1 for DGUX with <sys/dg_sys_info.h>. */
/* #undef DGUX */

/* Define to 1 if the `getloadavg' function needs to be run setuid or setgid.
   */
/* #undef GETLOADAVG_PRIVILEGED */

/* Define to 1 if you have the `alarm' function. */
#define HAVE_ALARM 1

/* Define to 1 if you have `alloca', as a function or macro. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#define HAVE_ALLOCA_H 1

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* Define to 1 if you have the `btowc' function. */
/* #undef HAVE_BTOWC */

/* Define to 1 if you have the declaration of `getenv', and to 0 if you don't.
   */
/* #undef HAVE_DECL_GETENV */

/* Define to 1 if you have the declaration of `getutent', and to 0 if you
   don't. */
#define HAVE_DECL_GETUTENT 1

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the `fork' function. */
#define HAVE_FORK 1

/* Define to 1 if you have the `getloadavg' function. */
#define HAVE_GETLOADAVG 1

/* Define to 1 if you have the `getmntent' function. */
#define HAVE_GETMNTENT 1

/* Define to 1 if you have the `getmntinfo' function. */
/* #undef HAVE_GETMNTINFO */

/* Define to 1 if you have the `inet_ntoa' function. */
#define HAVE_INET_NTOA 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <lber.h> header file. */
/* #undef HAVE_LBER_H */

/* Define to 1 if you have the `ldap_count_entries' function. */
/* #undef HAVE_LDAP_COUNT_ENTRIES */

/* Define to 1 if you have the `ldap_err2string' function. */
/* #undef HAVE_LDAP_ERR2STRING */

/* Define to 1 if you have the <ldap.h> header file. */
/* #undef HAVE_LDAP_H */

/* Define to 1 if you have the `ldap_sasl_bind_s' function. */
/* #undef HAVE_LDAP_SASL_BIND_S */

/* Define to 1 if you have the `ldap_search_ext_s' function. */
/* #undef HAVE_LDAP_SEARCH_EXT_S */

/* Define to 1 if you have the `ldap_unbind_ext_s' function. */
/* #undef HAVE_LDAP_UNBIND_EXT_S */

/* Define to 1 if you have the `dgc' library (-ldgc). */
/* #undef HAVE_LIBDGC */

/* Define to 1 if you have the `kstat' library (-lkstat). */
/* #undef HAVE_LIBKSTAT */

/* Define to 1 if you have the <mach/mach.h> header file. */
/* #undef HAVE_MACH_MACH_H */

/* Define to 1 if your system has a GNU libc compatible `malloc' function, and
   to 0 otherwise. */
#define HAVE_MALLOC 1

/* Define to 1 if you have the `mbsrtowcs' function. */
/* #undef HAVE_MBSRTOWCS */

/* Define to 1 if <wchar.h> declares mbstate_t. */
#define HAVE_MBSTATE_T 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `mempcpy' function. */
/* #undef HAVE_MEMPCPY */

/* Define to 1 if you have the `memset' function. */
#define HAVE_MEMSET 1

/* Define to 1 if you have the <mntent.h> header file. */
#define HAVE_MNTENT_H 1

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the <netdb.h> header file. */
#define HAVE_NETDB_H 1

/* Define to 1 if you have the <nlist.h> header file. */
/* #undef HAVE_NLIST_H */

/* Define to 1 if pcre is available */
#define HAVE_PCRE 1

/* Define to 1 if pcrecpp is available */
/* #undef HAVE_PCRECPP */

/* Define if your system has the /proc/uptime special file. */
#define HAVE_PROC_UPTIME 1

/* Define to 1 if you have the `pstat_getdynamic' function. */
/* #undef HAVE_PSTAT_GETDYNAMIC */

/* Define to 1 if you have the <sqlext.h> header file. */
/* #undef HAVE_SQLEXT_H */

/* Define to 1 if you have the <sqltypes.h> header file. */
/* #undef HAVE_SQLTYPES_H */

/* Define to 1 if you have the <sql.h> header file. */
/* #undef HAVE_SQL_H */

/* Define to 1 if stdbool.h conforms to C99. */
#define HAVE_STDBOOL_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the `strftime' function. */
#define HAVE_STRFTIME 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if `n_un.n_name' is a member of `struct nlist'. */
/* #undef HAVE_STRUCT_NLIST_N_UN_N_NAME */

/* Define to 1 if `ut_exit' is a member of `struct utmpx'. */
#define HAVE_STRUCT_UTMPX_UT_EXIT 1

/* Define to 1 if `ut_exit.e_exit' is a member of `struct utmpx'. */
#define HAVE_STRUCT_UTMPX_UT_EXIT_E_EXIT 1

/* Define to 1 if `ut_exit.e_termination' is a member of `struct utmpx'. */
#define HAVE_STRUCT_UTMPX_UT_EXIT_E_TERMINATION 1

/* Define to 1 if `ut_exit.ut_exit' is a member of `struct utmpx'. */
/* #undef HAVE_STRUCT_UTMPX_UT_EXIT_UT_EXIT */

/* Define to 1 if `ut_exit.ut_termination' is a member of `struct utmpx'. */
/* #undef HAVE_STRUCT_UTMPX_UT_EXIT_UT_TERMINATION */

/* Define to 1 if `ut_id' is a member of `struct utmpx'. */
#define HAVE_STRUCT_UTMPX_UT_ID 1

/* Define to 1 if `ut_name' is a member of `struct utmpx'. */
#define HAVE_STRUCT_UTMPX_UT_NAME 1

/* Define to 1 if `ut_pid' is a member of `struct utmpx'. */
#define HAVE_STRUCT_UTMPX_UT_PID 1

/* Define to 1 if `ut_type' is a member of `struct utmpx'. */
#define HAVE_STRUCT_UTMPX_UT_TYPE 1

/* Define to 1 if `ut_user' is a member of `struct utmpx'. */
#define HAVE_STRUCT_UTMPX_UT_USER 1

/* Define to 1 if `ut_exit' is a member of `struct utmp'. */
#define HAVE_STRUCT_UTMP_UT_EXIT 1

/* Define to 1 if `ut_exit.e_exit' is a member of `struct utmp'. */
#define HAVE_STRUCT_UTMP_UT_EXIT_E_EXIT 1

/* Define to 1 if `ut_exit.e_termination' is a member of `struct utmp'. */
#define HAVE_STRUCT_UTMP_UT_EXIT_E_TERMINATION 1

/* Define to 1 if `ut_exit.ut_exit' is a member of `struct utmp'. */
/* #undef HAVE_STRUCT_UTMP_UT_EXIT_UT_EXIT */

/* Define to 1 if `ut_exit.ut_termination' is a member of `struct utmp'. */
/* #undef HAVE_STRUCT_UTMP_UT_EXIT_UT_TERMINATION */

/* Define to 1 if `ut_id' is a member of `struct utmp'. */
#define HAVE_STRUCT_UTMP_UT_ID 1

/* Define to 1 if `ut_name' is a member of `struct utmp'. */
#define HAVE_STRUCT_UTMP_UT_NAME 1

/* Define to 1 if `ut_pid' is a member of `struct utmp'. */
#define HAVE_STRUCT_UTMP_UT_PID 1

/* Define to 1 if `ut_type' is a member of `struct utmp'. */
#define HAVE_STRUCT_UTMP_UT_TYPE 1

/* Define to 1 if `ut_user' is a member of `struct utmp'. */
#define HAVE_STRUCT_UTMP_UT_USER 1

/* Define to 1 if you have the <syslog.h> header file. */
#define HAVE_SYSLOG_H 1

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/mount.h> header file. */
#define HAVE_SYS_MOUNT_H 1

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/statvfs.h> header file. */
#define HAVE_SYS_STATVFS_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `utmpname' function. */
#define HAVE_UTMPNAME 1

/* Define to 1 if you have the `utmpxname' function. */
#define HAVE_UTMPXNAME 1

/* Define to 1 if you have the <utmpx.h> header file. */
#define HAVE_UTMPX_H 1

/* Define to 1 if you have the <utmp.h> header file. */
#define HAVE_UTMP_H 1

/* Define to 1 if you have the `vfork' function. */
#define HAVE_VFORK 1

/* Define to 1 if you have the <vfork.h> header file. */
/* #undef HAVE_VFORK_H */

/* Define to 1 if you have the <wchar.h> header file. */
/* #undef HAVE_WCHAR_H */

/* Define to 1 if you have the <wctype.h> header file. */
/* #undef HAVE_WCTYPE_H */

/* Define to 1 if you have the `wmempcpy' function. */
/* #undef HAVE_WMEMPCPY */

/* Define to 1 if `fork' works. */
#define HAVE_WORKING_FORK 1

/* Define to 1 if `vfork' works. */
#define HAVE_WORKING_VFORK 1

/* Define to 1 if the system has the type `_Bool'. */
#define HAVE__BOOL 1

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Define to 1 if your `struct nlist' has an `n_un' member. Obsolete, depend
   on `HAVE_STRUCT_NLIST_N_UN_N_NAME */
/* #undef NLIST_NAME_UNION */

/* Name of package */
#define PACKAGE "sams2"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "sams@nixdev.net"

/* Define to the full name of this package. */
#define PACKAGE_NAME "sams2"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "sams2 2.0.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "sams2"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "2.0.0"

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 on System V Release 4. */
/* #undef SVR4 */

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* Define to 1 for Encore UMAX. */
/* #undef UMAX */

/* Define to 1 for Encore UMAX 4.3 that has <inq_status/cpustats.h> instead of
   <sys/cpustats.h>. */
/* #undef UMAX4_3 */

/* Define to 1 if compile with dynamic plugin support */
#define USE_DL 1

/* Define to 1 if compile with LDAP API */
/* #undef USE_LDAP */

/* Define to 1 if compile with MySQL API */
#define USE_MYSQL 1

/* Define to 1 if use pcre for regular expressions */
#define USE_PCRE 1

/* Define to 1 if use pcrecpp for regular expressions */
/* #undef USE_PCRECPP */

/* Define to 1 if compile with PostgreSQL API */
/* #undef USE_PQ */

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Define to 1 if compile with unixODBC API */
/* #undef USE_UNIXODBC */

/* Version number of package */
#define VERSION "2.0.0"

/* Defined if compiling without MySQL API */
/* #undef WITHOUT_MYSQL */

/* Defined if compiling without pcre */
/* #undef WITHOUT_PCRE */

/* Defined if compiling without PostgreSQL API */
/* #undef WITHOUT_PQ */

/* Defined if compiling without unixODBC API */
/* #undef WITHOUT_UNIXODBC */

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to rpl_fnmatch if the replacement function should be used. */
/* #undef fnmatch */

/* Define to rpl_free if the replacement function should be used. */
/* #undef free */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to rpl_malloc if the replacement function should be used. */
/* #undef malloc */

/* Define to a type if <wchar.h> does not define. */
/* #undef mbstate_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define to the equivalent of the C99 'restrict' keyword, or to
   nothing if this is not supported.  Do not define if restrict is
   supported directly.  */
#define restrict __restrict
/* Work around a bug in Sun C++: it does not support _Restrict or
   __restrict__, even though the corresponding Sun C compiler ends up with
   "#define restrict _Restrict" or "#define restrict __restrict__" in the
   previous line.  Perhaps some future version of Sun C++ will work with
   restrict; if so, hopefully it defines __RESTRICT like Sun C does.  */
#if defined __SUNPRO_CC && !defined __RESTRICT
# define _Restrict
# define __restrict__
#endif

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define as `fork' if `vfork' does not work. */
/* #undef vfork */
