#ifndef MBGL_UTIL_UV
#define MBGL_UTIL_UV

#include <string>

typedef struct uv_async_s uv_async_t;
typedef struct uv_timer_s uv_timer_t;
typedef struct uv_handle_s uv_handle_t;
typedef struct uv_loop_s uv_loop_t;

namespace uv {

std::string cwd();

class rwlock;
class loop;
class async;
class worker;

}

#endif
