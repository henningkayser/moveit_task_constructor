#include "icons.h"
#include <QColor>

using namespace moveit_rviz_plugin::utils;

namespace moveit_rviz_plugin {
namespace icons {

const Icon CONNECT({ { QLatin1String(":icons/connectarrow.png"), QColor::fromRgba(0xff000000) } }, Icon::Tint);
const Icon FORWARD({ { QLatin1String(":icons/downarrow.png"), QColor::fromRgba(0xff000000) } }, Icon::Tint);
const Icon BACKWARD({ { QLatin1String(":icons/uparrow.png"), QColor::fromRgba(0xff000000) } }, Icon::Tint);
const Icon BOTHWAY({ { QLatin1String(":icons/updownarrow.png"), QColor::fromRgba(0xff000000) } }, Icon::Tint);
const Icon GENERATE({ { QLatin1String(":icons/generatearrow.png"), QColor::fromRgba(0xff000000) } }, Icon::Tint);
}
}
