#include <Kernel/XKSegmentTable.h>
#include <System/OSTypes.h>

__attribute__((section("__DATA,__gpt"))) XKSegmentDescriptor gXKGlobalSegmentTable[kXKGlobalSegmentTableEntryCount] = {
    0,
    kXKSegmentType64Bit | kXKSegmentPresent | kXKSegmentPriviledgeLevel(0) | kXKSegmentTypeCode | kXKSegmentTypeExecutable,
    kXKSegmentType64Bit | kXKSegmentPresent | kXKSegmentPriviledgeLevel(1) | kXKSegmentTypeCode | kXKSegmentTypeExecutable,
    kXKSegmentType64Bit | kXKSegmentPresent | kXKSegmentPriviledgeLevel(2) | kXKSegmentTypeCode | kXKSegmentTypeExecutable,
    kXKSegmentType64Bit | kXKSegmentPresent | kXKSegmentPriviledgeLevel(3) | kXKSegmentTypeCode | kXKSegmentTypeExecutable
};
