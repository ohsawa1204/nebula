#pragma once

#include <cinttypes>
#include "innoviz_scan_decoder.hpp"

namespace nebula
{
namespace drivers
{
namespace itwo_raven
{
    constexpr uint32_t MAX_POINTS = 480*1200;
    
    class InnovizTwoRaven : InnovizScanDecoder
    {
        InnovizTwoRaven();
    };
}
}
}