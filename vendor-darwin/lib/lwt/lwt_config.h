#ifndef __LWT_CONFIG_H
#define __LWT_CONFIG_H
//#define HAVE_LIBEV
#define HAVE_PTHREAD
//#define HAVE_EVENTFD
#define HAVE_FD_PASSING
//#define HAVE_GETCPU
//#define HAVE_AFFINITY
//#define HAVE_GET_CREDENTIALS_LINUX
//#define HAVE_GET_CREDENTIALS_NETBSD
//#define HAVE_GET_CREDENTIALS_OPENBSD
//#define HAVE_GET_CREDENTIALS_FREEBSD
#define HAVE_GETPEEREID
#define HAVE_FDATASYNC
//#define HAVE_NETDB_REENTRANT
//#define HAVE_REENTRANT_HOSTENT
#define NANOSEC(buf, field) buf->st_##field##timespec.tv_nsec
#if defined(HAVE_GET_CREDENTIALS_LINUX) || defined(HAVE_GET_CREDENTIALS_NETBSD) || defined(HAVE_GET_CREDENTIALS_OPENBSD) || defined(HAVE_GET_CREDENTIALS_FREEBSD) || defined(HAVE_GETPEEREID)
#  define HAVE_GET_CREDENTIALS
#endif
//#define LWT_ON_WINDOWS
#endif
