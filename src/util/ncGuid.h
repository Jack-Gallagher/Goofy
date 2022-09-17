#ifndef __NC_GUID_H__
#define __NC_GUID_H__

#include <uuid.h>
#include <string>

class ncGuid
{
public:
    ncGuid(void);
    ~ncGuid(void);

    std::string ToHexString(void);

private:
    uuid_t _id;
};

#endif // end of __NC_GUID_H__
