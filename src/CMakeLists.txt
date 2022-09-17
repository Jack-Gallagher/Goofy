PROJECT(GOOFY)

# 设置和兼容 cmake 版本
CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
CMAKE_POLICY(VERSION 3.0)

# 添加头文件目录
INCLUDE_DIRECTORIES(
    ${LEVELDB}/include
    ${SPDLOG}/include
    ${UUID}/include
    ${SRC}/public
    ${SRC}/common
)

# 添加依赖库目录
LINK_DIRECTORIES(
    ${LEVELDB}/lib
    ${SPDLOG}/lib
    ${UUID}/lib
)

AUX_SOURCE_DIRECTORY("common/"  GOOFY_SOURCE)
AUX_SOURCE_DIRECTORY("db/"      GOOFY_SOURCE)

ADD_LIBRARY(goofy ${GOOFY_SOURCE})

TARGET_LINK_LIBRARIES(goofy
    leveldb
    spdlog
    uuid
)