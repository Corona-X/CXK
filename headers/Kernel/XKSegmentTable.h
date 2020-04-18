/**=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=**/
/* XKSegmentTable.h - Segmentation-related definitions (64-bit)    */
/**=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=**/
/* beeselmane -  1.16.2019 - 10:00 PM EST                          */
/**=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=**/

#ifndef __KERNEL_XKSEGMENTTABLE__
#define __KERNEL_XKSEGMENTTABLE__ 1

#include <Corona-X.h>
#include <System/OSCompilerMacros.h>
#include <System/OSTypes.h>

#if !kCXAssemblyCode

#define kXKGlobalSegmentTableEntryCount 5

#define kXKSegmentType64Bit             (1L << 53)
#define kXKSegmentPresent               (1L << 47)
#define kXKSegmentPriviledgeLevel(n)    (((UInt64)(n)) << 45)
#define kXKSegmentTypeCode              (1L << 44)
#define kXKSegmentTypeExecutable        (1L << 43)


typedef UInt64 XKSegmentDescriptor;

// This is a GPT. There are 4 entries and each is 8 bytes.
OSPrivate XKSegmentDescriptor gXKGlobalSegmentTable[kXKGlobalSegmentTableEntryCount];

#endif /* kCXAssemblyCode */

#endif /* !defined(__KERNEL_XKSEGMENTTABLE__) */
