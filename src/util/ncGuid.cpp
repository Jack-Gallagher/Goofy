#include "ncGuid.h"

const uint UUID_STR_SIZE = 32;

ncGuid::ncGuid(void)
{
    ::uuid_generate_random(_id);
}

ncGuid::~ncGuid(void)
{
}

std::string ncGuid::ToHexString(void)
{
    std::string hexUid(UUID_STR_SIZE, 0);
    for (uint i = 0; i < UUID_STR_SIZE; i += 2)
    {
        sprintf(&hexUid[i], "%x", _id[i]);
    }
    return hexUid;
}