#include "unknown_fs.h"
namespace Jakt {
namespace unknown_fs {
ErrorOr<void> make_directory(String const path) {
{
warnln(String("NOT IMPLEMENTED: make_directory {}"),path);
return Error::from_errno(static_cast<i32>(38));
}
return {};
}

ErrorOr<String> current_directory() {
{
warnln(String("NOT IMPLEMENTED: current_directory"));
return Error::from_errno(static_cast<i32>(38));
}
}

}
} // namespace Jakt
