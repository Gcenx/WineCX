/*
 * Winscard definitions
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#include "wine/winheader_enter.h"

/* Note that if you included winerror.h directly or indirectly,
 * none of these definitions will be used!
 */
#ifndef SCARD_S_SUCCESS

#define FACILITY_SYSTEM                       0
#define FACILITY_SCARD                       16

#define STATUS_SEVERITY_INFORMATIONAL    ((NTSTATUS) 0x00000001)
#define STATUS_SEVERITY_WARNING          ((NTSTATUS) 0x00000002)
#define STATUS_SEVERITY_ERROR            ((NTSTATUS) 0x00000003)

#define SCARD_S_SUCCESS                                    NO_ERROR
#define SCARD_F_INTERNAL_ERROR                             ((DWORD)0x80100001)
#define SCARD_E_CANCELLED                                  ((DWORD)0x80100002)
#define SCARD_E_INVALID_HANDLE                             ((DWORD)0x80100003)
#define SCARD_E_INVALID_PARAMETER                          ((DWORD)0x80100004)
#define SCARD_E_INVALID_TARGET                             ((DWORD)0x80100005)
#define SCARD_E_NO_MEMORY                                  ((DWORD)0x80100006)
#define SCARD_F_WAITED_TOO_LONG                            ((DWORD)0x80100007)
#define SCARD_E_INSUFFICIENT_BUFFER                        ((DWORD)0x80100008)
#define SCARD_E_UNKNOWN_READER                             ((DWORD)0x80100009)
#define SCARD_E_TIMEOUT                                    ((DWORD)0x8010000A)
#define SCARD_E_SHARING_VIOLATION                          ((DWORD)0x8010000B)
#define SCARD_E_NO_SMARTCARD                               ((DWORD)0x8010000C)
#define SCARD_E_UNKNOWN_CARD                               ((DWORD)0x8010000D)
#define SCARD_E_CANT_DISPOSE                               ((DWORD)0x8010000E)
#define SCARD_E_PROTO_MISMATCH                             ((DWORD)0x8010000F)
#define SCARD_E_NOT_READY                                  ((DWORD)0x80100010)
#define SCARD_E_INVALID_VALUE                              ((DWORD)0x80100011)
#define SCARD_E_SYSTEM_CANCELLED                           ((DWORD)0x80100012)
#define SCARD_F_COMM_ERROR                                 ((DWORD)0x80100013)
#define SCARD_F_UNKNOWN_ERROR                              ((DWORD)0x80100014)
#define SCARD_E_INVALID_ATR                                ((DWORD)0x80100015)
#define SCARD_E_NOT_TRANSACTED                             ((DWORD)0x80100016)
#define SCARD_E_READER_UNAVAILABLE                         ((DWORD)0x80100017)
#define SCARD_P_SHUTDOWN                                   ((DWORD)0x80100018)
#define SCARD_E_PCI_TOO_SMALL                              ((DWORD)0x80100019)
#define SCARD_E_READER_UNSUPPORTED                         ((DWORD)0x8010001A)
#define SCARD_E_DUPLICATE_READER                           ((DWORD)0x8010001B)
#define SCARD_E_CARD_UNSUPPORTED                           ((DWORD)0x8010001C)
#define SCARD_E_NO_SERVICE                                 ((DWORD)0x8010001D)
#define SCARD_E_SERVICE_STOPPED                            ((DWORD)0x8010001E)
#define SCARD_E_UNEXPECTED                                 ((DWORD)0x8010001F)
#define SCARD_E_ICC_INSTALLATION                           ((DWORD)0x80100020)
#define SCARD_E_ICC_CREATEORDER                            ((DWORD)0x80100021)
#define SCARD_E_UNSUPPORTED_FEATURE                        ((DWORD)0x80100022)
#define SCARD_E_DIR_NOT_FOUND                              ((DWORD)0x80100023)
#define SCARD_E_FILE_NOT_FOUND                             ((DWORD)0x80100024)
#define SCARD_E_NO_DIR                                     ((DWORD)0x80100025)
#define SCARD_E_NO_FILE                                    ((DWORD)0x80100026)
#define SCARD_E_NO_ACCESS                                  ((DWORD)0x80100027)
#define SCARD_E_WRITE_TOO_MANY                             ((DWORD)0x80100028)
#define SCARD_E_BAD_SEEK                                   ((DWORD)0x80100029)
#define SCARD_E_INVALID_CHV                                ((DWORD)0x8010002A)
#define SCARD_E_UNKNOWN_RES_MNG                            ((DWORD)0x8010002B)
#define SCARD_E_NO_SUCH_CERTIFICATE                        ((DWORD)0x8010002C)
#define SCARD_E_CERTIFICATE_UNAVAILABLE                    ((DWORD)0x8010002D)
#define SCARD_E_NO_READERS_AVAILABLE                       ((DWORD)0x8010002E)
#define SCARD_E_COMM_DATA_LOST                             ((DWORD)0x8010002F)
#define SCARD_E_NO_KEY_CONTAINER                           ((DWORD)0x80100030)
#define SCARD_E_SERVER_TOO_BUSY                            ((DWORD)0x80100031)
#define SCARD_W_UNSUPPORTED_CARD                           ((DWORD)0x80100065)
#define SCARD_W_UNRESPONSIVE_CARD                          ((DWORD)0x80100066)
#define SCARD_W_UNPOWERED_CARD                             ((DWORD)0x80100067)
#define SCARD_W_RESET_CARD                                 ((DWORD)0x80100068)
#define SCARD_W_REMOVED_CARD                               ((DWORD)0x80100069)
#define SCARD_W_SECURITY_VIOLATION                         ((DWORD)0x8010006A)
#define SCARD_W_WRONG_CHV                                  ((DWORD)0x8010006B)
#define SCARD_W_CHV_BLOCKED                                ((DWORD)0x8010006C)
#define SCARD_W_EOF                                        ((DWORD)0x8010006D)
#define SCARD_W_CANCELLED_BY_USER                          ((DWORD)0x8010006E)
#define SCARD_W_CARD_NOT_AUTHENTICATED                     ((DWORD)0x8010006F)
#define SCARD_W_CACHE_ITEM_NOT_FOUND                       ((DWORD)0x80100070)
#define SCARD_W_CACHE_ITEM_STALE                           ((DWORD)0x80100071)
#define SCARD_W_CACHE_ITEM_TOO_BIG                         ((DWORD)0x80100072)

#include "wine/winheader_exit.h"

#endif /* SCARD_S_SUCCESS */
